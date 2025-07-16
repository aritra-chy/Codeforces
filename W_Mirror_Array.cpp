/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Friday | 04 April,2025 | 01:37:45 
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
  int n,m;
  cin>>n>>m;

  vector<vector<int>> v(n,vector<int>(m));

  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m; j++)
    {
        cin>>v[i][j];
    }
  }

  for(int i=0; i<n; i++)
  {
    reverse(v[i].begin(),v[i].end());
  }

  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m; j++)
    {
        cout<<v[i][j]<<" ";
    }
    cout<<nl;
  }
  return 0;
}