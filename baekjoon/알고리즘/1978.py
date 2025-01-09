n = int(input())  # 첫 번째 줄: 숫자의 개수

a = list(map(int, input().split()))  # 두 번째 줄: 공백으로 구분된 숫자 리스트

index = 0

cnt = n  # 초기에는 모든 숫자를 소수로 가정

# 소수 판별 함수

def cntprimenumber():

    global cnt, index

    if a[index] < 2:  # 1 이하의 숫자는 소수가 아님

        cnt -= 1

        return

    for x in range(2, a[index]):  # 2부터 숫자 바로 앞까지 확인

        if a[index] % x == 0:  # 나누어떨어지면 소수가 아님

            cnt -= 1

            break

# 리스트의 각 요소 검사

for index in range(n):

    cntprimenumber()

print(cnt)  # 최종 소수 개수 출력