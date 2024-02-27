def solve():
    n = int(input())
    arr = list(map(int, input().split()))
    total_sum = sum(arr)
    if total_sum % 3 == 0:
        print(0)
    else:
        min_x = (total_sum % 3 == 1) * 2 + (total_sum % 3 != 1)
        for i in range(n):
            temp_sum1 = total_sum - arr[i]
            if temp_sum1 % 3 == 0:
                ch = 1
            else:
                ch = (temp_sum1 % 3 == 1) * 2 + (temp_sum1 % 3 != 1)
                ch += 1
            min_x = min(ch, min_x)
        print(min_x)
 
def main():
    t = int(input())
    for _ in range(t):
        solve()
 
if __name__ == "__main__":
    main()