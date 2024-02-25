n = int(input())
arr = list(map(int, input().split()))
arr.sort()
m = int(input())
for i in range(m):
    x = int(input())
    count = 0
    low, high = 0, n - 1
    while low <= high:
        mid = (low + high) // 2
        if arr[mid] <= x:
            count = mid + 1 
            low = mid + 1
        else:
            high = mid - 1 
    print(count, end="\n")