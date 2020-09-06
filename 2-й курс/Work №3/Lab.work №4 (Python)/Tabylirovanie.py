import Module
def tab(a,b,h):
    n=round((b-a)/h)+1
    for i in range(1,n+1):
        Y=Module.fun(a)
        print('x=',a ,' Y={:.2f}'.format(Y))
        a=round(a+h,1)
a=float(input("Введите значение а "))
b=float(input("Введите значение b "))
h=float(input("Введите шаг "))
tab(a,b,h)
exit(0)
