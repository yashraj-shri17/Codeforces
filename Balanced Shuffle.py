str = input()
a = []
b = 0
for i in range(len(str)):
  a.append((b, -i, str[i]))
  if str[i] == '(':
    b += 1
  else:
    b -= 1
a.sort()
print("".join(x[2] for x in a))

