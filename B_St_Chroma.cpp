/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Thursday | 24 April,2025 | 20:55:35 
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
    ll n,x;
    cin>>n>>x;
    vi a;
    if(x==0)
    {
        for(int i=1; i<n; i++)
        {
            a.push_back(i);
        }
        a.push_back(0);
    }
    else if(x==n)
    {
        for(int i=0; i<n; i++)
        {
            a.push_back(i);
        }
    }
    else
    {
        for(int i=0; i<x; i++)
        {
            a.push_back(i);
        }
        for(int i=x+1; i<n; i++)
        {
            a.push_back(i);
        }
        a.push_back(x);
    }
    // for(int i=0; i<n; i++)
    // {
    //     if(i+1==n) cout<<a[i]<<nl;
    //     else cout<<a[i]<<" ";
    // }

    for(int it:a) cout<<it<<" ";
    cout<<nl;
  }
  return 0;
}