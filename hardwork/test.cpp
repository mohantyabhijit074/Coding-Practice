#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long

void bfs(vector<vector<ll>>&adj,vector<ll>&parent,vector<ll>&vis)
{
    vis[1] = 1;
    queue<ll> q;
    q.push(1);
    while(!q.empty())
    {
        ll temp = q.front();
        q.pop();
        for(auto j:adj[temp])
        {
            if(vis[j]==0)
            {
                vis[j] = 1;
                parent[j] = temp;
                q.push(j);
            }
        }
    }
}

void solve()
{
    ll n,m;
    cin >> n >> m;
    vector<vector<ll>> adj(n+1);
    vector<ll> parent(n+1);
    vector<ll> vis(n+1,0);
    for(int i = 0;i<=n;++i)
    {
        parent[i] = -1;
    }
    for(int i = 0;i<m;i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(adj,parent,vis);
    if(parent[n]==-1)
    {
        cout << "IMPOSSIBLE\n";
        return;
    }
    int candidate = n;
    stack<ll> st;
    while(candidate!=-1)
    {
        st.push(candidate);
        candidate = parent[candidate];
    }
    cout << st.size() <<"\n";
    while(!st.empty())
    {
        cout << st.top() <<" ";
        st.pop();
    }
    cout <<"\n";
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    //cin >> t;
    t = 1;
    while(t--)
    {
        solve();
    }
    return 0;
}