import Module2
k = int(input('Введите количество столбцов : '))
m = int(input('Введите количество строк : '))
matrix=Module2.input_mas(k,m)
Module2.out_mas(matrix,k,m)
simple=Module2.input_out_simple(matrix,k,m)
exit()
