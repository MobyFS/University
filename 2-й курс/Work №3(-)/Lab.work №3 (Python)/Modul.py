import ModulOne
import ModulTwo
def func (x,y,c):
    if y >=0:
        ModulOne.func(x,y,c)
    else:
        ModulTwo.func(x,y)
x = int(input("Введите значение x = "))
y = int(input("Введите значение y = "))
c = int(input("Введите значение c = "))
func(x,y,c)
exit(0)
