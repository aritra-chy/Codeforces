/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Saturday | 22 February,2025 | 09:57:01 
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
  int a;
  cin>>a;

  while(true)
  {
    int sum=0,num=a;
    while(num>0)
    {
        sum += num%10;
        num /= 10;
    }
    if(sum%4 == 0)
    {
        break;
    }
    a++;
  }
  cout<<a<<endl;
  return 0;
}