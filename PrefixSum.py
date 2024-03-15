def prefixSum(arr):
    n = len(arr)
    prefix = [0] * n

    prefix[0] = arr[0]
    for i in range(1, n):
        prefix[i] = prefix[i - 1] + arr[i]

    return prefix

arr = [10, 20, 30, 40, 50]
print("Original array:", arr)

prefix = prefixSum(arr)
print("Prefix sum array:", prefix)

#The time complexity of this code is O(n)