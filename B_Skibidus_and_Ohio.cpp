/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Sunday | 30 March,2025 | 11:30:24 
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
    int n=s.size();
    bool flag=false;
    for(int i=0; i<n-1; i++)
    {
      if(s[i]==s[i+1]) 
      {
        flag=true; 
        break;
      }
    }

    if(flag) cout<<"1"<<nl;
    else cout<<n<<nl;
    
  }

  return 0;
}