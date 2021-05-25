n = int(input())
c = 0
while n:
    s = str(n)
    s = list(s)
    k = max(s)
    n = "".join(s)
    #print(int(n)-int(k))
    n = int(n)-int(k)
    c+=1
print(c)