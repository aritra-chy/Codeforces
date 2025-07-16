/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Tuesday | 03 June,2025 | 11:00:31 
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
  string s;
  cin >> s;
  string t=s;
  reverse(s.begin(),s.end());
  if(s != t)
  {
    cout<<s.length()<<nl;
    return 0;
  }
  if(s == string(s.length(),s[0]))
  {
    cout<<0<<nl;
    return 0;
  }
  cout<<s.length()-1<<nl;

  return 0;
}