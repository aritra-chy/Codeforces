/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Saturday | 22 March,2025 | 16:43:42 
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
    ll n;
    cin>>n;

    if(n%2 != 0 || n<4) 
    {
        cout<<-1<<nl;
    }
    else
    {
        ll min=(n+5)/6;
        ll mx=n/4;
        cout<<min<<" "<<mx<<nl; 
    }
  }
  return 0;
}