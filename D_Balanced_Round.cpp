/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Wednesday | 01 October,2025 | 11:26:20 
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
    int n,k;
    cin>>n>>k;
    vi a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int ans=1, cnt=1;
    for(int i=0; i+1<n; i++)
    {
        if(abs(a[i]-a[i+1])<=k)
        {
            cnt++;
            ans=max(ans,cnt);
        }
        else 
        {
            cnt=1;
        }
    }
    cout<<n-ans<<nl;
  }
  return 0;
}