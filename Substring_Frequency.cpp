/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Saturday | 22 February,2025 | 10:11:25 
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

  for(int i=1; i<=t; i++)
  {
    string a,b;
    cin>>a>>b;

    int count = 0;
    for(size_t j=0; j<=a.size()-b.size(); j++)
    {
        if(a.substr(j,b.size())==b)
        {
            count++;
        }
    }
    cout<<"Case "<<i<<": "<<count<<endl;
  }

  return 0;
}