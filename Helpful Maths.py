sum_str = input()
summands = sum_str.split('+')
summands.sort()
new_sum = '+'.join(summands)
print(new_sum)