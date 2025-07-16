/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Tuesday | 06 May,2025 | 21:36:55
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
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)

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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = *max_element(a.begin(),a.end()) - *min_element(a.begin(),a.end());
        cout << ans << nl;
    }
    return 0;
}