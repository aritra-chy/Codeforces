/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Monday | 28 April,2025 | 21:00:41 
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
    ll n;
    cin>>n;
    vll v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    } 
    vll a=v;
    sort(a.begin(),a.end());
    vll pf(n+1,0);
    for(int i=0;i<n;i++)
    {
        pf[i+1]=pf[i]+a[i];
    }
    for(int k=1; k<=n; k++)
    {
        cout<<pf[n]-pf[n-k]<<" ";
    }
    cout<<nl; 
  }
  return 0;
}