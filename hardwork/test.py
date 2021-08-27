def solve():
    n = int(input())
    temp = []
    kemp = []
    c = 0
    for i in range(n):
        li = list(map(int,input().split()))
        m = li[0]
        c+=m
        li = li[1:]
        temp.append([c,max(li)+1-i])
    ans = []
    temp.sort(key = lambda x:x[1])
    ans.append(temp[0][1])
    #print(temp)
    for i in range(1,len(temp)):
        ans.append(temp[i][1]-temp[i][0])
    print(max(ans))
    

t = int(input())
for _ in range(t):
    solve()