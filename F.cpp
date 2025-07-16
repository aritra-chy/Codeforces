/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Friday | 14 March,2025 | 01:56:45 
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

ll modex(ll b, ll p, ll m)
{
    ll result = 1;
    b=b%m; 
    while(p>0)
    {
        if(p%2==1)
        {
            result = (result*b)%m;
        }
        b=(b*b)%m;
        p=p/2;
    }
    return result;
}

int main()
{
    int b,p,m;

    while(cin>>b>>p>>m)
    {
        cout<<modex(b,p,m)<<endl;
    }
    return 0;
}
    