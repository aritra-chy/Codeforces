/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Thursday | 22 May,2025 | 20:31:12 
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
  string s,t;
  cin>>s>>t;
  int c=0;

  while(true)
  {
    int i=s.length()-c-1;
    int j=t.length()-c-1;

    if(i>=0 && j>=0 && s[i]==t[j]) c++;
    else break;
  }
  cout<<s.length()+t.length()-2*c<<nl;
  return 0;
}