def solve():
    n,k = map(int,input().split())
    li = []
    for i in range(n):
        a,b = map(int,input().split())
        li.append([a,b])
    ans = 0
    li.sort(key = lambda x:x[1])
    i = 0
    j = 1
    ans = 1
    c = 0
    while i<n and j<n:
        if li[j][0]>=li[i][1]:
            ans+=1 
            i = j 
            if c>0:
                c-=1
        elif li[j][0]<li[i][1] and c<k:
            c+=1 
            ans+=1 
            i = j
        j+=1 
    print(ans)

t = 1
for _ in range(t):
    solve()