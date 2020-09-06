#Модуль
from math import*
def fun(x,a,esp):
    while abs(x-a)>esp:
        a=x
        x=cos(a)
    return x
