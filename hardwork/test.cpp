#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
// Function to find the peak index of the bitonic array 
int peak(vector<int>&v)
{
    int start=0,n=v.size(),end=n-1;
    while(start<=end)
    {
        int mid=start+((end-start)/2);
        if(v[mid]>v[mid-1] && v[mid]>v[mid+1])
        {
            return mid;
        }
        else if(v[mid]>v[mid-1] && v[mid]<v[mid+1])
        {
            start=mid+1;
        }
        else if(v[mid]<v[mid-1] && v[mid]>v[mid+1])
        {
            end=mid-1;
        }
    }
    return n-1;
}
// Binary search logic
int search(vector<int>&v,int start,int end,bool is_before_mid,int k)
{
    while(start<=end)
    {
        int mid=start+((end-start)/2);
        if(v[mid]==k)
        {
            return mid;
        }
        else if(v[mid]<k)
        {
            if(is_before_mid)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        else
        {
            if(is_before_mid)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
    }
    return -1;
}
int Solution::solve(vector<int> &A, int B)
{
    int peak_index=peak(A);
    // Once we've found out the peak index, apply binary search on the two segments
    // i.e segment before peak and after peak index
    int left=search(A,0,peak_index,true,B);
    int right=search(A,peak_index+1,A.size()-1,false,B);
    if(left!=-1)
    {
        return left;
    }
    else if(right!=-1)
    {
        return right;
    }
    else
    {
        return -1;
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