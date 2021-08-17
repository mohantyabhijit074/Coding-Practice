#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long

int solve(vector<vector<int>>& ports, vector<vector<int>>& shipments) {
   int ans = 0;
   int n = ports.size();
   vector<vector<int>> dp(n+1,vector<int>(n+1,INT_MAX));
   for(int i = 0;i<n;++i)
   {
        for(int j = 0;j<ports[i].size();j++)
        {
            dp[i][ports[i][j]] = 1;
        }
   }
   for(int k = 0;k<=n;++k)
   {
       for(int i=0;i<=n;++i)
       {
           for(int j=0;j<=n;++j)
           {
               if(dp[i][k]!=INT_MAX and dp[k][j]!=INT_MAX and dp[i][j]>(dp[i][k]+dp[k][j]))
               {
                   dp[i][j] = dp[i][k]+dp[k][j];
               }
           }
       }
   }
   for(int i = 0;i<shipments.size();i++)
   {
       int temp = dp[shipments[i][0]][shipments[i][1]];
       ans+=temp==INT_MAX?0:temp;
   }
   return ans;

}

void solve()
{
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