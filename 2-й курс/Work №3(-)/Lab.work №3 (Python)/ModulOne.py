#МОДУЛЬ1
from math import*
def func (x,y,c):
        max = x
        if pow(y,2)>max:
            max=pow(y,2)
        min=sqrt(x) 
        if sqrt(y+c)<min:
            min = sqrt(y+c)
        if max<min:
            min=max
        p=min
        print("\nРезультат = ",format(p))
