/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Wednesday | 23 April,2025 | 10:18:30 
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

ll sum (ll n) {
  return (n * (n + 1)) / 2;
}

ll evensum(ll n) {
    ll count=n/2;
    return count*(count+1);
}

ll oddsum(ll n) {
    ll count=(n+1)/2;
    return count*count;
}
 
int main()
{
  fast;
  int a,b;
  cin>>a>>b;

  if(a>b) swap(a,b);

  ll total=sum(b)-sum(a-1);
  ll evens=evensum(b)-evensum(a-1);
  ll odds=oddsum(b)-oddsum(a-1);

  cout<<total<<nl;
  cout<<evens<<nl;
  cout<<odds<<nl;

  return 0;
}