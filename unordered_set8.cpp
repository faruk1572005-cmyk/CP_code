#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n, k;
    cin >> n >> k;

    unordered_set<long long> st;
    st.reserve(n);

    long long x;
    for (int i = 0; i < n; i++) {
        cin >> x;

        if (st.count(k - x)) {
            cout << "YES\n";
            return 0;
        }
        st.insert(x);
    }

    cout << "NO\n";
    return 0;
}
