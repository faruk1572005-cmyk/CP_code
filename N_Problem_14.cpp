
// /*    


//        ████████████████████████████████████████████████████
//        ██               Md.Faruk Hossain                 ██
//        ██    ███████╗ █████╗ ██████╗ ██╗   ██╗██╗  ██╗   ██
//        ██    ██╔════╝██╔══██╗██╔══██╗██║   ██║██║ ██╔╝   ██
//        ██    █████╗  ███████║██████╔╝██║   ██║█████╔╝    ██
//        ██    ██╔══╝  ██╔══██║██╔══██╗██║   ██║██╔═██╗    ██
//        ██    ██║     ██║  ██║██║  ██║╚██████╔╝██║  ██╗   ██
//        ██    ╚═╝     ╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═╝   ██
//        ████████████████████████████████████████████████████

// */


// #include <bits/stdc++.h>
// using namespace std;
 
// #define nl "\n"
// #define nf cout<<"\n"
// #define int long long
// #define cy cout << "YES\n"
// #define cn cout << "NO\n"
// #define fr(N)for(int i=0;i<N;i++)
// #define frg(x,a) for(auto x:a)
// #define vll vector<long long>
// #define all(v) v.begin(),v.end()
// #define rall(v) v.rbegin(),v.rend()

// #define fastio ios :: sync_with_stdio(false);cin.tie(0);cout.tie(0)

// void solve() {
//     int n;cin>>n;
//     if(n%7==0) cout<<n<<endl;
//     else { n=(n/10)*10;
//         for(int i=0;i<9;i++){
//             n++;
//             if(n%7==0)break;
//         }
//         cout<<n<<endl;
//     }
// }
// int32_t main() {
//     fastio;
//     int t=1;cin>>t;
//     while(t--)solve();
//     return 0;
// }

#include <iostream>
using namespace std;

int diff(int a, int b)
{
    int c = 0;
    while (a > 0 || b > 0)
    {
        if (a % 10 != b % 10)
            c++;
        a /= 10;
        b /= 10;
    }
    return c;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n % 7 == 0)
        {
            cout << n << endl;
            continue;
        }

        int sera = n;
        int x = 10;

        for (int i = 7; i <= 999; i += 7)
        {
            int d = diff(n, i);
            if (d < x)
            {
                x = d;
                sera = i;
            }
        }

        cout << sera << endl;
    }
    return 0;
}