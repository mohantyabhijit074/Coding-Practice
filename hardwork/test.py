li = list(map(int,input().split()))
res = [0]*len(li)
li = [abs(i) for i in li]
i = 0
j = len(li)-1
k = len(li)-1
while i<=j:
    if li[i]<li[j]:
        res[k] = li[j]**2
        k-=1
        j-=1
    else:
        res[k] = li[i]**2
        k-=1
        i+=1
print(*res)