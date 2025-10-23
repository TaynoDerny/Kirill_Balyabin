import timeit
import cProfile
#Задача 1
def factorial_recursive(n):
    if n == 1:
        return 1
    return n * factorial_recursive(n-1)
print("Рекурсия:")
for n in [10, 20, 30]:
    time = timeit.timeit(lambda: factorial_recursive(n), number=1000)
    print(f"n={n}: {time} сек")
print(" ")

#Задача 2
def factorial_iterative(n):
    result = 1
    for i in range(1, n+1):
        result *= i
    return result
print("Интерация:")
for n in [10, 20, 30]:
    time = timeit.timeit(lambda: factorial_iterative(n), number=1000)
    print(f"n={n}: {time} сек")
#Задача 3
print(" ")



cProfile.run('factorial_recursive(500)')
cProfile.run('factorial_iterative(500)')