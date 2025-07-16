/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Tuesday | 29 April,2025  
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
    string s;
    cin>>n>>s;

    int cnt=count(s.begin(),s.end(),'A');

    if(n==2)
    {
        if(s=="AB") cout<<"Alice"<<nl;
        else cout<<"Bob"<<nl;
        continue;
    }
    if(cnt==1) cout<<"Bob"<<nl;
    else if(cnt >= n-1) cout<<"Alice"<<nl;
    else 
    {
        bool flag=false;
        if(s.back()=='A') 
        {
            if(s.front()=='A' || s[n-2]=='A') flag=true;
        }
        if(flag) cout<<"Alice"<<nl;
        else cout<<"Bob"<<nl;
    }
  }
  return 0;
}