/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Thursday | 24 April,2025 | 20:35:13 
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
    string s;
    cin>>n>>s;

    int cnt=0;

    for(char c:s)
    {
        if(c=='1') cnt++;
    }
    int ans=cnt*(n-1)+(n-cnt);
    
    cout<<ans<<nl;
  }

  return 0;
}

