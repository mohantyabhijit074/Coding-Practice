#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long

void solve()
{
    int n,k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0;i<n;++i)
    {
        cin >> arr[i];
    }
    stack<int> st;
    st.push(n-1);
    vector<int> nge(n);
    nge[n-1] = n;
    for(int i = n-2;i>=0;i--)
    {
        while(!st.empty() and arr[i]>=arr[st.top()])
        {
            st.pop();
        }
        if(st.empty())
        {
            nge[i] = n;
        }
        else 
        {
            nge[i] = st.top();
        }
        st.push(i);
    }
    vector<int> ans;
    int j = 0;
    for(int i = 0;i<=n-k;++i)
    {
        if(j<i)
        {
            j = i;
        }
        while(nge[j]<i+k)
        {
            j = nge[j];
        }
        ans.push_back(arr[j]);
    }
    for(auto a:ans)
    {
        cout << a <<" ";
    }
    cout<<"\n";
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