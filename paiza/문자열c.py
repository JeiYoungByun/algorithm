n = int(input())

output = []

for _ in range(n):
    now, hour, minute = input().split()
    now_hour, now_minute = map(int,now.split(':'))

    result_hour = now_hour + int(hour)
    result_minute = now_minute + int(minute)
    
     # 분이 60 이상이면 시간 반영
    result_hour += result_minute // 60
    result_minute %= 60

    # 시간이 24 이상이면 24시간제 반영
    result_hour %= 24

    # 두 자리 숫자로 포맷팅
    output.append(f"{result_hour:02}:{result_minute:02}")

print('\n'.join(output))
   
