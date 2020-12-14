import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

def eleplot(filepath, savepath):
    df = pd.read_excel(filepath,index_col=1, header=None).fillna(0).T.drop(0)
    x = [2013 + x for x in range(88)]
    Sources = ['Combined Cycle Plant', 'Solar', 'Coal', 'Oil',
               'Hydro', 'Wind', 'Nuclear', 'Geothermal',
               'Natural Gas','Hydrogen',
              ]
    Colors = ['tab:blue', 'tab:orange', 'tab:green', 'tab:red',
              'tab:purple', 'tab:brown', 'tab:pink', 'tab:gray',
              'tab:olive', 'tab:cyan']
    y = []
    colors = []
    labels = []
    for s, c in zip(Sources, Colors):
        if s in df.columns:
            labels.append(s)
            y.append(df[s].values)
            colors.append(c)
    y = np.vstack(y)
    y = np.array(y, dtype=float)
    fig, ax = plt.subplots(figsize=(10,6))
    ax.stackplot(x, y, labels=labels, colors=colors)
    ax.legend(loc='upper left')
    ax.set_xlabel('Years', fontsize=16)
    ax.set_ylabel('Electricity Generated / GWh', fontsize=16)
    ax.set_xlim((2013, 2100))
    fig.savefig(savepath, dpi=600)

def co2plot(filepath, savepath):
    df = pd.read_excel(filepath,index_col=1, header=None).fillna(0).T.drop(0)
    x = [2013 + x for x in range(88)]
    Sources = ['Combined Cycle Plant', 'Solar', 'Coal', 'Oil', 
               'Hydro', 'Wind', 'Nuclear', 'Geothermal', 
               'Natural Gas','Hydrogen',
              ]
    Colors = ['tab:blue', 'tab:orange', 'tab:green', 'tab:red',
              'tab:purple', 'tab:brown', 'tab:pink', 'tab:gray', 
              'tab:olive', 'tab:cyan']
    y = []
    colors = []
    labels = []
    for s, c in zip(Sources, Colors):
        if s in df.columns:
            labels.append(s)
            y.append(df[s].values)
            colors.append(c)
    y = np.vstack(y)
    y = np.array(y, dtype=float)
    fig, ax = plt.subplots(figsize=(10,6))
    ax.stackplot(x, y, labels=labels, colors=colors)
    ax.legend(loc='upper right')
    ax.set_xlabel('Years', fontsize=16)
    ax.set_ylabel('CO2 Emission / Million Tons', fontsize=16)
    ax.set_xlim((2013, 2100))
    fig.savefig(savepath, dpi=600)


conditions = [
    'convNoNuc','convNuc',
    'i2cnerNoNuc', 'i2cnerNuc',
]

for condition in conditions:
    co2plot(condition + '_co2.xlsx', condition + '_co2.png')
    eleplot(condition + '_ele.xlsx', condition + '_ele.png')
