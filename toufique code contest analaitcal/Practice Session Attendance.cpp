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

// void solve();

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    unordered_map<string, int> mp;
    for (int i = 0; i < n; ++i) 
    {
        string s;
        cin >> s;
        mp[s]++;
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; ++i) 
    {
        string m;
        cin >> m;
        
        auto it = mp.find(m);
        if (it != mp.end()) 
        
            cout << it->second << endl;
        else 
        
            cout << 0 << endl;
        
    }

    return 0;
}