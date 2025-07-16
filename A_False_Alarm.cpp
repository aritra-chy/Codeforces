/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Tuesday | 10 June,2025 | 10:38:16 
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
    bool ok=true;
    bool btn = false;
    vi a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==0) 
        {
            if(!btn) continue;
            else x--;
        }
        else {
            if(!btn) btn=true;
            else {
                if(x<=0) ok = false;
                else ok = true;
            }
            x--;
        }
    }
    cout << (ok ? "YES" : "NO") << nl;  
  }
  return 0;
}