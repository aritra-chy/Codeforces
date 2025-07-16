/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Saturday | 03 May,2025 | 11:11:48 
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
    ll a,b,c,d;
    cin>>a>>b>>c>>d;

    ll l=a*d, r=b*c;
    if(l==r) cout<<0<<nl;
    else if(l==0 || r==0 || l%r==0 || r%l==0) cout<<1<<nl;
    else cout<<2<<nl;
  }
  return 0;
}