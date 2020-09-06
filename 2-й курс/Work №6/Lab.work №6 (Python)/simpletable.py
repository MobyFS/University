import random
import issimple


row = int(input('Введите количество строк: '))
col = int(input('Введите количество столбцов: '))

matrix = []
cumsum=0

for r in range(row): # row строк
    matrix.append([]) # создаем пустую строку
    for c in range(col): # в каждой строке - col элементов
        matrix[r].append(random.randint(0,1000)) # добавляем очередной элемент в строку

simple = [] # буффер-список для простых чисел

for r in range(col):
    for c in range(row):
        if issimple.IsPrime(matrix[c][r]):
            cumsum=cumsum+1 #накапливаем сумму простых чисел в столбце
            simple.append(matrix[c][r]) # добавляем простое число в список
    print('В столбце ',r,' количество простых чисел ',cumsum)
    if len(simple):# если были найдены простые числа - выводим их
        print(simple)
    cumsum=0
    simple.clear() #чистим список

print('\nТаблица:\n')

for r in range(row): # row строк
    for c in range(col):
       print(matrix[r][c],end=' ')
    print()

    
