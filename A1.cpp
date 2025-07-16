/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Friday | 14 March,2025 
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
    int x,y;
    cin>>x>>y;

    if(y<=x) 
    {
        cout<<y<<endl;
    }
    else 
    {
        cout<<(x+2*(y-x))<<endl;
    }
  }
  return 0;
}