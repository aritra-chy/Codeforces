/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Tuesday | 22 July,2025 | 20:47:55 
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
    string s;
    cin>>s;
    string p1,p2;
    for(auto it:s)
    {
        if(it=='T') p1.push_back('T');
        else p2.push_back(it);
    }
    cout<<p1<<p2<<nl;
  }
  return 0;
}