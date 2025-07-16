/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Friday | 09 May,2025 | 13:03:35 
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
 
int compute(int a, int b, int c)
{
    return a*b*c;
}
int main()
{
  fast;
  int t;
  cin>>t;

  while(t--)
  {
    int a,b,c;
    cin>>a>>b>>c;
    vi v={a,b,c};
    
    for(int i=0; i<5; i++)
    {
        sort(v.begin(),v.end());
        v[0]++;
    }
    int ans=compute(v[0],v[1],v[2]);
    cout<<ans<<nl;
  }
  return 0;
}