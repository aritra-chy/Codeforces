/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Thursday | 17 April,2025 | 20:21:11 
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
    int n,k;
    cin>>n>>k;
    vi cnt(n+1);
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        cnt[a]++;
    }

    int ans=0;
    for(int i=1; i*2<=k; i++)
    {
        if(i*2==k) ans+=cnt[i]/2;
        else if (k-i<=n) ans+=min(cnt[i],cnt[k-i]);
    }
    cout<<ans<<nl;
  }

  return 0;
}

