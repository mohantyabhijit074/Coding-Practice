def solve():
    n,k = map(int,input().split())
    li = list(map(int,input().split()))
    d = {}
    for i in li:
        if i not in d:
            d[i] = 1 
        else:
            d[i] +=1 
    for i in d:
        if k==0:
            break 
        k-=d[i]-1 
        d[i] = 1
    if k>0:
        for i in d:
            if k==0:
                break 
            k-=1 
            d[i] = 0 
    if k>0:
        print(0)
        return 
    c = 0
    for i in d:
        if d[i]>0:
            c+=1
    print(c)
    return 
t = int(input())
for _ in range(t):
    solve()