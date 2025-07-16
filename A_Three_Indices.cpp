/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Monday | 02 June,2025 | 22:09:35
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
        vi v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = -1;
        for (int i = 0; i + 2 < n; i++)
        {
            if (v[i] < v[i + 1] && v[i + 1] > v[i + 2])
            {
                ans = i;
            }
        }
        if (ans == -1)
        {
            cout << "NO" << nl;
        }
        else
        {
            cout << "YES" << nl;
            cout << ans + 1 << " " << ans + 2 << " " << ans + 3 << nl;
        }
    }
    return 0;
}