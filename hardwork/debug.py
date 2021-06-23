def solve():
    li = []
    for i in range(1,pow(2,16)+1):
        x = bin(i)[2:]
        if x==x[::-1]:
            li.append(i)
    print(li)
t = int(input())
for _ in range(t):
    solve()