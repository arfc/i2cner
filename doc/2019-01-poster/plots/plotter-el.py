import xlrd
import numpy as np
import matplotlib.pyplot as plt

title='Electricity generation from different sources'
yax='Electricity generated (GWh)'
format='.png'
fname='elc-2016'+fname

f1='energy2016.xlsx'

wb=xlrd.open_workbook(f1)
sheet = wb.sheet_by_index(0)

r=int(sheet.nrows)
c=int(sheet.ncols)

labels=[]
x=np.zeros(c-1)
y=np.zeros((r-1,c-1))

for i in range(1,r):
    labels.append(sheet.cell_value(i,0))

for i in range(1,c):
    x[i-1]=sheet.cell_value(0,i)
    for j in range(1,r):
        y[j-1,i-1]=sheet.cell_value(j,i)
                              
fig, ax = plt.subplots()
ax.stackplot(x,y)
plt.legend(labels,loc='center left',bbox_to_anchor=(1,0.5),prop={'size': 10})
plt.xlabel('Years',fontsize='12')
plt.ylabel(yax,fontsize='12')
plt.title(title,fontsize='16')
plt.grid(True)
#plt.show()
plt.savefig(fname, format='png', dpi=1000,bbox_inches='tight')


