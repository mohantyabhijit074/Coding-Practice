def solve(i):
    n,m,a,b = map(int,input().split())
    if n+m-1>a or n+m-1>b:
        print("Case #"+str(i+1)+": "+"Impossible")
    else:
        print("Case #"+str(i+1)+": "+"Possible")
        for i in range(n):
            for j in range(m):
                if i==0 and j==0:
                    print(a-(n+m-1-1),end=" ")
                elif i==0 and j==m-1:
                    print(b-(n+m-1-1),end=" ")
                else:
                    print(1,end=" ")
            print()
t = int(input())
for _ in range(t):
    solve(_)