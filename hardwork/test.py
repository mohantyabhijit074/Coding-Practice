t = int(input())
for _ in range(t):
    n = int(input())
    s = input()
    res = [0]*n 
    res[0] = 1 
    d = 0
    K_count = 0
    dictionary = {}
    l = 0
    m = 0
    for i in range(n):
        if s[i] == 'D':
            d+=1 
        else:
            K_count+=1 
        if K_count==0 or d==0:
            if 0 not in dictionary:
                dictionary[0] = 1 
            else:
                dictionary[0] +=1 
            m = dictionary[0]
        else:
            l = d/K_count
            if l not in dictionary:
                dictionary[l] = 1 
                m = 1
            else:
                dictionary[l] +=1 
                m = dictionary[l]
        res[i] = m
    print(*res)