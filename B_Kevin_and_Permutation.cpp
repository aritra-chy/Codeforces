/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Sunday | 06 April,2025 | 20:29:56 
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
    int n,k;
    cin>>n>>k;
    vi a(n+5);
    int x=1,y=n;
    for(int i=1; i<=n; i++)
    {
        if(i%k==0) cout<<x++<<" ";
        else cout<<y--<<" ";
    }
    cout<<nl;
}
  return 0;
}

