import random 
print(100)
for i in range(100):
    print(1000)
    res = ""
    for i in range(1000):
        j = random.randint(97,122)
        res+=chr(j)
    print(res)


