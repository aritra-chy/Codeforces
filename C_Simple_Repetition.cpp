/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Tuesday | 08 April,2025 | 20:59:18 
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

bool isprime(ll num)
{
    if(num==2) return true;
    if(num%2==0) return false;
    if(num==1) return false;
    for(ll i=3; i*i<=num; i+=2)
    {
        if(num%i==0) return false;
    }
    return true;
}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        ll x,k;
        cin>>x>>k;
        if(k==1) 
        {
            if(isprime(x)) cout<<"YES"<<nl;
            else cout<<"NO"<<nl;
        }
        else 
        {
            if(x==1) 
            {
                if(k==2) cout<<"YES"<<nl;
                else cout<<"NO"<<nl;
            }
            else
            {
                cout<<"NO"<<nl;
            }
        }
    }
    return 0;
}

