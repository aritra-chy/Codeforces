/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Thursday | 20 February,2025 | 01:06:27
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
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main()
{
    fast;
    ll n,t;
    cin>>n>>t;

    unordered_map<int,int>mp;

    for(int i=0; i<n; i++)
    {
        ll a;
        cin>>a;

        if(mp.count(t-a)) {
            cout<<mp[t-a]+1<<" "<<i+1<<endl;
            return 0;
        }
        mp[a] = i;
    }
    cout<<"IMPOSSIBLE"<<endl;

    return 0;
}
