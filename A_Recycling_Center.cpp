/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Sunday | 27 July,2025 | 20:38:44 
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
    int n,c;
    cin>>n>>c;
    vi a(n);
    for(int i=0; i<n; i++)
    {
      cin>>a[i];
    }
    sort(a.begin(),a.end());
    int res=0;
    int multi=1;
    for(int i=n-1; i>=0; i--)
    {
      ll cost = (ll)a[i]*(1LL<<i);
      if(c>=cost)
      {
        res += a[i];
        c -= cost;
      }
      else res+=1;
    }
    res=0;
    ll current=1;
    for(int i=0; i<n; i++)
    {
        if((ll)a[i]*current>c){
            res+=1;
        }
        current*=2;
    }
    cout<<res<<nl;
  }

  return 0;
}