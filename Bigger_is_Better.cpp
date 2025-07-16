/*------------------------------------------------------
    author    : aritra Chowdhury
    created   : Wednesday | 19 February,2025 | 20:38:10 
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
    int n;
    string a,b;
    cin>>n>>a;
    b=a;

    if (next_permutation(b.begin(), b.end()) && b > a && string(b.rbegin(), b.rend()) > a) {
        cout<<b<<endl;
    }
    else {
        cout<<"-1"<<endl;
    }
  }
  return 0;
}