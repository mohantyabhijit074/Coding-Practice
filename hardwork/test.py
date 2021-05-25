t = int(input())
for _ in range(t):
    n = int(input())
    li = list(map(int,input().split()))
    li.sort()
    ans = 0
    while (1):
        x = li[0]+li[-1]
        x = x/2
        if li[-1]>x:
            li = li[:-1]
            ans+=1 
        else:
            break
    print(ans)
