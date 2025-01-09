import math

m= []

while True:
    a, b, c = list(map(int, input().split()))

    a, b, c = sorted([a, b, c])

    if a == 0 and b == 0 and c == 0:
        break

    if math.pow(a, 2) + math.pow(b, 2) == math.pow(c, 2):
        m.append("right")
    
    else:
        m.append("wrong")

for i in range(0, len(m)):
    print(m[i])