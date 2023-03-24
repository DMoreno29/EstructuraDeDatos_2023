N = int(input())
arr_numbers = list(reversed(list(map(lambda x: int(x), input().split(" ")))))

res_acumulado = arr_numbers[0]
for element in arr_numbers[1:]:
    res_acumulado += element
    print(res_acumulado)