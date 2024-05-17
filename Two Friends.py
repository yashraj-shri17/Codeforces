for _ in range(int(input())):
    n = int(input())
    p = [int(x) - 1 for x in input().split()]
    res = 3
    for i in range(n):
        if p[p[i]] == i:
            res = 2
    print(res)
