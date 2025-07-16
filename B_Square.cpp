/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Wednesday | 04 June,2025 | 20:39:11 
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
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(a>b) swap(a,b);
    if(c>d) swap(c,d);
    if((a==c)&&(b+d==a)||(b==d)&&(a+c==b)) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
  }
  return 0;
}