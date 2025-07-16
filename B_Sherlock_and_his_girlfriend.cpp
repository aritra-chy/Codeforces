/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Thursday | 20 March,2025 | 16:37:11 
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

const int MAX_N = 100000;

int main()
{
  fast;
  int n;
  cin>>n;

  vi color(n+2,0);
  int count = 0;

  for(int i=2; i<=n+1; i++)
  {
    if(color[i] == 0)
    {
       color[i]=count++;
       for(int j=2*i; j<=n+1; j+=i)
       {
        if(color[j]==0)
        {
            color[j]=count;
        }
       }
       count++;
    }
  }

  cout<<(n>=2 ? 2:1)<<endl;
  for(int i=2; i<=n+1; i++)
  {
    cout<<(color[i]==1 ? 1:2)<<" ";
  }
  cout<<endl;

  return 0;
}