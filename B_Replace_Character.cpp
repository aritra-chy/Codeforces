/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Thursday | 03 April,2025 | 19:45:16 
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
    string s;
    cin>>s;
    map<char,int> mp;
    for(auto i:s)
    {
        mp[i]++; 
    }
    int mi=1000,ma=0;
    char minval,maxval;
    for(auto i:mp)
    {
        if(i.second<mi)
        {
            mi=i.second;
            minval=i.first;
        } 
        if(i.second>=ma)
        {
            ma=i.second;
            maxval=i.first;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]==minval)
        {
            s[i]=maxval;
            break;
        }
    }
    cout<<s<<nl;
  }

  return 0;
}
