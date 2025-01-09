import math

n = int(input())

s,m,l,xl,xxl,xxxl=map(int, input().split())

t, p = map(int,input().split())

print(math.ceil(s/t)+math.ceil(m/t)+math.ceil(l/t)+math.ceil(xl/t)+math.ceil(xxl/t)+math.ceil(xxxl/t))

print(n//p, n%p)