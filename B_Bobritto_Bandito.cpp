/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Sunday | 13 April,2025 | 21:48:16 
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
    int n,m,l,r;
    cin>>n>>m>>l>>r;

    int lprime=-l;

    int x=min(m,lprime);
    
    cout<<-x<<" "<<m-x<<endl;
  }
  return 0;
}