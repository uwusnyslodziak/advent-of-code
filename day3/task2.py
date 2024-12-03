res = 0
uwu = "x"
for i in range(6):
    uwu = uwu+input()+'x'

uwu = uwu.split('do()')
for part in uwu:
    part = part.split("don't()")

    owo = part[0].split('mul(')
    for x in owo:
        y = x.split(',')
        if len(y) < 2:
            continue
        a = y[0]
        b = y[1]
        print(a, b)
        b = b.split(')')
        if len(b) == 1:
            continue
        if b[0] == '':
            continue
        b = b[0]
        try:
            a = int(a)
        except:
            continue

        try:
            b = int(b)
        except:
            continue

        res += a*b
        print(a, b)
print(res)
    
