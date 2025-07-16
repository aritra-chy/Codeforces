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
  string s;
  cin>>s;
  string target="heidi";
  int cnt=0;
  for(char c:s)
  {
      if(c==target[cnt])
      {
          cnt++;
          if(cnt==target.size()) break;
      }
  }
  if(cnt==target.size()) cout<<"YES"<<nl;
  else cout<<"NO"<<nl;

  return 0;
}
