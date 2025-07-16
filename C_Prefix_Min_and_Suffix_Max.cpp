/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Tuesday | 01 July,2025 | 21:02:38 
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
    vi p_min(n),s_max(n);
    p_min[0]=a[0];
    s_max[n-1]=a[n-1];
    for(int i=1; i<n; i++)
    {
      p_min[i]=min(p_min[i-1],a[i]);
    }
    for(int i=n-2; i>=0; i--)
    {
      s_max[i]=max(s_max[i+1],a[i]);
    }
    string res(n,'0');
    for(int i=0; i<n; i++)
    {
      bool left = (i==0) ? true:(p_min[i-1]>=a[i]);
      bool right = (i==n-1) ? true:(s_max[i+1]<=a[i]);
      if(left || right) res[i]='1';
    }
    res[0]=res[n-1]='1';
    cout<<res<<nl;
  }
  return 0;
}