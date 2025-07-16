/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Sunday | 13 April,2025 | 22:36:43 
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

    vi perm((2*n)+1,0);
    set<int> s;
    
    for(int i=1;i<=2*n;i++)
    {
      s.insert(i);    
    }

    for(int i=1; i<=n; i++)
    {
      for(int j=1; j<=n; j++)
      {
        int x;
        cin>>x;
        perm[i+j]=x;
        if(s.find(x)!=s.end()) s.erase(x);
      }
    }
    cout<<*s.begin()<<' '; // first element of the set

    for(int i=2; i<=2*n; i++) 
    {
      cout<<perm[i]<<' ';
    } 
    cout<<nl;
  }
  return 0;
}