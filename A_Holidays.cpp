/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Thursday | 08 May,2025 | 21:19:40 
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

  int weeks = n/7;
  int rem = n%7;

  int maximum = weeks*2;
  int minimum = weeks*2;

  maximum += min(2,rem);
  minimum += max(0,rem-5);

  cout<< minimum << " " <<  maximum << " " <<nl;
  
  return 0;
}
