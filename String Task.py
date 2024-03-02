s = input()
vowels = "AEIOUYaeiouy"
result = ""
for char in s:
    if char in vowels:
        continue
    else:
        result += '.' + char.lower()
print(result)
