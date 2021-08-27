#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long

void solve()
{   
    ll n,m;
    cin >> n >> m;
    vector<vector<int>> grid(n,vector<int>(m));
    for(int i = 0;i<n;++i)
    {
        for(int j = 0;j<m;++j)
        {
            cin >> grid[i][j];
        }
    }
    vector<vector<int>> dp(n,vector<int>(m,0));
    for(int i = 0;i<m;++i)
    {
        dp[0][i] = grid[0][i];
    }
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