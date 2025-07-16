/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Friday | 30 May,2025 | 21:50:54 
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
  vector<pair<int,int>>participants(n);
  bool rated=false;
  for(int i=0; i<n; i++)
  {
    cin>>participants[i].first>>participants[i].second;
    if(participants[i].first!=participants[i].second) rated=true;
  }
  if(rated) {
    cout<<"rated"<<nl;
    return 0;
  }
  bool non_increasing=true;
  for(int i=1; i<n; i++)
  {
    if(participants[i].first>participants[i-1].first)
    {
      non_increasing=false;
      break;
    }
  }
  if(non_increasing) cout<<"maybe"<<nl;
  else cout<<"unrated"<<nl;
  return 0;
}