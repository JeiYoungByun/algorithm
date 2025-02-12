p, q, r = map(int, input().split())

pList = []
qList = []
answer = []

for _ in range(p):
    pList.append(tuple(map(int, input().split())))

pList.sort(key=lambda x:x[0])

for _ in range(q):
    qList.append(tuple(map(int, input().split())))

qList.sort(key=lambda x:x[0])

for i in range(p):
    key = pList[i][1]
    print(f'{i+1} {qList[key-1][1]}')