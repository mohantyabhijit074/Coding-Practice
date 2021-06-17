import math
sieve = []
pre = []
cnt = 0
def sieve_of_erost(n):
    global sieve
    sieve=[1]*(n+1) 
    pre = [1]*(n+1)
    i = 1
    sieve[0]=0
    for i in range(2,math.ceil(math.sqrt(n))):
        if sieve[i]==1:
            for j in range(i*i,n+1,i):
                if j%i==0:
                    sieve[j] = 0
    global cnt
    for i in range(2,n+1):
        if(sieve[i]==0):
            pre[cnt] = i 
            cnt+=1 
    #print(sieve)

def solve():
    n = int(input())
    li = list(map(int,input().split()))
    i = 0
    j = 0
    d = {}
    ans = -1
    while i<n and j<n:
        if li[j] not in d:
            d[li[j]] = 1 
        else:
            d[li[j]] +=1
        if d[li[j]]==1 and sieve[li[j]]==1:
            j+=1 
        else:
            ans = max(ans,j-i)
            i=j
            j=i+1
    ans = max(ans,j-i)
    # for i in range(n-1):
    #     if li[i]%li[i+1]!=0 or li[i+1]%li[i]!=0:
    #         ans = 2
    #         print("HERE")
    if ans == 1:
        ans = -1
    print(ans)
t = int(input())
sieve_of_erost(pow(10,6)+1)
for _ in range(t):
    solve()