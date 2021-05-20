t = int(input())
for _ in range(t):
    n = int(input())
    li = list(map(int,input().split()))
    d = {}
    for i in range(n):
        if li[i] not in d:
            d[li[i]] = [i]
        else:
            d[li[i]].append(i)
    ans = 0
    #print(d)
    for i in d:
        k = d[i]
        if len(k)>1:
            for j in range(0,len(k)):
                for m in range(j+1,len(k)):
                    ans+=k[m] - k[j]
    print(ans)
        