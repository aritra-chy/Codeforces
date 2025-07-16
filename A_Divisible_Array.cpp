/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Tuesday | 15 April,2025 | 02:50:16 
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

    for(int i=1; i<=n; i++)
    {
        cout<<i*2<<" ";
    }
    cout<<nl;
  }
  return 0;
}