import sys
input = sys.stdin.read

def build_sparse_table(arr, N):
    import math
    K = math.ceil(math.log2(N)) + 1
    st = [[0] * K for _ in range(N)]
    for i in range(N):
        st[i][0] = arr[i]
    j = 1
    while (1 << j) <= N:
        i = 0
        while (i + (1 << j) - 1) < N:
            st[i][j] = st[i][j - 1] | st[i + (1 << (j - 1))][j - 1]
            i += 1
        j += 1
    return st

def query(L, R, st):
    result = 0
    j = len(st[0]) - 1
    while j >= 0:
        if (1 << j) <= R - L + 1:
            result |= st[L][j]
            L += 1 << j
        j -= 1
    return result

def main():
    data = input().split()
    idx = 0
    t = int(data[idx])
    idx += 1
    results = []
    while t > 0:
        t -= 1
        n = int(data[idx])
        idx += 1
        arr = list(map(int, data[idx:idx + n]))
        idx += n
        
        st = build_sparse_table(arr, n)
        
        l, r, ans = 1, n, n
        while l <= r:
            mid = (l + r) // 2
            val = 0
            for i in range(mid):
                val |= arr[i]
            
            is_valid = True
            for i in range(1, n - mid + 1):
                if query(i, i + mid - 1, st) != val:
                    is_valid = False
                    break
            
            if is_valid:
                ans = mid
                r = mid - 1
            else:
                l = mid + 1
        
        results.append(ans)
    
    print("\n".join(map(str, results)))

if __name__ == "__main__":
    main()

