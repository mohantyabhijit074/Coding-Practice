#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<string> arr(n);
    vector<pair<int,int>> p;
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]=='*')
            {
                p.push_back({i,j});
            }
        }
    }
    p.push_back(p[0]);
    p.push_back(p[1]);
    if(p[0].first==p[1].first)
    {
        p[2].first = (p[2].first+1)%n;
        p[3].first = (p[3].first+1)%n;
    }
    else if(p[0].second==p[1].second)
    {
        p[2].second = (p[2].second+1)%n;
        p[3].second = (p[3].second+1)%n;
    }
    else
    {
        swap(p[2].first,p[3].first);
    }
    arr[p[2].first][p[2].second] = '*';
    arr[p[3].first][p[3].second] = '*';
    for(auto it : arr)
    {
        cout << it <<"\n";
    }
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