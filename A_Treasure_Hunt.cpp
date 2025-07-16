/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Saturday | 19 April,2025 | 22:41:04 
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
  cin >> t;
  
  while (t--)
  {
    int x,y,a;
    cin >> x >> y >> a;

    int ans = a%(x+y);

    cout<<(ans<x?"NO":"YES")<<nl;
  }

  return 0;
}