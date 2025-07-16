/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Tuesday | 18 February,2025 | 10:29:48 
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
  ll w,h,n;
  cin>>w>>h>>n;

  ll left = max(w,h), right=max(w,h)*n, ans=right;

  while(left <= right)
  {
    ll mid = left + (right-left)/2;
    if(mid/w >= (n+(mid/h)-1) / (mid/h)) {
        ans=mid;
        right = mid-1;
    }
    else {
        left = mid+1;
    }
  }
  cout<<ans<<endl;

  return 0;
}