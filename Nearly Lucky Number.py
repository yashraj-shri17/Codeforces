s = input().strip()
x = list(s)
count_4 = 0
count_7 = 0
count_rem = 0
for i in x:
    if i == '4':
        count_4 += 1
    elif i == '7':
        count_7 += 1
    else:
        count_rem += 1
lucky_num = count_4 + count_7
if lucky_num==4 or lucky_num==7 :  # Fix the syntax error here
    print('YES')
else:
    print('NO')