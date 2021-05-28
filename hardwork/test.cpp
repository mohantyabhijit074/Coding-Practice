#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long

int maximumToys(vector<ll> prices, ll k) {
    sort(prices.begin(),prices.end());
    for(int i = 1;i<prices.size();i++)
    {
        prices[i]+=prices[i-1];
		cout << prices[i] <<"\n";
    }
    int idx = upper_bound(prices.begin(),prices.end(),k)-prices.begin();
    return idx;
}

void solve()
{
	int n,k;
	cin >> n >> k;
	vector<ll> arr(n);
	for(int i = 0;i<n;i++)
	{
		cin >> arr[i];
	}
	cout << maximumToys(arr,k) <<"\n";
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