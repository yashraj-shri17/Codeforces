s=input()
m=input()
p = ''.join(reversed(s))
if p==m:
    print('YES')
else:
    print('NO')