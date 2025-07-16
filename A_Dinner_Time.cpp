/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Tuesday | 20 May,2025 | 20:48:18 
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
    int n,m,p,q;
    cin>>n>>m>>p>>q;

    vi a(n+10);
    int sum=0;

    for(int i=1; i<=n; i++)
    {
      if(i%p==0)
      {
        a[i]=q;
      }
      else
      {
        a[i]=0;
      }
      sum+=a[i];
    }
    if(sum==m || a[n]==0) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
  }
  return 0;
}