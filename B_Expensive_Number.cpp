/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Tuesday | 08 April,2025 | 22:01:26 
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
    string s;
    cin>>s;
    
    ll a=0,b=0;
    for(char c:s)
    {
      if(c=='0') a++;
      else b=max(b,a+1);
    }
    cout<<(s.length()-b)<<nl;
  }
  return 0;
}
