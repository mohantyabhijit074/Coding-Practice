#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
 
 
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    int i,j,k,l,r;
    int ans = INT_MAX;
    int zero_ = 0,one_ = 0;
    for(int i = 0;i<n;i++)
    {
        if(s[i]=='1')
        {
            one_++;
        }
        else    
        {
            zero_++;
        }
    }
    vector<int> factors;
    for(int i =1;i<=n;i++)
    {
        if(n%i==0)
        {
            factors.push_back(i);
        }
    }
    for(auto factor:factors)
    {
        vector<int> zero(factor,0),one(factor,0);
        for(int i = 0;i<n;i++)
        {
            if(s[i]=='0')
            {
                zero[i%factor]++;
            }
            else
            {
                one[i%factor]++;
            }
        }
        for(int i = 0;i<factor;i++)
        {
            ans = min(ans,zero[i]+one_-one[i]);
        }
    }
    cout<<ans<<endl;
}
 
int main(){
    FAST1;
    FAST2;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}