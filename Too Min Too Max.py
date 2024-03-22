t = int(input())
# SCANNING TEST CASES
for i in range(t):
    # SCANNING TEST_VARIABLE
    n = int(input())
    a = list(map(int, input().split()))
    a = sorted(a)
    ans = 2 * (a[n - 1] - a[0] + a[n - 2] - a[1])
    print(ans)