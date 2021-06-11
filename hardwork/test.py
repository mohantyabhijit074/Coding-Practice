n = int(input())
li = list(map(int,input().split()))
q = int(input())
temp = [0]*n
s = 0
if li[0]==-1:
    temp[0] = 1
for i in range(1,n):
    if li[i]==-1:
        temp[i] = temp[i-1]+1
    else:
        temp[i] = temp[i-1]
#print(temp)
for i in range(q):
    l,r = map(int,input().split())
    l-=1
    r-=1
    ans = (temp[r]-temp[l])
    if li[l]==-1:
        ans+=1
    if ans%2==0:
        print("Positive")
    else:
        print("Negative")