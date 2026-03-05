#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long threshold = (n - 1) / 2;
        int total_pop = __builtin_popcountll(n);
        int remaining_pop = total_pop;
        long long ans = 0;
        bool tight = true;
        int high_bit = 63 - __builtin_clzll(n);
        
        for (int i = high_bit; i >= 0; i--) {
            if (!tight) break;
            int n_bit = (n >> i) & 1;
            int t_bit = (threshold >> i) & 1;
            
            if (t_bit == 1) {

                int lower_pop = remaining_pop - n_bit;
                ans += (1LL << lower_pop);
                

                if (n_bit == 1) {
                    remaining_pop--;
                } else {
             
                    break;
                }
            } else {
                remaining_pop -= n_bit; 
            }
        }
        
       
        if (tight) {
            ans += 1;
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}