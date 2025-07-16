/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Monday | 14 July,2025 | 21:38:39 
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
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    sort(a.begin(),a.end());
    int l=0, r=0;
    for(int i=0; i<n; i++)
    {
        if((a[n-1]+a[i])%2!=0) l++;
        else break;
    }
    for(int j=n-1; j>=0; j--)
    {
        if((a[j]+a[0])%2!=0) r++;
        else break;
    }
   cout<<min(l,r)<<nl;
  }
  return 0;
}