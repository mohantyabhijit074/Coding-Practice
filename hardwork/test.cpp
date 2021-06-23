#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long

void solve()
{
    ll x,n;
    cin >> x >> n;
    set<int> pos;
    multiset<int> len;
    pos.insert(0);
    pos.insert(x-0);
    len.insert(x);
    for(int i = 0;i<n;++i)
    {
        int add;
        cin >> add ;
        //cout << add <<"\n";
        pos.insert(add);
        auto iter = pos.find(add);
        int previous = *prev(iter);
        int next_val = *next(iter);
        len.erase(len.find(next_val-previous));
        len.insert(add-previous);
        len.insert(next_val-add);
        cout << *len.rbegin() <<" ";
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