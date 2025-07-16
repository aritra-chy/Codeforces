/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Tuesday | 22 April,2025 | 21:24:04 
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
  int n,q;
  cin>>n>>q;

  vll a(n);

  for(int i=0; i<n; i++) cin>>a[i];

  vll pre(n+1,0);

  for(int i=0; i<n; i++) pre[i+1]=pre[i]+a[i];

  while(q--)
  {
    int l,r;
    cin>>l>>r;
    cout<<pre[r]-pre[l-1]<<nl;
  }
  return 0;
}