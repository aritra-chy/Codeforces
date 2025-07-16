/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Tuesday | 01 July,2025 | 20:48:10 
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
    int n,j,k;
    cin>>n>>j>>k;
    vi a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    j--;
    int mx = *max_element(a.begin(),a.end());
    if(k>=2 || a[j]==mx) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
  }
  return 0;
}