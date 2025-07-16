/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Thursday | 27 February,2025 | 10:54:23 
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

    cout<<count(s.begin(),s.end(),'1')<<endl;
  }

  return 0;
}