/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Saturday | 18 October,2025 | 19:41:40 
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
    vi v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    cout<<*max_element(v.begin(),v.end())<<nl;
  }
  return 0;
}