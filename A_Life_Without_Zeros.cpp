/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Tuesday | 25 February,2025 | 09:49:55 
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

ll removezeros(int n) {
    ll result=0, multiplier=1;

    while(n>0) {
        int digit = n%10;
        if(digit != 0)
        {
            result = digit*multiplier+result;
            multiplier *= 10;
        }
        n/=10;
    }
    return result;
}

int main() 
{
    int a,b;
    cin>>a>>b;

    int c = a+b;

    if(removezeros(a)+removezeros(b) == removezeros(c)) 
    {
        cout<<"YES"<<endl;
    } 
    else cout<<"NO"<<endl;
}
