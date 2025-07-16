/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Friday | 21 March,2025 | 16:10:50 
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

    if(n%2 == 0) 
    {
        cout<<string(n-2,'3')<<"66"<<nl;
    }
    else if(n==1 || n==3) 
    {
        cout<<-1<<nl;
    }
    else
    {
        cout<<string(n-5,'3')<<"36366"<<nl;
    } 
  }
  return 0;
}