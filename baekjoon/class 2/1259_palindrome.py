pal = []
after = []

while(True):
    a = input()
    if a=='0':
        break
    else:
        b = list(a)
        pal.append(b)

for t in pal:
    after = list(reversed(t))
    if t == after:
        print('yes')
    else:
        print('no')