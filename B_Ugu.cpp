/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Thursday | 10 April,2025 | 20:30:53 
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
    string s;
    cin>>n>>s;

    int ones=0, flips=0;

    for(int i=0;i<n;i++)
    {
        char c=s[i];
        if(flips%2 == 1) 
        {
            c=(c=='0')?'1':'0';
        }
        if(i<n-1) 
        {
            char next=s[i+1];
            if(flips%2==1) 
            {
                next=(next=='0')?'1':'0';
            }
            if(c=='1' && next=='0') 
            {
                ones++;
                flips++;
            }
        }
    }
    cout<<ones<<endl;
  }
  return 0;
}