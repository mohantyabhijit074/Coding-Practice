def solve():
    n,m,q = map(int,input().split())
    d = {}
    c = 0
    f = 0
    for i in range(q):
        a,b = map(str,input().split())
        b = int(b)
        if b>n:
            f = 1
        if a =='+':
            if c==m and b not in d:
                f = 1
            else:
                c+=1 
                if b not in d:
                    d[b] = 1 
                else:
                    d[b] +=1 
        else:
            if c==0:
                f=1  
            else:
                if b not in d:
                    f = 1 
 
                else:
                    d[b]-=1 
                    if d[b]==0:
                        c-=1 
    if f==0:
        print("Consistent")
        return
    else:
        print("Inconsistent")
        return
t = int(input())
for _ in range(t):
    solve()