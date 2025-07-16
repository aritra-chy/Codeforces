/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Tuesday | 13 May,2025 | 20:35:36 
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

ll GCD(ll a, ll b) { return b ? GCD(b, a % b) : a; }
 
int main()
{
  fast;
  ll a,b;
  cin>>a>>b;

  ll gcd = GCD(a,b);
  ll lcm = (a*b)/gcd;

  cout<<gcd<<" "<<lcm<<nl;

  return 0;
}