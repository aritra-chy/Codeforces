/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Saturday | 17 May,2025 | 23:40:05 
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
  int ans=0;
  for(int i=0; i<n; i++)
  {
    string num;
    cin>>num;
    unordered_set<char>digits;
    for(char c:num) digits.insert(c);

    bool isGood=true;
    for(int i=0; i<=k; i++)
    {
      if(digits.find('0'+i)==digits.end())
      {
        isGood=false;
        break;
      }
    }

    if(isGood) ans++;
  }
  cout<<ans<<nl;
  return 0;
}