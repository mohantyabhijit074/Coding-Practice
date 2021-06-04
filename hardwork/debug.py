import random 
print(100)
for i in range(100):
    x = random.randint(1,100)
    y = random.randint(1,x)
    li = []
    print(x,y,end=" ")
    print()
    for j in range(x):
        print(random.randint(1,100),end=" ") 
    print()

