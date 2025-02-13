from collections import Counter

n = int(input())
items = list(map(int, input().split()))

freq = Counter(items)  # 빈도수 자동 계산

# 최빈값 찾기
max_freq = freq.most_common(1)[0][1]  # 가장 많이 나온 횟수

# 최빈값과 같은 빈도를 가진 숫자들을 정렬하여 출력
output = sorted(k for k, v in freq.items() if v == max_freq)

print(" ".join(map(str, output)))




