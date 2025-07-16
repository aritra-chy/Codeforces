/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Sunday | 11 May,2025 | 11:14:22 
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
    int p1,p2,p3;
    cin>>p1>>p2>>p3;

    int sum=p1+p2+p3;
    int draws=sum/2;

    if(sum%2 !=0)
    {
        cout<<-1<<nl;
        continue;
    } 
    else if(p3>p1+p2)
    {
        draws=p1+p2;
    }
    cout<<draws<<nl;
  }

  return 0;
}