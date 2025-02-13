from collections import Counter

n, m = map(int, input().split())

designated_list = []
input_list = []

for _ in range(m):
    a = int(input())
    designated_list.append(a)

for _ in range(m):
    b = int(input())
    input_list.append(b)

designated_counter = Counter(designated_list)
input_counter = Counter(input_list)

# print(designated_counter)
# print(input_counter)

if designated_counter == input_counter:
    print('Yes')

else:
    print('No')