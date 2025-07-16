/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Monday | 28 April,2025 | 20:38:36 
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
    int a,b,c;
    cin>>a>>b>>c;
    
    int sum=a+b+c;
    if(sum%3!=0) cout<<"NO"<<nl;
    else
    {
        int t=sum/3;
        if(a<=t && b<=t && c>=t) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }
  }
  return 0;
}