import Module
def Tabulirovanie(a,b,h):
    n=round((b-a)/h)+1
    for i in range(1,n+1):
        F=Module.fun(a)
        print('x=',a ,' f={:.2f}'.format(F))
        a=a+h
a=float(input("Введите значение а "))
b=float(input("Введите значение b "))
h=float(input("Введите значение h "))
tab(a,b,h)
exit(0)
