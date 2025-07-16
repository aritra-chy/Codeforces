/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Sunday | 13 July,2025 | 21:33:17 
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
    int n,x;
    cin>>n>>x;
    vll a(n);
    for(int i=1; i<n; i++)
    {
        cin>>a[i];
    }
    int cnt=0;
    for(int i=1; i<n; i++)
    {
        if(abs(a[i])>=abs(x)) cnt++;
    }
    cout<<(cnt>=(n-1)/2 ? "YES" : "NO")<<nl;
  }
  return 0;
}
