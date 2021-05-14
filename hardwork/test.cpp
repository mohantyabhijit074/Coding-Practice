#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long

int dp[100004];
int arr[100004];
int n;
int func(int ind)
{
	if(ind>n)return 0;
	if(dp[ind]!=-1) return dp[ind];
	int count = 0;
	for(int i=ind;i<=n;i+=ind)
	{
		if(arr[i]>arr[ind])
		{
			count = max(count,1+func(i));
		}
	}
	return dp[ind] = count;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n;
		for(int i=1;i<=n;i++)
		{
			cin >> arr[i];
			//cout << arr[i] <<"\n";
			dp[i] = -1;
		}
		int maxi = 1;
		for(int i=1;i<n;i++)
		{
			maxi = max(maxi,1+func(i));
		}
		cout << maxi <<"\n";	
	}
	return 0;
}