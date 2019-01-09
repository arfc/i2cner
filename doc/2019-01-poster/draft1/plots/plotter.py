import xlrd
import numpy as np
import matplotlib.pyplot as plt

title1='Electricity generated'
title2='CO2 emissions'
yax1='Electricity generated (GWh)'
yax2='CO$_2$ emitted (million tons)'
format='.png'

f=[]

f.append('conv_nuc')
f.append('conv_nonuc')
f.append('i2cner_nuc')
f.append('i2cner_nonuc')


for k in range(4):
    wb=xlrd.open_workbook(f[k]+'_final_2018-12-31.xlsx')    
    sheet1 = wb.sheet_by_index(0)
    sheet2 = wb.sheet_by_index(1)

    r1=int(sheet1.nrows)
    c1=int(sheet1.ncols)

    labels=[]
    colours=[]
    x=np.zeros(c1-2)
    y=np.zeros((r1-1,c1-2))

    for i in range(1,r1):
        colours.append(str(sheet1.cell_value(i,0)))
        labels.append(sheet1.cell_value(i,1))
    
    for i in range(2,c1):
        x[i-2]=sheet1.cell_value(0,i)
        for j in range(1,r1):
            if type(sheet1.cell_value(j,i)) == float:
                y[j-1,i-2]=sheet1.cell_value(j,i)
            else :
                y[j-1,i-2]=0

    fig, ax = plt.subplots()
    ax.stackplot(x,y,colors=colours)
    plt.legend(labels,loc='center left',bbox_to_anchor=(1,0.5),prop={'size': 10})
    plt.xlabel('Years',fontsize='12')
    plt.ylabel(yax1,fontsize='12')
    plt.title(title1,fontsize='16')
    plt.grid(True)
    plt.savefig(f[0]+'_elc', format='png', dpi=1000,bbox_inches='tight')


    r2=int(sheet2.nrows)
    c2=int(sheet2.ncols)

    labels2=[]
    colours2=[]
    x2=np.zeros(c2-2)
    y2=np.zeros((r2-1,c2-2))

    for i in range(1,r2):
        colours2.append(str(sheet2.cell_value(i,0)))
        labels2.append(sheet2.cell_value(i,1))
    
    for i in range(2,c2):
        x2[i-2]=sheet2.cell_value(0,i)
        for j in range(1,r2):
            if type(sheet2.cell_value(j,i)) == float:
                y2[j-1,i-2]=sheet2.cell_value(j,i)
            else :
                y2[j-1,i-2]=0

    fig2, ax2 = plt.subplots()
    ax2.stackplot(x2,y2,colors=colours2)
    plt.legend(labels2,loc='center left',bbox_to_anchor=(1,0.5),prop={'size': 10})
    plt.xlabel('Years',fontsize='12')
    plt.ylabel(yax2,fontsize='12')
    plt.title(title2,fontsize='16')
    plt.grid(True)
    plt.savefig(f[k]+'_co2', format='png', dpi=1000,bbox_inches='tight')


