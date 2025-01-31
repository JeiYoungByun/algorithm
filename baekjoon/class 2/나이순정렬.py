members = []
n = int(input())

for i in range(n):
    age, member = input().split()
    agenum = int(age)
    members.append((agenum, member))
    
members.sort(key = lambda x: x[0])

for age, name in members:
    print(age, name)