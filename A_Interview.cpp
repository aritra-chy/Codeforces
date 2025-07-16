/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Sunday | 25 May,2025 | 10:00:58 
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
    int t, a=0, b=0;
    for(int i=0; i<n; i++)
    {
        cin>>t;
        a |= t;
    }
    for(int i=0; i<n; i++)
    {
        cin>>t;
        b |= t;
    }
    cout<<a+b<<nl;
  return 0;
}