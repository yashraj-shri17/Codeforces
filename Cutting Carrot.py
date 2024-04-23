n, h = map(int, input().split())
for i in range(1,n):
    x = h* (i/n)**(1/2) #Formual to find the height for 
    print(x,end = " " )