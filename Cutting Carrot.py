n, h = map(int, input().split())
for i in range(1,n):
    x = h* (i/n)**(1/2) #Formual to find the height for which the areas of given are all equal
    print(x,end = " " )