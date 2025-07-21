/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Thursday | 17 July,2025 | 09:38:50 
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
    string s;
    cin>>s;
    int zero=0,one=0;
    for(int i=0; i<n; i++)
    {
      if(s[i]=='0') zero++;
      else one++;
    }
    zero -= (n/2-k);
    one -= (n/2-k);
    if(zero>=0 && one>=0 && zero%2==0 && one%2==0) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
  }
  return 0;
}