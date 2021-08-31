vowel = ['A','E','I','O','U']
def count(a,b):
    c = 0
    for i in range(len(a)):
        if a[i]!=b[i]:
            if b[i] in vowel and a[i] in vowel:
                c+=2 
            elif b[i] not in vowel and a[i] not in vowel:
                c+=2 
            else:
                c+=1 
    return c
def solve():
    s = input()
    l = len(s)
    ans = pow(10,10)
    for i in range(26):
        ch = chr(ord('A')+i)
        temp = ch*l 
        ans = min(ans,count(temp,s))
    return ans

t = int(input())
for _ in range(t):
    ans = solve()
    print("Case #"+str(_+1)+": "+str(ans))