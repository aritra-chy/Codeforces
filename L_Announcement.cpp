/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Monday | 26 May,2025 | 23:47:34 
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
  int n;
  cin>>n;

  vi levels(n);
  unordered_map<int,int> mp;
  for(int i=0;i<n;i++)
  {
    cin>>levels[i];
    mp[levels[i]]++;
  }
  int ans=0;
  for(auto& pair:mp)
  {
    if(pair.second>1)
    {
      ans+=(pair.second-1);
    }
  }
  if(ans==0) cout<<-1<<nl;
  else cout<<ans<<nl;
  return 0;
}