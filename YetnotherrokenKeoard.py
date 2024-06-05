for _ in range(int(input())):
    s = list(input())
    n = len(s)
    u = []
    l = []
    for i in range(n):
        if s[i] == 'b':
            s[i] = ''
            if l:
                s[l.pop()] = ''
            continue
        if s[i] == 'B':
            s[i] = ''
            if u:
                s[u.pop()] = ''
            continue
        if 'a' <= s[i] <= 'z':
            l += [i]
        else:
            u += [i]
    print(''.join(s))
