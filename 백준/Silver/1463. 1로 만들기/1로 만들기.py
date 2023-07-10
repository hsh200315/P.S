a = input()
a = int(a)
arr = [0]
min = 1000000
for i in range(2, a+1):
    min = 1000000
    if i % 3 == 0:
        min = arr[int(i/3-1)] + 1
    if i % 2 == 0:
        if min > arr[int(i/2 - 1)] + 1:
            min = arr[int(i/2 - 1)] + 1
    if min > arr[i - 2] + 1:
        min = arr[i - 2] + 1
    arr.append(min)

print(arr[a-1])
