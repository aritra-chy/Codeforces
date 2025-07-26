/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Thursday | 24 July,2025 | 08:35:04 
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
    int n,k;
    cin>>n>>k;
    vi a(n);
    for(int i=0; i<n; i++)
    {
      cin>>a[i];
    }
    int val=a[k-1];
    sort(a.begin(),a.end());
    int water=0;
    bool flag=true;
    for(int i=0; i<n-1; i++)
    {
      if(a[i]>=val)
      {
        water = a[i+1]-val-1;
        if(a[i]<=water)
        {
            flag=false;
            break;
        }
      }
    }
    if(!flag) cout<<"NO"<<nl;
    else cout<<"YES"<<nl;
  }
  return 0;
}