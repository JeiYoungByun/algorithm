num = int(input())  # 과목 개수
ScoreList = list(map(int, input().split()))  # 점수 리스트 입력

if ScoreList:  # 리스트가 비어있지 않은 경우
    maxScore = max(ScoreList)
    if maxScore > 0:
        newSum = sum(score / maxScore * 100 for score in ScoreList)
        print(newSum / num)
    else:
        print(0)  # 모든 점수가 0이면 평균도 0
else:
    print(0)  # 리스트가 비어 있으면 0 출력

