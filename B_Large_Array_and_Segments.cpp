// /*------------------------------------------------------
//     author    : Aritra Chowdhury
//     created   : Thursday | 03 April,2025 | 21:02:50 
// ------------------------------------------------------*/
 
// #include <bits/stdc++.h>
// #include <string>
// #include <iomanip>
// #include <vector>
// #include <algorithm>
// #include<numeric>
// #include <cmath>
// #include <iostream>
// using namespace std;
// #define read(type) readInt<type>() // Fast read
// #define ll long long
// #define nl "\n"
// #define vi vector<int>
// #define vll vector<long long>
// #define vs vector<string>
// #define MOD 1000000007
// #define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

// void solve()
// {
//     int n,k,x;
//     cin>>n>>k>>x;

//     vi a(n);
//     for(int i=0; i<n; i++)
//     {
//         cin>>a[i];
//     }
//     int s = accumulate(a.begin(),a.end(), 0LL);
//     if(x>k*s)
//     {
//         cout<<0<<nl;
//         return;
//     }
//     int xm = x%s;
//     int r=x/s;
//     if(xm==0)
//     {
//         r--;
//         xm=s;
//     }
//     int ans=n*k - r*n;
//     int sm=0;
//     for(int i=n-1; i>=0; i--)
//     {
//         sm+=a[i];
//         if(sm>=xm)
//         {
//             break;
//         }
//         ans--;
//     }
//     cout<<ans<<nl;
// }

// int main()
// {
//     fast;
//     int t=1;
//     cin >> t;

//     for(int i=1; i<=t+1; i++)
//     {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
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
#define all(x) (x).begin(), (x).end() // YOU MISSED THIS!

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;

    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    ll s = accumulate(all(a), 0LL);
    ll xm = x % s;
    ll r = x / s;
    
    if (xm == 0)
    {
        r--;
        xm = s;
    }
    
    int ans = n * k - r * n;
    ll sm = 0;
    
    for (int i = 0; i < n; i++) // FIXED LOOP
    {
        sm += a[i];
        if (sm >= xm) break;
        ans--;
    }
    
    cout << max(0LL, (ll)ans) << nl; // Cast ans to ll
}

int main()
{
    fast;
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}

