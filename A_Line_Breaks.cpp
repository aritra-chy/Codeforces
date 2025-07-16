/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Friday | 11 April,2025 | 20:41:11 
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
    int n,m;
    cin>>n>>m;

    vs a(n);

    for(int i=0; i<n; i++)
    {
      cin>>a[i];
    }

    int total=0,x=0;

    for(int i=0; i<n; i++)
    {
        total += a[i].length();
        if(total <= m) x=i+1;
        else break;
    }
    cout<<x<<endl;
  }
  return 0;
}