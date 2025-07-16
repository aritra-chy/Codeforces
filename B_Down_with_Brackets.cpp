/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Monday | 14 July,2025 | 21:24:34 
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
    stack<char>st;
    int cnt=0;
    for(char c:s)
    {
        if(st.empty())
        {
            cnt++;
            st.push(c);
        }
        else if(c=='(') st.push(c);
        else st.pop();
    }
    if(cnt>1) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
  }
  return 0;
}