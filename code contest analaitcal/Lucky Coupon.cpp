#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// #include <cctype>

using namespace std;

#define int long long
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
const char nl = '\n';

void solve();

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    int n;
    cin >> n;

    set<int> s;
    

    // for (auto c : s)
    // {
    for (int i=0; i<n; i++)
    {
        int c;
        cin >> c;
        s.insert(c);
    }
    cout << s.size() << endl;
    
    for (auto c : s)
    {
        cout << c << " ";
    }

    cout << endl;
}



