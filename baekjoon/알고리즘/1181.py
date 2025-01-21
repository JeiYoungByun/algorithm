n = int(input())
a = ''
lst=[]
for i in range(n):
    a = input()
    lst.append(a)
    
lst.sort()
lst.sort(key=len)

result = []

for word in lst:
    if word not in result:
        result.append(word)


print('\n'.join(result))