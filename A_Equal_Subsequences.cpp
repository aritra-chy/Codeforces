/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Saturday | 14 June,2025 | 20:35:32 
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
    int n,k;
    cin>>n>>k;
    for(int i=0; i<k; i++)
    {
        cout<<1;
    }
    for(int i=k; i<n; i++)
    {
        cout<<0;
    }
    cout<<nl;
  }
  return 0;
}