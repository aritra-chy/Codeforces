/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Sunday | 30 March,2025 | 00:42:24 
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
    int a,b;
    cin>>a>>b;

    int lcm=a/__gcd(a,b)*b;
    cout<<lcm<<nl;
  }

  return 0;
}