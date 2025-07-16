/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Thursday | 01 May,2025 | 21:54:07 
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
    vll a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int ans=0;
    for(int i=0; i<n;)
    {
      int m=i;
      while(m+1<n && a[m+1]==a[i]) 
      {
        m++; 
      }
      ll v=a[i];
      bool left=(i==0) || (a[i-1]<v);
      bool right=(m==n-1) || (a[m+1]<v);
      if(left && right)  
      {
        ans++;
      }
      i=m+1;
    }
    cout<<ans<<nl;   
  }
  return 0;
}