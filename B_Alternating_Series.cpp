/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Sunday | 10 August,2025 | 21:01:06 
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
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            if(i%2!=0) cout<<-1;
            else 
            {
                if(i==n) cout<<2;
                else cout<<3;
            }
            if(i==n) cout<<nl;
            else cout<<" ";
        }
    }
}