/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Sunday | 30 March,2025 | 01:53:02 
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
  string s;
  cin>>s;

  int sum1=0, sum2=0;
  bool flag=true;

  for(int i=0; i<n; i++)
  {
    int digit=s[i]-'0'; // convert char to int
    if(digit!=4 && digit!=7) flag=false;
    if(i < n/2) sum1 += digit;
    else sum2 += digit;
  }

  if(sum1==sum2 && flag) cout<<"YES"<<nl;
  else cout<<"NO"<<nl;

  return 0;
}