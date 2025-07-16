/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Wednesday | 18 June,2025 | 12:20:49 
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
    int n,s;
    cin>>n>>s;
    int mx=s, mn=s;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        mx=max(mx,a);
        mn=min(mn,a);
    }
    cout<<mx-mn+min(abs(s-mn),abs(s-mx))<<nl;
  }
  return 0;
}