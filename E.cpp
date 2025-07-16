/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Friday | 14 March,2025 | 00:06:44 
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

ll modex(ll x, ll y, ll n)
{
    ll result = 1;
    x=x%n;
    while(y>0)
    {
        if(y%2==1)
        {
            result = (result*x)%n;
        }
        x=(x*x)%n;
        y=y/2;
    }
    return result;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x,y,n;
        cin>>x>>y>>n;

        cout<<modex(x,y,n)<<endl;
    }
}
