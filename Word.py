def character(word):
    count1 = sum(1 for char in word if char.isupper())
    count2 = len(word) - count1

    if count1 > count2:
        correct = word.upper()
    else:
        correct = word.lower()

    return correct



word = input()
print(character(word))