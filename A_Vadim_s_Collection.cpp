/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Saturday | 26 April,2025 | 19:45:01 
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
    string s;
    cin>>s;
    vi st(10,0);
    for(char c:s) 
    {
        st[c-'0']++;
    }
    string ans="";
    for(int i=0; i<10; i++)
    {
        int need=9-i;
        for(int j=need; j<=9; j++)
        {
            if(st[j]>0)
            {
                ans+=(j+'0');
                st[j]--;
                break;
            }
        }
    }
    cout<<ans<<nl;
  }
  return 0;
}