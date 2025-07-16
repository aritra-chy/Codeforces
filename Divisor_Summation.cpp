/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Saturday | 29 March,2025 | 12:59:48 
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

const int mx=500000;
vector<long long> divisors(mx+1,0);
void precompute()
{
    for(int i=1;i<=mx;i++)
    {
        for(int j=i*2;j<=mx;j+=i)
        {
            divisors[j] += i;
        }
    }
}
int main()
{
    fast;
    precompute();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<divisors[n]<<endl;
    }
    return 0;
}