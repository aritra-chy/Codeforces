/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Wednesday | 23 July,2025 | 20:32:38 
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

ll gcd(ll a,ll b)
{
  if(b==0) return a;
  return gcd(b,a%b);
}

int main()
{
  fast;
  ll t;
  cin>>t;
  while(t--)
  {
    ll a,b,k;
    cin>>a>>b>>k;
    if(max(a,b)/gcd(a,b)<=k) cout<<1<<nl;
    else cout<<2<<nl;
  }
  return 0;
}