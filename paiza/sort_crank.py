n = int(input())

output = [list(map(int, input().split())) for _ in range(n)]

output.sort(key=lambda x:(x[1], x[0]), reverse=True)

for human in output:
    print(f"{human[0]} {human[1]}")