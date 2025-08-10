/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Friday | 08 August,2025 | 19:31:20 
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
    ll n,x;
    cin>>n>>x;
    ll a=0,b=0,sum=0;
    for(int i=0; i<n; i++)
    {
        ll p;
        cin>>p;
        a+=((p+x-1)/x);
        sum+=p;
    }
    b=(sum+x-1)/x;
    cout<<b<<" "<<a<<nl;
  }
  return 0;
}

