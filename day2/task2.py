n = 1000
res = 0
for _ in range(n):
    a = input()
    a = a.split(' ')
    b = []
    for x in a:
        b.append(int(x))
    print(b)

    check = True
    diff = b[1]-b[0]
    if not (1 <= abs(diff) <= 3):
        check = False

    for i in range(2, len(b)):
        curr_diff = b[i]-b[i-1]
        if not (1 <= abs(curr_diff) <= 3):
            check = False
        if curr_diff*diff < 0:
            check = False

    if check:
        res += 1
    else:
        for i in range(len(b)):

            b = []
            for j in range(len(a)):
                if j != i:
                    b.append(int(a[j]))
            print(b)

            check = True
            diff = b[1]-b[0]
            if not (1 <= abs(diff) <= 3):
                check = False

            for i in range(2, len(b)):
                curr_diff = b[i]-b[i-1]
                if not (1 <= abs(curr_diff) <= 3):
                    check = False
                if curr_diff*diff < 0:
                    check = False

            if check:
                res += 1
                break

print(res)

