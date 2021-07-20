import random 
t = 100
print(t)
for i in range(t):
    for j in range(3):
        k = random.randint(-1*pow(10,2),pow(10,2))
        print(k, end=" ")
    print("")
    for j in range(2):
        k = random.randint(-1*pow(10,2),pow(10,2))
        print(k, end=" ")
    print("")
    for j in range(3):
        k = random.randint(-1*pow(10,2),pow(10,2))
        print(k, end=" ")
    print("")