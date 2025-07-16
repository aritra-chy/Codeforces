/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Saturday | 29 March,2025 | 12:25:57 
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

int aliquotSum(int n)
{
    if(n==1) return 0;
    int sum=1;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            sum+=i;
            if(n/i!=i) sum+=n/i;
        }
    }
    return sum;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int sum=aliquotSum(n);

        if(sum>n) cout<<"abundant"<<endl;
        else if(sum<n) cout<<"deficient"<<endl;
        else cout<<"perfect"<<endl;
    }
    return 0;
}