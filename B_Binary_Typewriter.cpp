/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Monday | 21 April,2025 | 20:58:15 
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

int solve(const string &s)
{
    if(s.empty()) return 0;
    int cost=s.length();
    int tr=0;
    char prev=s[0];
    for(int i=1;i<s.length();i++)
    {
        if(s[i]!=prev)
        {
            tr++;
            prev=s[i];
        }
    }
    cost+=tr;
    return cost;
}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        int total=solve(s);
        int tr=0;
        for(int i=1; i<n; i++)
        {
            if(s[i]!=s[i-1])
            {
                tr++;
            }
        }

        int mx=0;
        if(tr>=2) mx=2;
        else if (tr==1) mx=1;
        cout<<total-mx<<nl;
    }
    return 0;
}
