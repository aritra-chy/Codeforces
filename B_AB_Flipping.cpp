/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Thursday | 05 June,2025 | 21:27:08 
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
    string s;
    cin>>s;

    int l=0,r=n;
    while(l<r && s[l]=='B') l++;
    while(l<r && s[r-1]=='A') r--;

    cout<<max(0,r-l-1)<<nl;
  }
  return 0;
}