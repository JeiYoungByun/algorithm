a = int(input())
start = 1
cnt = 0

while True:
    if a>start:
        cnt += 1
        start += cnt*6
    else:
        break

print(cnt+1)