/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Monday | 12 May,2025 | 20:20:57 
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
    int x=0, mx=0, sum=0;
    vi a(n);
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        
        while(a[i]%2==0)
        {
            x++;
            a[i]/=2;
        }
        mx=max(mx,a[i]);
        sum+=a[i];
    }
    sum -= mx;
    cout<<sum+mx*(ll)pow(2,x)<<nl;
  }
  return 0;
}