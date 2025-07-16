/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Saturday | 05 April,2025 | 20:14:34 
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
  int n,q;
  cin>>n>>q;
  unordered_set<int>s;

  for(int i=0; i<n; i++)
  {
    int num;
    cin>>num;
    s.insert(num);
  }

  while(q--)
  {
    int x;
    cin>>x;

    if(s.find(x)!=s.end())
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }
  }
  return 0;
}