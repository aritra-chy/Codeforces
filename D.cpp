/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Thursday | 13 March,2025 | 23:59:17 
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
    int a,b,c;
    cin>>a>>b>>c;

    ll sum = pow(a,pow(b,c));
    cout<<sum<<endl;
  }

  return 0;
}