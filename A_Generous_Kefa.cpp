/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Sunday | 01 June,2025 | 21:52:27 
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
  int n,k;
  cin>>n>>k;

  string s;
  cin>>s;

  vi count(26,0);
  for(char c:s) count[c-'a']++;

  bool flag=true;
  for(int i=0; i<26; i++) 
  {
    if(count[i]>k)
    {
      flag=false;
      break;
    }
  }

  if(flag) cout<<"YES"<<nl;
  else cout<<"NO"<<nl;

  return 0;
}