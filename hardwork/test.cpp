#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long

struct Job
{
    int s;
    int f;
    int p;
};
bool cmp(Job a,Job b)
{
    return a.f<b.f;
}

int bin_search(Job arr[],int i)
{
    int h = i-1,l = 0;
    int ind = -1;
    while(l<=h)
    {
        int mid = l+(h-l)/2;
        if(arr[mid].f<arr[i].s)
        {
            ind = mid;
            l = mid+1;
        }   
        else 
        {
            h = mid-1;
        }
    }
    return ind;
}

void solve()
{
    int n;
    cin >> n;
    Job arr[n];
    for(int i = 0;i<n;++i)
    {
        cin >> arr[i].s >> arr[i].f >> arr[i].p;
    }
    sort(arr,arr+n,cmp);
    vector<int> dp(n+1,0);
    dp[0] = arr[0].p;
    for(int i = 1;i<n;++i)
    {
        int inc = arr[i].p;
        int ind = bin_search(arr,i);
        if(ind!=-1)
        {
            inc+=arr[ind].p;
        }
        int exc = dp[i-1];
        dp[i] = max(inc,exc);
    } 
    cout << dp[n-1] <<"\n";
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