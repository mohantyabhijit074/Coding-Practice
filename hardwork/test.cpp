#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long

void dfs(vector<vector<char>> &grid,int i,int j,int n,int m,int &ans,int pos)
{
    if(i<0 || i>=n || j<0 || j>=m || int(grid[i][j])!=pos || grid[i][j]=='$')
    {
        return;
    }
    ++ans;
    //cout << grid[i][j] <<" ";
    //char a = grid[i][j];
    grid[i][j] = '$';
    dfs(grid,i+1,j,n,m,ans,pos+1);
    dfs(grid,i-1,j,n,m,ans,pos+1);
    dfs(grid,i,j+1,n,m,ans,pos+1);
    dfs(grid,i,j-1,n,m,ans,pos+1);
    dfs(grid,i+1,j+1,n,m,ans,pos+1);
    dfs(grid,i+1,j-1,n,m,ans,pos+1);
    dfs(grid,i-1,j+1,n,m,ans,pos+1);
    dfs(grid,i-1,j-1,n,m,ans,pos+1);
    //grid[i][j] = a;
}

void solve()
{
    int c = 1;
    int n=1,m=1;
    while(1)
    {
        cin >> n >> m;
        if(n==0 && m==0)
        {
            break;
        }
        vector<vector<char>> grid(n,vector<char>(m));
        for(int i =0;i<n;i++)
        {
            string s;
            cin >> s;
            for(int j = 0;j<s.length();j++)
            {
                grid[i][j] = s[j];
            }
        }
        int ans = 0;
        int res = 0;
        int pos = 65;
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                ans = 0;
                pos = 65;
                dfs(grid,i,j,n,m,ans,pos);
                res = max(res,ans);
            }
        }
        cout << "Case " << c <<": " << res <<"\n";
        c++;
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