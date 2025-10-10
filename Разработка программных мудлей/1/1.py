import random
import time


def generate_array(size):
    return [random.randint(1, 100000) for _ in range(size)]


def bubble_sort(arr):
    arr = arr.copy()
    n = len(arr)
    count = 0
    for i in range(n):
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                count += 1
    return arr, count


def selection_sort(arr):
    arr = arr.copy()
    count = 0
    n = len(arr)
    for i in range(n):
        min_idx = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_idx]:
                min_idx = j
        if min_idx != i:
            arr[i], arr[min_idx] = arr[min_idx], arr[i]
            count += 1
    return arr, count


def insertion_sort(arr):
    arr = arr.copy()
    count = 0
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
            count += 1
        arr[j + 1] = key
    return arr, count


def quick_sort(arr):
    arr = arr.copy()
    count = [0]

    def quick_sortе(a, low, high):
        if low < high:
            p = partition(a, low, high)
            quick_sortе(a, low, p - 1)
            quick_sortе(a, p + 1, high)

    def partition(a, low, high):
        pivot = a[high]
        i = low - 1
        for j in range(low, high):
            if a[j] < pivot:
                i += 1
                a[i], a[j] = a[j], a[i]
                count[0] += 1
        a[i + 1], a[high] = a[high], a[i + 1]
        count[0] += 1
        return i + 1

    quick_sortе(arr, 0, len(arr) - 1)
    return arr, count[0]


def merge_sort(arr):
    arr = arr.copy()
    count = [0]

    def merge_sorte(a):
        if len(a) > 1:
            mid = len(a) // 2
            L = a[:mid]
            R = a[mid:]

            merge_sorte(L)
            merge_sorte(R)

            i = j = k = 0
            while i < len(L) and j < len(R):
                if L[i] < R[j]:
                    a[k] = L[i]
                    i += 1
                else:
                    a[k] = R[j]
                    j += 1
                count[0] += 1
                k += 1

            while i < len(L):
                a[k] = L[i]
                i += 1
                k += 1
            while j < len(R):
                a[k] = R[j]
                j += 1
                k += 1

    merge_sorte(arr)
    return arr, count[0]


def shaker_sort(arr):
    arr = arr.copy()
    n = len(arr)
    left = 0
    right = n - 1
    count = 0
    while left <= right:
        for i in range(left, right):
            if arr[i] > arr[i + 1]:
                arr[i], arr[i + 1] = arr[i + 1], arr[i]
                count += 1
        right -= 1
        for i in range(right, left, -1):
            if arr[i - 1] > arr[i]:
                arr[i], arr[i - 1] = arr[i - 1], arr[i]
                count += 1
        left += 1
    return arr, count




size = int(input("Введите размер массива: "))
array = generate_array(size)

sorts = {
        "Bubble sort": bubble_sort,
        "Selection sort": selection_sort,
        "Insertion sort": insertion_sort,
        "Quick sort": quick_sort,
        "Merge sort": merge_sort,
        "Shaker sort": shaker_sort
    }

for name, func in sorts.items():
    start = time.perf_counter()
    sorted_arr, perstan = func(array)
    end = time.perf_counter()
    print(f"\n{name}:")
    print(f"Время выполнения: {end - start:} секунд")
    print(f"Количество перестановок: {perstan}")
