#include <bits/stdc++.h>
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <cctype>

using namespace std;

#define int long long
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
const char nl = '\n';

void solve();

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; 

    while(t--) {
        solve();
    }

    return 0;
}

void solve() 
{
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b) << endl;
}