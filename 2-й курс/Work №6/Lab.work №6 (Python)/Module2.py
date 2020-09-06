import random
import Module
def input_mas(k,m):
    for i in range(k): 
        for j in range(m):
            matrix=[[i+j for i in random.sample(range(10),m)]
                         for j in random.sample(range(10),k)]
        return matrix
    
def input_out_simple(matrix,k,m):
    simple = []
    cumsum=0
    for i in range(m):
        for j in range(k):
            if Module.IsPrime(matrix[j][i]):
                cumsum=cumsum+1
        simple.append(cumsum) 
        cumsum=0
    print('\nПоследовательность L : ',simple)
    return matrix
    simple.clear()
    
def out_mas(matrix,k,m):    
    print('\nТаблица :\n')
    for i in range(k): 
        for j in range(m):
           print(matrix[i][j],end=' ')
        print(" ")
