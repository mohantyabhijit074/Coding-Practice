import math
def solve():
    li = []
    p = 2
    for i in range(1,math.ceil(math.log2(pow(10,19)))):
        if pow(2,i)>pow(10,19):
            break
        li.append(pow(2,i))
    print(li)
t = int(input())
for _ in range(t):
    solve()