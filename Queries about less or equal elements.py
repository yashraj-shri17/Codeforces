n, m = map(int, input().split())

arr = list(map(int, input().split()))
brr = list(map(int, input().split()))
arr.sort()
for i in range(m):
    count = 0
    low, high = 0, n - 1
    while low <= high:
        mid = (low + high) // 2
        if arr[mid] <= brr[i]:
            count = mid + 1 
            low = mid + 1
        else:
            high = mid - 1 
    print(count, end=" ")
