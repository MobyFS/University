from math import *
def znach(x,y,c):
    if y >=0:
        max = x
        if pow(y,2)>max:
            max=pow(y,2)
        min=sqrt(x) 
        if sqrt(y+c)<min:
            min = sqrt(y+c)
        if max<min:
            min=max
        p=min
    else:
        max = sin(x)
        if cos(y)>max:
            max=cos(y)
        if tan(x*y)>max:
            max=tan(x*y)
        p=max
    return p
x = int(input("Введите значение x = "))
y = int(input("Введите значение y = "))
c = int(input("Введите значение c = "))
rez=znach(x,y,c)
print("\nРезультат = ",rez)


