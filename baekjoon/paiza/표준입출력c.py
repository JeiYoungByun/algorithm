n = int(input())

age = 0

result=''

for _ in range(n):
    name, strage = input().split()
    age = str(int(strage) + 1)
    result += name + ' ' + age + '\n'

print(result)