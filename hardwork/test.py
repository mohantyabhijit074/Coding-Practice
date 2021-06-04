def solve():
    n = int(input())
    li = list(map(int,input().split()))
    i = 1
    ans = 0
    while i<len(li)-1:
        #print(li)
        if len(set(li))==1:
            break
        if li[i+1]>li[i-1]:
            li[i-1]+=li[i]
            li.pop(i)
            ans+=1
        elif li[i+1]<li[i-1]:
            li[i+1]+=li[i]
            li.pop(i)
            ans+=1
        else:
            i+=1
    if len(set(li))==1:
        print(ans)
    else:
        if len(li)==2:
            print(ans+1)
        elif len(li)==3:
            print(ans+2)
t = int(input())
for _ in range(t):
    solve()