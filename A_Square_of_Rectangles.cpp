/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Friday | 27 June,2025 | 20:27:30 
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
    int l1,b1,l2,b2,l3,b3;
    cin>>l1>>b1>>l2>>b2>>l3>>b3;

    bool check = false;

    if(l1==l2 && l2==l3 && b1+b2+b3 == l1) check = true;
    if(b1==b2 && b2==b3 && l1+l2+l3 == b1) check = true;
    if(l1 == l2+l3 && b2==b3 && l1==b1+b2) check=true;
    if(b1 == b2+b3 && l2==l3 && b1==l1+l2) check=true;

    if(check) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
  }
  return 0;
}