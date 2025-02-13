n = int(input())

lst1 = list(input())
lst2 = list(input())

k = 0

if lst1 == lst2:
        print('Yes')
else:
    for i in range(n-1):
        if lst1 == lst2:
             print('Yes')
             break
        else:
            lst1 = lst1[1:] + lst1[:1]
