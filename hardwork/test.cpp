#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long

template <typename T>
void my_swap(T& x,T& y)
{
    T temp(x);
    x = y;
    y = temp;
}
template <typename ptr_t>
void my_reverse(ptr_t first,ptr_t last)
{
    while(first!=last and first!=--last)
    {
        my_swap(*first,*last);
        ++first;
    }
}
template <typename ptr_t>
void disp(ptr_t begin,ptr_t end)
{
    while(begin!=end)
    {
        cout << *begin <<" ";
        ++begin;
    }
    cout <<"\n";
}
void solve()
{
    vector<string> arr;
    arr.push_back("abc");
    arr.push_back("abc");
    arr.push_back("abc");
    my_reverse(arr.begin(),arr.end());
    disp(arr.begin(),arr.end());
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