import xlrd
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.ticker import FormatStrFormatter


title='CO2 emission values relative error'
yax='Error (%)'
format='.png'
fname='co2-err'+format

f1='co2-error.xlsx'

wb=xlrd.open_workbook(f1)
sheet = wb.sheet_by_index(0)

r=int(sheet.nrows)
c=int(sheet.ncols)

#labels=[]
x=np.zeros(c-1)
y=np.zeros((r-1,c-1))

#for i in range(1,r):
#    labels.append(sheet.cell_value(i,0))

for i in range(1,c):
    x[i-1]=sheet.cell_value(0,i)
    for j in range(1,r):
        y[j-1,i-1]=sheet.cell_value(j,i)
                              
fig = plt.figure()
ax1=fig.add_subplot(111)

ax1.scatter(x.astype(int),y[0,:],marker='o',color='red')
plt.plot(x.astype(int),y[0,:],linestyle='dashed',color='blue')
ax1.xaxis.set_major_formatter(FormatStrFormatter('%.0f'))
#ax1.scatter(x,y[1,:],marker='o',color='red')
#plt.plot(x,y[1,:],linestyle='dashed',color='red')
#plt.legend(labels,loc='center left',bbox_to_anchor=(1,0.5),prop={'size': 14})
plt.xlabel('Years',fontsize='14')
plt.ylabel(yax,fontsize='14')
plt.title(title,fontsize='16')
#plt.grid(True)
#plt.show()
plt.savefig(fname, format='png', dpi=1000,bbox_inches='tight')


