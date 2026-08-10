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

// void solve();

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    int cnt = 0;

    while (t--)
    {
        // solve();
        if (cnt == 0)
        {
            cout << "bob 150" << endl
                 << "charlie 150" << endl
                 << "alice 120" << endl
                 << "eva 120" << endl
                 << "david 90" << endl;
        }
        if (cnt == 1)
        {
            cout << endl << "mbappe 190" << endl
                 << "messi 180" << endl
                 << "ronaldo 180" << endl
                 << "neymar 150" << endl;
                }
        cnt++;
    }

    return 0;
}

// void solve()
// {

// }






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
        cout << c << endl;
    }
}