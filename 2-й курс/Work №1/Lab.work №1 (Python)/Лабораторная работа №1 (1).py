from math import * 
a = float(input("Введите значение a ")) 
b = float(input("Введите значение b ")) 
x = float(input("Введите значение x ")) 
y = b*tan(x)*tan(x)-(a)/(sin(x/a)*sin(x/a))
d = a*exp(-sqrt(a))*cos(b*x/a)
print("\nЗначение y = " ,'{0:.3f}'.format(y)) 
print("\nЗначение d = " ,'{0:.3f}'.format(d))
exit(0)
