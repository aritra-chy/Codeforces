/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Saturday | 12 April,2025 | 22:16:25 
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

int computelucky(int x)
{
    int minDigit=9;
    int maxDigit=0;
    while(x>0)
    {
        int digit=x%10; 
        minDigit=min(minDigit,digit);
        maxDigit=max(maxDigit,digit);
        x=x/10;
    }
    return maxDigit-minDigit;
}

int findLucky(int l, int r) {
    int best=1;
    int mx=-1;

    for(int i=l;i<=r;i++)
    {
        int lucky=computelucky(i);
        if(lucky>mx)
        {
            mx=lucky;
            best=i;
            if(mx==9) break;
        }
    }
    return best;
}
int main()
{
  fast;
  int t;
  cin>>t;

  while(t--)
  {
    int l,r;
    cin>>l>>r;
    cout<<findLucky(l,r)<<nl;
  }

  return 0;
}