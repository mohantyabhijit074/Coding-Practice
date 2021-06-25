import math
def solve():
    n = int(input())
    li = list(map(int,input().split()))
    ans = 0
    for i in range(n):
        for j in range(1,n+1):
            k = j*li[i]-(i+1) 
            if k>n:
                break 
            if k>i and k<=n:
                ans+=1
    print(ans)
t = int(input())
for _ in range(t):
    solve()