n = int(input())
keyword = ''

keywordList = []

for _ in range(n):
    keyword = input()
    
    if keyword in keywordList:
        keywordList.remove(keyword)
        
    keywordList.append(keyword)

keywordList.reverse()
result = '\n'.join(keywordList)
print(result)


