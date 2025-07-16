/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Wednesday | 19 February,2025 | 20:30:40 
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
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define MOD 1000000007
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int main()
{
  fast;
  int x,y;
  cin>>x>>y;

  int ans = x+(10*y);

  if(ans >= 100) cout<<"YES"<<endl;
  else cout<<"No"<<endl;

  return 0;
}
