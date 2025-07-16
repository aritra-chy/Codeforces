/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Saturday | 26 April,2025 | 10:31:27 
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
  ll t; 
  cin>>t;
  while(t--) 
  {
    ll n; 
    cin>>n;
    vll a(n);

    for(ll i=0; i<n; i++) 
    {
        cin>>a[i];
    }
    ll ans=accumulate(a.begin(),a.end(),0LL)-2*a[n-2];
    cout<<ans<<nl;
  }
  return 0;
}