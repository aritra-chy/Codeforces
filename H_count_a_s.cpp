/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Wednesday | 16 April,2025 | 21:34:47 
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
  int q;
  cin>>q;

  while(q--)
  {
    int l,r;
    cin>>l>>r;
    int cnt=0;
    for(int i=l-1;i<r;i++)
    {
      if(s[i]=='a')
      {
        cnt++;
      }
    }
    cout<<cnt<<nl;
  }
  return 0;
}