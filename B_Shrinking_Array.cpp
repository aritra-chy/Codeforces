/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Wednesday | 25 June,2025 | 21:04:21 
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
    vi v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int inc=0, dec=0, beauty=0;
    for(int i=1; i<n; i++)
    {
        if(v[i]>v[i-1]) inc++;
        else if(v[i]<v[i-1]) dec++;
        if(abs(v[i]-v[i-1])<=1) beauty++;
    }
    if(beauty) cout<<0<<nl;
    else if(inc && dec) cout<<1<<nl;
    else cout<<-1<<nl; 
  }
  return 0;
}