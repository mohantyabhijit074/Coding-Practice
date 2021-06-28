#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long

ll get_parent(vector<ll>& parent,ll a)
{
    return parent[a] = (parent[a]==a?a:get_parent(parent,parent[a]));
}

void Union(vector<ll>& parent,vector<ll>& rank,vector<ll>& max_,vector<ll>& min_,vector<ll>& size_,ll a,ll b)
{
    a = get_parent(parent,a);
    b = get_parent(parent,b);
    if(rank[a]==rank[b])
    {
        rank[a]++;
    }
    if(rank[a]>rank[b])
    {
        parent[b] = a;
        size_[a]+=size_[b];
        max_[a] = max({max_[a],max_[b],a});
        min_[a] = min({min_[a],min_[b],a});
    }
    else 
    {
        parent[a] = b;
        size_[b]+=size_[a];
        max_[b] = max({parent[a],max_[a],b});
        min_[b] = min({parent[a],min_[a],b});
    }
}
void solve()
{
    ll n,m;
    cin >> n >> m;
    vector<ll> parent(n+1);
    vector<ll> rank(n+1,0);
    vector<ll> max_(n+1,INT_MIN);
    vector<ll> min_(n+1,INT_MAX);
    vector<ll> size_(n+1,1);
    for(int i = 0;i<=n;i++)
    {
        parent[i] = i;
    }
    while(m--)
    {
        string s;
        cin >> s;
        if(s=="union")
        {
            ll x,y;
            cin >> x >> y;
            Union(parent,rank,max_,min_,size_,x,y);
        }
        else 
        {
            ll x;
            cin >> x;
            ll a = get_parent(parent,x);
            cout << min_[a] <<" "<<max_[a] <<" "<<size_[a]<<"\n";
        }
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