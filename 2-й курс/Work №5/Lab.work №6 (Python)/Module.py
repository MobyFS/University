import random
def fun(N,M):
    x=random.sample(range(100),N)
    print("\n Список x ",x)
    y=random.sample(range(100),M)
    print("\n Список y ",y)
    poz=int(input("Позиция добавления элемента в список "))
    x.insert(poz,y)
    print("\n Список z ",x)
    return x
