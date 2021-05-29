from itertools import permutations 
n = list(map(int,input().split()))
m = list(map(int,input().split()))
a = []
b = []
for i in range(len(n)):
    for j in range(len(m)):
        if n[i]==m[j]:
            a.append(n[i])
            b.append(m[j])
for i in a:
    n.remove(i)
for i in b:
    m.remove(i)
temp = []
ans = 0
n.sort()
m.sort()
p = 0
k = 0
for i in range(len(n)):
    res = pow(10,10)
    for j in range(len(m)):
        if n[i]^m[j] < res and j not in temp:
            res = n[i]^m[j]
            p = j 
    print(n[i],m[p])
    temp.append(p)
    ans+=res 
print(ans)
            



    
