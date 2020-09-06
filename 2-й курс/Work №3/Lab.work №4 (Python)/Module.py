#Модуль
from math import*
def fun(a):
    if a > 1:
        p=exp(a)
    if a < 0:
        p=2*a-1
    if (0 <= a) and (a<= 1):
        p=-1
    return p
