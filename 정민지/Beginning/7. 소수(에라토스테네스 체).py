import sys

# sys.stdin = open("input.txt", "rt")
N = int(input())
lst = [0] * (N+2)
cnt = 0

for i in range(2, N+1):
    if lst[i] == 0:
        cnt += 1
        for j in range(i, N+1, i):
            lst[j] = 1

print(cnt)
