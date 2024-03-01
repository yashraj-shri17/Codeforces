def execute_bit_program(n, statements):
    x = 0
    for statement in statements:
        if "++" in statement:
            x += 1
        else:
            x -= 1
    return x
n = int(input())
statements = [input() for _ in range(n)]
print(execute_bit_program(n, statements))

