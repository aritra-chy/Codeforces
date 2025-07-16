/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Friday | 18 April,2025 | 11:57:36 
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
  int k;
  string s;
  cin >> k >> s;

  vi cnt(26, 0);
  for(char c:s) cnt[c-'a']++;

  bool flag = true;
  for(int i=0; i<26; i++) 
  {
    if(cnt[i] % k != 0) 
    {
      flag = false;
      break;
    }
  }

  if(!flag) cout<<-1<<nl;
  else 
  {
    string str = "";
    for(int i=0; i<26; i++)
    {
        if(cnt[i] > 0) str += string(cnt[i]/k, 'a'+i);
    }
    string ans;
    for(int i=0; i<k; i++) ans += str;
    cout<<ans<<nl;
  }
  return 0;
}