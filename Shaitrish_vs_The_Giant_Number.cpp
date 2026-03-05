#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        if (str == "0") {
            cout << 0 << " " << 0 << "\n";
            cout << "Divisible by Shaitrish\n";
            continue;
        }

        string quotient = "";
        long long cur = 0;

        for (char c : str) {
            cur = cur * 10 + (c - '0');
            quotient.push_back((cur / 37) + '0');
            cur %= 37;
        }
        int p = 0;
        while (p < (int)quotient.size() - 1 && quotient[p] == '0')
            p++;

        quotient = quotient.substr(p);

        long long remainder = cur;

        cout << quotient << " " << remainder << "\n";

        if (remainder == 0)
            cout << "Divisible by Shaitrish\n";
        else
            cout << "Keep remainder\n";
    }

    return 0;
}
