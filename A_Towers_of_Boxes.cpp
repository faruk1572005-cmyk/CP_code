
/*


████████████████████████████████████████████████████
██                                                ██
██    ███████╗ █████╗ ██████╗ ██╗   ██╗██╗  ██╗   ██
██    ██╔════╝██╔══██╗██╔══██╗██║   ██║██║ ██╔╝   ██
██    █████╗  ███████║██████╔╝██║   ██║█████╔╝    ██
██    ██╔══╝  ██╔══██║██╔══██╗██║   ██║██╔═██╗    ██
██    ██║     ██║  ██║██║  ██║╚██████╔╝██║  ██╗   ██
██    ╚═╝     ╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═╝   ██
████████████████████████████████████████████████████

*/

#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define nf cout << "\n"

#define int long long
#define uint unsigned long long

#define cy cout << "YES\n"
#define cn cout << "NO\n"

#define fr(N) for (int i = 0; i < N; i++)
#define frg(x, a) for (auto x : a)

#define vll vector<long long>
#define vec(v, n) vector<int> v(n)
#define get(v, n) \
    vec(v, n);    \
    fr(i, n) cin >> v[i]

#define mxe(v) *max_element(v.begin(), v.end())
#define mne(v) *min_element(v.begin(), v.end())

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

#define fastio                    \
    ios ::sync_with_stdio(false); \
    cin.tie(0);                   \
    cout.tie(0)

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x = b + c, y = a * b;
    if (b > c)
    {
        cout << a << nl;
        return;
    }
    int cnt = 0;

    for (int i = 0; y > 0; i++)
    {
        y -= b;
        int sum = 0, ans = 0, ans2 = 0;
        for (int j = 0; 1; j++)
        {
            ans2 = sum;
            sum += b;
            if (sum > c)
                break;
        }
        y -= ans2;
        cnt++;
    }
    cout << cnt << nl;
    // cout<<ceil((double)y/(double)x*1.0)<<nl;
}
int32_t main()
{
    fastio;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}