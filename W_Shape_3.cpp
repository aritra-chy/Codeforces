/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Wednesday | 09 April,2025 | 22:49:32 
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
  int n;
  cin>>n;

  for(int i=1; i<=n; i++)
  {
    for(int j=0; j<n-i; j++)
    {
        cout<<" ";
    }
    for(int j=0; j<2*i-1; j++)
    {
        cout<<"*";
    }
    cout<<nl;
  }

  for(int i=n; i>=1; i--)
  {
    for(int j=0; j<n-i; j++)
    {
        cout<<" ";
    }
    for(int j=0; j<2*i-1; j++)
    {
        cout<<"*";
    }
    cout<<nl;
  }

  return 0;
}