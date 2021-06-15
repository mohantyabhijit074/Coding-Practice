def dfs(u,par, tree,height,li, cur):
    isleaf = 1
    mx = 0
    for i in tree[u]:
        if(i != par):
            isleaf = 0
            mx = max(mx, height[i])
    if isleaf:
        li.append(cur)
        return
    
    c = 0
    for i in tree[u]:
        if(i == par):
            continue
        if (height[i] == mx and c==0):
            dfs(i, u, tree, height, li, cur+1)
            c+=1
        else:
            dfs(i, u, tree, height, li, 1)

def get_far(node,tree,n):
    temp = [0]*(n+1)
    f = -1
    far = 0
    temp[node] = 1
    q = []
    q.append((node,0))
    while len(q)!=0:
        k = q[0]
        #print(k)
        q.pop(0)
        if(f<k[1]):
            f = k[1]
            far = k[0]
        for i in tree[k[0]]:
            if(temp[i]==1):
                continue 
            temp[i] = 1
            q.append((i,k[1]+1))
    return far

def find_height(u,par,tree,h):
    f = 1 
    for i in tree[u]:
        if i==par:
            continue
        f = 0
        find_height(i,u,tree,h)
        h[u] = max(h[u],1+h[i])
    if f==1:
        h[u] = 1

def solve(tree,n,k):
    if k==1:
        return 1
    u = get_far(1,tree,n)
    height = [0]*(n+1)
    #print(u)
    find_height(u,0,tree,height)
    #print(height)
    li = []
    dfs(u,0,tree,height,li,1)
    li.sort(reverse = True)
    size = 1
    total = 0
    i=0
    while(total < k):
        size+=1 
        total += li[i]
        i+=1
    return size

t = int(input())
for _ in range(t):
    n,k = map(int,input().split())
    tree=[]
    leafs = []
    for i in range(n+1):
        tree.append([])
    for i in range(n-1):
        u,v = map(int,input().split())
        tree[u].append(v)
        tree[v].append(u)
    print(solve(tree,n,k))