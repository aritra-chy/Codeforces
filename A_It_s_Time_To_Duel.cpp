/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Saturday | 17 May,2025 | 20:45:09
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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi a(n);
        int ones = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1) ones++;
        }
        bool flag=true;
        for(int i=1; i<=n-1; i++)
        {
            if(a[i-1]==a[i] && a[i]==0) 
            {
                flag=false;
                break;
            }
        }
        if(ones==n || flag==false) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }
    return 0;
}