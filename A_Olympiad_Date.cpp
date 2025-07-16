/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Wednesday | 07 May,2025 | 22:23:20 
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

    int cnt[10] {};
    int ans=0;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        cnt[x]++;
        if(cnt[0]>=3 && cnt[1]>=1 && cnt[2] >= 2 && cnt[3] >= 1 && cnt[5] >= 1 && ans==0)
        {
            ans=i;
        }
    }
    cout<<ans<<nl;
  }
  return 0;
}

