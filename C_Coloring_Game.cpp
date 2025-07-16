/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Wednesday | 25 June,2025 | 21:25:14 
------------------------------------------------------*/
 
#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define MOD 1000000007
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
 
int main()
{
  fast;
  int t;
  cin>>t;

  while(t--)
  {
    int n;
    cin>>n;
    vi a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    ll res = 0;
    for(int i=n-1; i>=2; i--)
    {
        ll target = max(a[n-1],2*a[i]);
        for(int j=i-1; j>=1; j--)
        {
            int idx=upper_bound(a.begin(),a.end(),target-a[i]-a[j])-a.begin();
            if(idx < j) res += j-idx;
        }
    }
    cout<<res<<nl;   
  }
  return 0;
}