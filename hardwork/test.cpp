#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long

void solve()
{
	int n,m;
	cin >> n >> m;
	vector<int> arr(n);
	vector<int> brr(m);
	sort(arr.begin(),arr.end());
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	for(int j=0;j<m;j++)
	{
		cin >> brr[j];
	}
	vector<int> res(m,0);
	int j = 0;
	for(int i=0;i<m;i++)
	{
		while(j<n && arr[j]<brr[i])
		{
			j++;
		}
		res[i] = j;
	}
	for(auto i : res)
	{
		cout << i <<" ";
	}
	cout <<"\n";
	return;
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