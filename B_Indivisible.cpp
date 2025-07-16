/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Wednesday | 21 May,2025 | 20:27:28 
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
    if(n==1) cout<<1<<nl;
    else if(n%2==1) cout<<-1<<nl;
    else 
    {
      for(int i=1; i<=n; i+=2) 
      {
        cout<<i+1<<" "<<i<<" ";
      }
      cout<<nl;
    }
  }
  return 0;
}