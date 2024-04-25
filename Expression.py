a = int(input())
b = int(input())
c = int(input())
p = (b+c)*a
q = (a+b)*c
r = a+b+c
s = a*b*c
if p >= q and p>=r and p>=s :
    print(p)
elif q>=p and q>=r and q>=s :
    print(q)
elif r>=s and r>=p and r>=q :
    print(r)
else :
    print(s)