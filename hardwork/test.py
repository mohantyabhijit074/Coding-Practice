def solve():
    n,a,b,c = map(int,input().split())
    ans = 0
    for i in range(4001):
        for j in range(4001):
            d = n-i*a-j*b 
            if d<0:
                break 
            k = d/c 
            if k==int(k):
                ans = max(ans,int(k)+i+j)
    print(ans)

t = 1
for _ in range(t):
    solve()