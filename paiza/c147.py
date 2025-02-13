from collections import Counter

answer = input()
user_input = input()

if len(answer) != len(user_input):
    print('NO')
    exit()

print('YES' if Counter(answer) == Counter(user_input) else 'NO')

