/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Saturday | 31 May,2025 | 19:42:10 
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

    vi cnt(n+1,0);
    for(int i=0; i<n; i++) 
    {
        int a;
        cin>>a;
        cnt[a]++;
    }
    bool ok=false;
    for(int i=1; i<=n; i++)
    {
        if(cnt[i]%2)
        {
            ok=true;
            break;
        }
    }
    if(ok) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
  }
  return 0;
}