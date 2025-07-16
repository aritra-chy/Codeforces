/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Wednesday | 25 June,2025 | 20:54:30 
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
    int a,x,y;
    cin>>a>>x>>y;
    if(max(x,y)<a || min(x,y)>a) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}