#include <bits/stdc++.h>
using namespace std;

// Solve a single test case
void solve() {
    int n, l, r;
    cin >> n >> l >> r;

    vector<long long> a(n + 1); // 1-indexed array

    // Step 1: Fill positions [1..r-1] with arbitrary large numbers
    long long base = 1e5; // base for large numbers
    for (int i = 1; i < r; ++i) {
        a[i] = base + rand() % 100000; // random large number
    }

    // Step 2: Fill positions [r+1..n] with arbitrary large numbers
    for (int i = r + 1; i <= n; ++i) {
        a[i] = base + rand() % 100000 + i; // ensure distinct
    }

    // Step 3: Compute XOR of [l..r-1] and set a[r] to make XOR = 0
    long long xor_sum = 0;
    for (int i = l; i < r; ++i) xor_sum ^= a[i];
    a[r] = xor_sum;

    // Step 4: Print array
    for (int i = 1; i <= n; ++i) {
        cout << a[i] << (i == n ? "\n" : " ");
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    srand(time(0)); // seed for randomness

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
