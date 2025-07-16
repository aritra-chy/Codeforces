/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Tuesday | 15 July,2025 | 22:30:48 
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
    for(auto &x:v) cin>>x;
    bool found = false;
    for(int i=0; i+1<n; i++)
    {
        if(v[i]>v[i+1])
        {
            cout<<"YES"<<nl;
            cout<<2<<nl;
            cout<<v[i]<<" "<<v[i+1]<<nl;
            found=true;
            break;
        }
    }
    if(!found) cout<<"NO"<<nl;
  }
  return 0;
}
