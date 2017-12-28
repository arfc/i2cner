#NPRE 247 CP1 Decay Chain
#Anshuman Chaube

import math
import numpy as np
import matplotlib.pyplot as plt
import csv


def readip(fname):
    """reads input file with name <fname> and returns data in a dictionary ipdict"""
    import fnmatch
    ipdict={}
    with open(fname) as f:
      for line in f:
         (key,val)=line.split('=')
         ipdict[key]=float(val)

    temp_dict={}
    for key in ipdict:
        if "hl_" in key:
             if ipdict[key]==0:
                 l_temp=0
             else:
                 l_temp=0.693/ipdict[key]               
             
             temp_str=key
             temp_dict["lam_"+temp_str.split('_')[1]]=(l_temp)


    ipdict.update(temp_dict)     
        
    return ipdict


def delta(n_p,lam,dt):
    dn=lam*n_p*dt
    return dn

def numsol(n_0,lam_abc,t,dt):

    n_a0=n_0[0]
    n_b0=n_0[1]
    n_c0=n_0[2]
    
    l_a=lam_abc[0]
    l_b=lam_abc[1]
    l_c=lam_abc[2]

    n_a=np.zeros(np.size(t))
    n_a[0]=n_a0
    n_b=np.zeros(np.size(t))
    n_b[0]=n_b0
    n_c=np.zeros(np.size(t))
    n_c[0]=n_c0
     
    for i in range(0,np.size(t)-1) :
       dn1=delta(n_a[i],l_a,dt)
       dn2=delta(n_b[i],l_b,dt)
       n_a[i+1]=n_a[i]-dn1
       n_b[i+1]=n_b[i]+dn1-dn2
       n_c[i+1]=n_c[i]+dn2
       chksum=n_a[i+1]+n_b[i+1]+n_c[i+1]
       if (chksum <99.9) or (chksum>100.1):
         print("Error:conservation violated. Check code, stop drinking Soplica")

    
    return n_a, n_b, n_c    
    
def ansol(n_0,lam_abc,t,dt):

    n_a0=n_0[0]
    n_b0=n_0[1]
    n_c0=n_0[2]
    
    l_a=lam_abc[0]
    l_b=lam_abc[1]
    l_c=lam_abc[2]

    t_1=t[1:]

    an_a_t=n_a0*(np.exp(-l_a*t_1))
    an_a=np.append(n_a0,an_a_t)

    diff=np.exp(-l_a*t_1)-np.exp(-l_b*t_1)
    an_b_t=(n_b0*(np.exp(-l_b*t_1)))+((n_a0*l_a)/(l_b-l_a)*diff)
    an_b=np.append(n_b0,an_b_t)

    ea=1-np.exp(-l_a*t_1)
    eb=1-np.exp(-l_b*t_1)
    an_c_t=n_c0+(n_b0*eb/l_b)+(((n_a0)/(l_b-l_a))*((ea*l_b)-(eb*l_a)))
    an_c=np.append(n_c0,an_c_t)

    return an_a,an_b,an_c
    

def writeop(ipdat,ipdat2):
   
         f = open("output6.txt","w")
         f.write( str(ipdat) )
         f.close()


         fh= open("output6.txt","ab")
         np.savetxt(fh,ipdat2[0],delimiter="|",newline="\n",header="\n t")
         np.savetxt(fh,ipdat2[1],delimiter="|",newline="\n",header="n_a")
         np.savetxt(fh,ipdat2[2],delimiter="|",newline="\n",header="n_b")
         np.savetxt(fh,ipdat2[3],delimiter="|",newline="\n",header="n_c")
         np.savetxt(fh,ipdat2[4],delimiter="|",newline="\n",header="an_a")
         np.savetxt(fh,ipdat2[5],delimiter="|",newline="\n",header="an_b")
         np.savetxt(fh,ipdat2[6],delimiter="|",newline="\n",header="an_c")
         fh.close()    
    

ipdata=readip("input.txt")
#print(ipdata)


dt_factor=0.25/8
t_lim=ipdata["t_final"]
dt=ipdata["Dt"] * dt_factor
opdata=ipdata
opdata["Dt"]=dt
n_0=np.array([ ipdata["N_a0"], ipdata["N_b0"], ipdata["N_c0"] ])
lam_abc=np.array([ ipdata["lam_a"], ipdata["lam_b"], ipdata["lam_c"] ])
t=np.arange(0, t_lim+dt, dt)

n_a,n_b,n_c=numsol(n_0,lam_abc,t,dt)
an_a,an_b,an_c=ansol(n_0,lam_abc,t,dt)

ophead=['t','n_a','n_b','n_c','an_a','an_b','an_c']

tdat=[[t],[n_a],[n_b],[n_c],[an_a],[an_b],[an_c]]
#dat=zip(*tdat)


writeop(opdata,tdat)
#print(n_b[0])
#print(l_b)
#print(n_b[-1])
#print(t[-1])
#print(n_c[-1]+n_b[-1]+n_a[-1])

#plt.plot(n_c,t,'r--',an_c,t,'bs')
#plt.show()

