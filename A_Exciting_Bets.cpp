/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Wednesday | 14 May,2025 | 21:31:09 
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
    ll a,b;
    cin>>a>>b;

    if(a==b) 
    {
        cout<<"0 0"<<nl;
        continue;
    }
    else 
    {
        ll d = abs(a-b);
        ll rem=a%d;
        ll ans = min(rem,d-rem);
        cout<<d<<" "<<ans<<nl;
    }
  }
  return 0;
}