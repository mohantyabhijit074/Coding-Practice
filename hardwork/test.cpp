#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long

int fun(string a)
{
    int count = 0;
    for(int i = 1;i<a.length();++i)
    {
        if(a[i]==a[i-1])
            count++;
    }
    return count;
}
void solve()
{   
    int n;
    cin >> n;
    string s,s1,s2;
    cin >> s;
    s1 = s;
    s2 = s;
    if(s1[0]=='?')
        s1[0] = 'B';
    for(int i = 1;i<s.length();++i)
    {
        if(s1[i-1]=='B' and s1[i]=='?')
            s1[i] = 'R';
        else if(s1[i-1]=='R' and s1[i]=='?')
            s1[i] = 'B';
    }
    if(s2[0]=='?')
        s2[0] = 'R';
    for(int i = 1;i<s.length();++i)
    {
        if(s2[i-1]=='B' and s2[i]=='?')
            s2[i] = 'R';
        else if(s2[i-1]=='R' and s2[i]=='?')
            s2[i] = 'B';
    }
    //cout << s1 <<" "<<s2 <<"\n";
    if(fun(s1)<fun(s2))
        cout << s1 <<"\n";
    else 
        cout << s2 <<"\n";
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