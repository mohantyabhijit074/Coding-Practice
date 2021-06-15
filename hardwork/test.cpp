#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
const int modb = 1e9+7;
void solve()
{
    ll n;
    cin >> n;
    ll dp[n+1][n*n];
    dp[0][0] = 1;
    for(int i = 1;i<=(n*n)/2;i++)
    {
        dp[0][i] = 0; 
    }
    for(int i = 1;i<=n;i++)
    {
        for(int x = 0;x<=(n*(n+1))/4;x++)
        {
            dp[i][x] = (((x<i) ? 0 : dp[i-1][x-i]) + dp[i-1][x])%mod;
            dp[i][x]%=mod;
        }
    }
    if(n*(n+1)%4!=0)
    {
        cout << 0 <<"\n";
        return;
    }
    cout << (dp[n][(n*(n+1))/4]*500000004)%modb<<"\n"; 

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