/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Sunday | 10 August,2025 | 21:50:18 
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
    ll n,k;
    cin>>n>>k;
    vll s(n),t(n);
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>t[i];
    }

    for(int i=0; i<n; i++)
    {
        s[i]%=k;
        if(s[i]<0) s[i]+=k;
        t[i]%=k;
        if(t[i]<0) t[i]+=k;
    }
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) cout<<"Yes"<<nl;
    else cout<<"No"<<nl;
  }
  return 0;
}

