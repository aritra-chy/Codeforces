/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Monday | 24 February,2025 | 01:09:54 
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
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define MOD 1000000007
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int main()
{
  fast;
  int n;
  cin>>n;

  if(n%2 != 0)
  {
    cout<<"-1"<<endl;
  }
  else {
    vector<int>a(n+1);

    for(int i=1; i<=n; i++)
    {
        a[i]=i;
    }
    for(int i=1; i<=n-1; i++)
    {
        swap(a[i],a[i+1]);
        i++;
    }
    for(int i=1; i<=n; i++)
    {
        cout<<a[i]<<" ";
    }
  }

  return 0;
}