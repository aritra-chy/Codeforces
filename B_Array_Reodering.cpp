/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Saturday | 24 May,2025 | 09:27:52 
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

    vi v(n);
    for(int &x:v)
    {
      cin>>x;
    }

    sort(v.begin(),v.end(),[](int x,int y){
        return x%2 < y%2;
    });

    int ans=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            ans += __gcd(v[i],v[j]*2)>1;
        }
    }
    cout<<ans<<nl;

  }

  return 0;
}