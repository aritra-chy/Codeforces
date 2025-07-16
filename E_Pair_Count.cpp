/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Tuesday | 01 April,2025 | 21:01:06 
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

int32_t main()
{
  fast;
  ll n,p,k;
  cin>>n>>p>>k;

  vll a(n);
  unordered_map<long,long> freq;

  for(ll i=0; i<n; i++)
  {
    cin>>a[i];
  }

  ll ans=0;
  for(ll i=0; i<n; i++)
  {
    ll val=((a[i]*a[i]%p)*(a[i]*a[i])%p-(k*a[i]%p)+p)%p;
    ans+=freq[val];
    freq[val]++;
  }
  cout<<ans<<nl;
  return 0;
}