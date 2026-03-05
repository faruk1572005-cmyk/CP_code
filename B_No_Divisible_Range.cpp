#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i=0;i<N;i++) cin >> a[i];

    int ans = 0;

    for(int l=0;l<N;l++){
        for(int r=l;r<N;r++){
            int sum = 0;
            for(int k=l;k<=r;k++) sum += a[k];

            bool ok = true;
            for(int k=l;k<=r;k++){
                if(sum % a[k] == 0){
                    ok = false;
                    break;
                }
            }
            if(ok) ans++;
        }
    }

    cout << ans << "\n";
    return 0;
}
