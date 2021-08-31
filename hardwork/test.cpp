#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long

ll dp[100005];
ll acode(string& s,int i)
{
	if(i==0 or i==1)
	{
		return 1;
	}
	if(dp[i]!=-1)
		return dp[i];
	ll ans = 0;
	if(s[i-1]-'0'>0)
	{
		ans+=acode(s,i-1);
	}
	if(i-2>=0 and s[i-2]-'0'>0 and ((s[i-2]-'0')*10+s[i-1]-'0')<=26)
	{
		ans+=acode(s,i-2);
	}

	return dp[i] = ans;
}
void solve()
{
	while(1)
	{
		string s ;
		cin >> s;
		if(s.size()==1 and s[0]=='0')
			break;
		memset(dp,-1,sizeof(dp));
		cout << acode(s,s.size()) <<"\n";

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