/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Monday | 29 September,2025 | 12:12:58 
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
    vi a(n);
    for(int i=0; i<n; i++)
    {
      cin>>a[i];
    }
    sort(a.begin(),a.end());
    int mx=0;
    for(int i=0; i<n; i+=2)
    {
      mx=max(mx,a[i+1]-a[i]);
    }
    cout<<mx<<nl;
  }
  return 0;
}