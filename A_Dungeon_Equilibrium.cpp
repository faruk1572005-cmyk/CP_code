#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int > arr(n,0);
    for(int i=0 ; i<n ; i++)cin>>arr[i];
    arr[6]=5;
    for(int i=0 ; i<n+1 ;i++) cout <<arr[i]<<" ";
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> freq(n + 1, 0);
//         for (int i = 0; i < n; i++) {
//             int x;
//             cin >> x;
//             if (x <= n)freq[x]++;
//            // cout<<x<<"  freq----> "<<freq[x]<<endl;
//         }
//         int del=0;
//         del+=freq[0];
//         //cout<<" dddd "<<del<<endl;
//         for (int i = 1; i <= n; i++) {
//             (freq[i] < i)? del += freq[i]:del+=(freq[i]-i);
//         }
//         cout<<del<<endl;
//     }
//     return 0;
// }