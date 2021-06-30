r = 500000004
def solve():
    a,b = map(int,input().split())
    if a==0 or b==0:
        print(0)
    else:
        x = max(a,b)
        y = pow(2,x)
        ans = (y*r)%(pow(10,9)+7)
        print(pow(2,x,pow(10,9)+7))
        #print(ans)
t = 1
for _ in range(t):
    solve()