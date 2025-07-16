/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Saturday | 10 May,2025 | 23:43:48 
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
  int n;
  cin>>n;

  vi b(n);
  for(int i=0; i<n; i++) 
  {
    cin>>b[i];
  }
  int x=0;
  vi a(n);
  for(int i=0; i<n; i++)
  {
    a[i]=b[i]+x;
    x=max(x,a[i]);
    cout<<a[i]<<" ";
  }
  return 0;
}