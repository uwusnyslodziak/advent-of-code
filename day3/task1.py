res = 0
for i in range(6):
    uwu = input()
    uwu = uwu.split('mul(')
    for x in uwu:
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
    
