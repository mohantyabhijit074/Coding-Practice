n = int(input())
li = []
for i in range(n):
    a,b = map(str,input().split())
    b = int(b)
    li.append([a,b])
li.sort(key = lambda x:x[1])
print(li[-2][0])