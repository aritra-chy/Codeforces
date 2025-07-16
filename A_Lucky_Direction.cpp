// /*------------------------------------------------------
//     author    : Aritra Chowdhury
//     created   : Monday | 24 February,2025 | 10:45:51 
// ------------------------------------------------------*/
 
// #include <bits/stdc++.h>
// #include <string>
// #include <iomanip>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// #include <iostream>
// using namespace std;
// #define read(type) readInt<type>() // Fast read
// #define ll long long
// #define vi vector<int>
// #define vll vector<long long>
// #define vs vector<string>
// #define MOD 1000000007
// #define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
// int main()
// {
//   fast;
//   string s;
//   cin>>s;
// // N, E, W, S, NE, NW, SE, SW.
//   if(s == "E")
//   {
//     cout<<"W"<<endl;
//   }
//   else if (s == "W") {
//     cout<<"E"<<endl;
//   }
//   else if (s == "N") {
//     cout<<"S"<<endl;
//   }
//   else if (s == "S") {
//     cout<<"N"<<endl;
//   }
//   else if (s == "NE") {
//     cout<<"SW"<<endl;
//   }
//   else if (s == "SW") {
//     cout<<"NE"<<endl;
//   }
//   else if (s == "NW") {
//     cout<<"SE"<<endl;
//   }
//   else if (s == "SE") {
//     cout<<"NW"<<endl;
//   }

//   return 0;
// }



/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Monday | 24 February,2025 | 10:59:39 
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
int main()
{
  fast;
  string s;
  cin>>s;
  // N, E, W, S, NE, NW, SE, SW.
  unordered_map<string,string> opposite = {{"E","W"},{"W","E"},{"N","S"},{"S","N"},
  {"NE","SW"},{"SW","NE"},{"NW","SE"},{"SE","NW"}
};

    if(opposite.count(s)) {
        cout<<opposite[s];
    }

  return 0;
}