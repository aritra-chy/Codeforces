/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Thursday | 24 July,2025 | 10:01:05 
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
    int l,r;
    cin>>l>>r;
    if(l%2) l--;
    int ans=(r-l+1)/4;
    cout<<ans<<nl;
  }
  return 0;
}