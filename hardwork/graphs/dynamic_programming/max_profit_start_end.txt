#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long

struct Job{
	ll s,f,p;
};

bool cmp(Job a,Job b)
{
	return a.f <b.f;
}

ll binarySearch(Job arr[],int i)
{
	ll l = 0,h = i-1;
	while(l<=h)
	{
		ll m = l+(h-l)/2;
		if(arr[m].f<arr[i].s)
		{
			if(arr[m+1].f<arr[i].s)
			{
				l = m + 1;
			}
			else
			{
				return m;
			}
		}
		else
		{
			h = m - 1;
		}
	}
	return -1;
}

void solve()
{
	ll n;
	cin >> n;
	Job arr[n];
	for(int i=0;i<n;i++)
	{
		cin >> arr[i].s >> arr[i].f >>arr[i].p;
	}
	sort(arr,arr+n,cmp);
	vector<ll> dp(n,0);
	dp[0] = arr[0].p;
	for(int i=1;i<n;i++)
	{
		ll incl = arr[i].p;
		ll idx = binarySearch(arr,i);
		if(idx!=-1)
		{
			incl+=dp[idx];
		}
		ll excl = dp[i-1];
		dp[i] = max(incl,excl);
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