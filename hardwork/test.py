n,m = map(str,input().split())
m = int(m)
for i in range(m):
    n = list(str(n))
    k = n.copy()
    n.sort()
    k.sort(reverse=True)
    n = int("".join(n))
    k = int("".join(k))
    n = abs(n-k)
    if n==0:
        break 
print(n)    
    
