/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Monday | 10 March,2025 | 19:24:23 
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
  int t;
  cin>>t;

  while(t--)
  {
    int x;
    cin>>x;

    if(x>45)
    {
        cout<<-1<<endl;
        continue;
    }

    string s = "";
    for(int i=9; i>=1; i--)
    {
        if(x<=9 && x<=i)
        {
            s+=to_string(x);
            x=0;
            break;
        }
        else {
            s += to_string(i);
            x-=i;
        }
    }
    if(x)
    {
        cout<<-1<<endl;
        continue;
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
  }

  return 0;
}