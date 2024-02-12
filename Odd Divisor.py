a = int(input())
 
for i in range(0,a):
    n = int(input())
    while n%2 == 0:
        n = int(n/2)
    if n==1:
        print('NO')
    else:
        print('YES')