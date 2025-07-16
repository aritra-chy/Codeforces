/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Monday | 07 April,2025 | 21:17:39 
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
    int x=0,y=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='1') x++;
        else if(s[i]=='0' && s[i-1] != '0') y++;
    }
    if(x>y) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
  }
  return 0;
}

