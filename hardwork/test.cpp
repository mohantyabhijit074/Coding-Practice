#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long

vector<int> maxone(vector<int> &A, int B) {
    int a=0,l=0,ans=0,m=0;
    int n = A.size();
    for(int i = 0;i<n;i++)
    {
        if(A[i]==0)
        {
            a++;
        }
        while(a>B)
        {
            if(A[l]==0)
                a--;
            l++;
        }
        if(i-l+1>ans)
        {
            ans = i-l+1;
            m = l;
        }
    }
    //cout << m <<" "<<ans<<"\n";
    vector<int> temp(ans);
    for(int i = 0;i<ans;i++)
    {
        temp[i] = m+i;
    }
    return temp;
}
void solve()
{
    ll n,k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }
    vector<int> ans = maxone(arr,k);
    for(auto z:ans)
    {
        cout << z <<" ";
    }
    cout <<"\n";
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