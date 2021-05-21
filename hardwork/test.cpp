#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
ll inf = 1e15;

void solve()
{
    ll n,m,q;
    cin >> n >> m >> q;
    vector<vector<ll>> g(n+1,vector<ll>(n+1));
    for(int i = 1;i<=n;i++)
    {
        for(int j = i+1;j<=n;j++)
        {
            g[i][j] = g[j][i] = inf;
        }
    }
    for(ll i = 0;i<m;i++)
    {
        ll u,v,c;
        cin >> u >> v >> c;
        g[u][v] = g[v][u] = min(g[u][v],c);
    }
    for(ll k=1;k<=n;k++)
    {
        for(ll i = 1;i<=n;i++)
        {
            for(ll j = 1;j<=n;j++)
            {
                g[i][j] = min(g[i][j],g[i][k] + g[k][j]);
            }
        }
    }
    for(ll i = 0;i<q;i++)
    {
        ll u,v;
        cin >> u >> v;
        if(g[u][v]==inf)
        {
            g[u][v] = -1;
        }
        cout << g[u][v] <<"\n";
    }
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