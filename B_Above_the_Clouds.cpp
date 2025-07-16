/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Wednesday | 18 June,2025 | 13:43:48 
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
    int n; string s;
    cin>>n>>s;
    int cnt[26] {};
    for(auto c:s) 
    {
      cnt[c-'a']++;
    }
    bool flag=false;
    for(int i=1; i<n-1; i++) 
    {
      if(cnt[s[i]-'a'] > 1) 
      {
        flag = true;
        break;
      }
    }
    cout<<(flag ? "Yes" : "No")<<nl;
  }
  return 0;
}