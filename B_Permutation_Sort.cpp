/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Thursday | 15 May,2025 | 11:25:13 
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
    int n;
    cin>>n;
    vi v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    if(is_sorted(v.begin(),v.end())) cout<<"0"<<nl;
    else if(v[0] == 1 || v[n-1] == n) cout<<"1"<<nl;
    else if(v[0] != n || v[n-1] != 1) cout<<"2"<<nl;
    else cout<<"3"<<nl;
  }
  return 0;
}