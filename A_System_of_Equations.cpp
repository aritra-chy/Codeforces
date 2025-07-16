/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Sunday | 30 March,2025 | 02:13:57 
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
  int a,b;
  cin>>a>>b;
  int count=0;
  for(int i=0; i<1000; i++)
  {
    for(int j=0; j<1000; j++)
    {
        if(i*i+j==a && i+j*j==b) count++;
    }
  }
  cout<<count<<nl;
  return 0;
}