/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Friday | 23 May,2025 | 11:25:57 
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
  ll n,x;
  cin>>n;

  ll ans=-INFINITY;

  while(n--)
  {
    cin>>x;
    if(x<0) ans=max(ans,x);
    else 
    {
        ll sq=sqrt(x);
        if(sq*sq!=x) ans=max(ans,x);
    }
  }
  cout<<ans<<nl;
  return 0;
}
