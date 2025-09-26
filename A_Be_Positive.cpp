/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Friday | 26 September,2025 | 21:14:13 
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
    int n;
    cin>>n;
    int neg=0, zero=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(x==-1) neg++; 
        else if(x==0) zero++;
    }
    int ans=zero;
    if(neg%2==1) ans+=2;
    cout<<ans<<nl;
  }
  return 0;
}