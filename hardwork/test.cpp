#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i<n;++i)
    {
        cin >> arr[i];
    }
    int start = INT_MAX, end = INT_MAX,l = 0;
    int cur = arr[0],m = arr[0];
    for(int i = 1;i<n;++i)
    {
        cur = max(cur+arr[i],arr[i]);
        m = max(m,cur);
    }
    map<int,int> mp;
    int temp = 0;
    for(int i = 0;i<n;++i)
    {
        temp+=arr[i];
        if(temp==m)
        {
            start = 0;
            end = i;
        }
        if(mp.find(temp-m)!=mp.end())
        {
            if(start>mp[temp-m])
            {
                start = mp[temp-m];
                end = i;
            }
        }
        mp[temp] = i;
    }
    cout << start+1 <<" "<<end+1<<" "<<m<<"\n";
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