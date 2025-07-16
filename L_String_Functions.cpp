/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Sunday | 20 April,2025 | 23:29:07 
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
  int n,q;
  cin>>n>>q;
  string s;
  cin>>s;

  while(q--)
  {
    string query;
    cin>>query;

    if(query=="pop_back")
    {
      s.pop_back();
    }
    else if(query == "front")
    {
        cout<<s.front()<<nl;
    }
    else if(query == "back")
    {
        cout<<s.back()<<nl;
    }
    else if(query == "sort")
    {
        int l,r;
        cin>>l>>r;
        if(l>r) swap(l,r);
        sort(s.begin()+l-1,s.begin()+r);
    }
    else if(query == "reverse")
    {
        int l,r;
        cin>>l>>r;
        if(l>r) swap(l,r);
        reverse(s.begin()+l-1,s.begin()+r);
    }
    else if(query == "print")
    {
        int pos;
        cin>>pos;
        cout<<s[pos-1]<<nl;
    }
    else if(query == "substr")
    {
        int l,r;
        cin>>l>>r;
        if(l>r) swap(l,r);
        cout<<s.substr(l-1,r-l+1)<<nl;
    }
    else if(query == "push_back")
    {
        char c;
        cin>>c;
        s.push_back(c);
    }
  }
  return 0;
}