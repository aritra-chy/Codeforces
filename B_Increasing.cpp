/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Friday | 02 May,2025 | 21:11:25 
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
    sort(v.begin(),v.end());
    for(int i=0; i<n; i++)
    {
        if(v[i]==v[i+1])
        {
            cout<<"NO"<<nl;
            break;
        }
        if(i==n-1)
        {
            cout<<"YES"<<nl;
        }
    }
  }
  return 0;
}