import math
t = int(input())
for _ in range(t):
    n,w = map(int,input().split())
    li = list(map(int,input().split()))
    k = li.copy()
    k.sort()
    if k[0]>w:
        print(-1)
    elif sum(li)<w/2:
        print(-1)
    else:
        temp = []
        f = 0
        for i in range(n):
            temp.append([i,li[i]])
        #print(temp)
        ans = []
        temp.sort(key = lambda x:x[1],reverse = True)
        s = 0
        for i in range(n):
            if temp[i][1]+s<=w:
                s+=temp[i][1]
                ans.append(temp[i][0]+1)
        if s<math.ceil(w/2):
            print(-1)
        else:
            print(len(ans))
            print(*ans)