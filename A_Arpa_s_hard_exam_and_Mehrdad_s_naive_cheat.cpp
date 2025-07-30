/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Sunday | 27 July,2025 | 20:18:53 
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
  ll n;
  cin>>n;
  if(n==0) cout<<1<<nl;
  else 
  { 
    n%=4;
    ll a[]={6,8,4,2};
    cout<<a[n]<<nl;
  }
  return 0;
}