n = int(input())

items = list(map(int, input().split()))

freq = {}

for item in items:
    if item in freq:
        freq[item] += 1
    else:
        freq[item] = 1

max_item = max(freq.values())

output = sorted(k for k in freq.keys() if freq[k] == max_item)

print(" ".join(map(str, output)))



