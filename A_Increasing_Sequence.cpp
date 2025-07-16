/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Friday | 16 May,2025 | 09:33:44 
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
  int n,d;
  cin>>n>>d;
  vi b(n);
  for(int i=0; i<n; i++)
  {
    cin>>b[i];
  }
  int ans=0;
  for(int i=1; i<n; i++)
  {
    if(b[i] <= b[i-1])
    {
        int diff = b[i-1]-b[i];
        int k = diff/d+1;
        ans += k;
        b[i] += k*d;
    }
  }
  cout<<ans<<nl;

  return 0;
}