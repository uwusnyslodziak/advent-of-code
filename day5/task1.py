import fileinput

rules = []
levels = []
res = 0

for line in fileinput.input():
    line = line.rstrip()
    if '|' in line:
        line = line.split('|')
        rules.append(line)
    elif ',' in line:
        line = line.split(',')
        levels.append(line)

for level in levels:
    pos = {}
    for i in range(len(level)):
        pos[level[i]] = i
    print(pos)
    check = True
    for rule in rules:
        if (rule[0] in level) and (rule[1] in level):
            if pos[rule[1]] < pos[rule[0]]:
                check = False
    print(check)
    if check:
        mid = int(len(level)/2)
        res += int(level[mid])

print(res)

