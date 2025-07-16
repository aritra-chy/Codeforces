/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Wednesday | 30 April,2025 | 20:55:23 
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
  vi a(n);
  for(int i=0; i<n; i++)
  {
      cin>>a[i];
  }
  sort(a.begin(),a.end());

  int q;
  cin>>q;

  while(q--)
  {
     int x;
     cin>>x;
     int l=0, r=n-1;
     while(l<=r)
     {
        int m=(l+r)/2;
        if(a[m]>x) r=m-1;
        else l=m+1;
     }  
     cout<<l<<nl;
  }
  return 0;
}