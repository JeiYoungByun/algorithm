m, n = map(int, input().split())

cards = []

for i in range(1, m+1):
    cards.append(i)

def shuffle(lst):
    result = []
    for j in range(m//2):
        result += lst[m//2+j::-m//2]

    return result

for _ in range(n):
    cards = shuffle(cards)

print(' '.join(map(str, cards)))