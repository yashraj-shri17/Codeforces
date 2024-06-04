for _ in range(int(input())):
    s = input()
    c = [0, 0]
    for i in range(len(s)):
        c[int(s[i])] += 1
    for j in range(len(s) + 1):
        if (j == len(s) or c[1 - int(s[j])] == 0):
            print(len(s) - j)
            break
        c[1 - int(s[j])] -= 1

