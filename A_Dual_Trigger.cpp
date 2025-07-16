/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Friday | 25 April,2025 | 20:39:20 
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
  cin >> t;
  while (t--)
  {
    int n; 
    string s; 
    cin>>n>>s;

    int cnt=0;

    for(auto it:s)
    {
        if(it=='1') cnt++;
    }
    if(cnt%2==1) cout<<"NO"<<nl;
    else if(cnt != 2) cout<<"YES"<<nl;
    else 
    {
        bool flag=false;
        for(int i=0; i<n-1; i++)
        {
            if(s[i]=='1' && s[i+1]=='1')
            {
                flag=true;
                break;
            }
        }
        if(flag) cout<<"NO"<<nl;
        else cout<<"YES"<<nl;
    }
  }
  return 0;
}