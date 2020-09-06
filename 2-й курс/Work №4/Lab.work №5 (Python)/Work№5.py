from math import*
import Modul
def fun (x,a,esp):
    x=Modul.fun(x,a,esp)
    print("Корень уравнения, вычисленный с заданной точностью =",'{0:.14f}'.format(x))
    print("Корень уравнения, вычисленный напрямую = ",x1)
x=0
x1=cos(x)
a=1
esp = float(input("Введите точность вычисления = "))
fun(x,a,esp)
exit(0)

