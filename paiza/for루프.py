n, m, k = map(int, input().split())

# 리스트 컴프리헨션을 활용한 최적화
output = [str(list(map(int, input().split())).count(k)) for _ in range(n)]

print('\n'.join(output))
