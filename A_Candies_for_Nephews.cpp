/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Wednesday | 08 October,2025 | 21:42:51 
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
    int n;
    cin>>n;
    if(n%3==0) cout<<0<<nl;
    else cout<<3-(n%3)<<nl;
  }
  return 0;
}