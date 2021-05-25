#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
const ll N = 2e5+10;
vector<ll> g[N];
ll arr[2][N];
ll dp[2][N];

void dfs(ll v,ll par=-1)
{
    dp[0][v] = dp[1][v] = 0;
    for(ll u : g[v])
    {
        if(u==par)
            continue;
        dfs(u,v);
        dp[0][v] += max(dp[1][u]+abs(arr[0][v]-arr[1][u]),dp[0][u]+abs(arr[0][v]-arr[0][u]));
        dp[1][v] += max(dp[1][u]+abs(arr[1][v]-arr[1][u]),dp[0][u]+abs(arr[1][v]-arr[0][u]));
    }
}

void solve()
{
    ll n;
    cin >> n;
    //g.resize(n+2);
    fill(g+1,g+n+1,vector<ll>());
    for(ll i = 1;i<=n;i++)
    {
        ll l,r;
        cin >> l >> r;
        arr[0][i] = l;
        arr[1][i] = r;
    }
    for(ll i = 0;i<n-1;i++)
    {
        ll u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1);
    cout << max(dp[0][1],dp[1][1]) <<"\n";

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    //t = 1;
    while(t--)
    {
        solve();
    }
    return 0;
}