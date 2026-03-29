
/*    


       ████████████████████████████████████████████████████
       ██               Md.Faruk Hossain                 ██
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
#define nf cout<<"\n"
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fr(N)for(int i=0;i<N;i++)
#define frg(x,a) for(auto x:a)
#define vll vector<long long>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

#define fastio ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr)

void solve(){
    //vector<int> a = {1,3,-1,-3,5,3,6,7};
    // int k = 3;
    // int n = a.size(),r=0,l=0;
    // multiset<int> ml;
    // while(r<n){
    //     ml.insert(a[r]);
    //     if(r-l+1==k){
    //         cout<<*ml.rbegin()<<' ';
    //         ml.erase(ml.find(a[l]));
    //         l++;
    //     }
    //     r++;
    // }
    vector<int> a = {12,6,-1,-3,5,3,6,7};
int k = 3;
deque<int> dq;

// for(int i = 0; i < a.size(); i++) {
//     if(!dq.empty() && dq.front() == i-k)
//         dq.pop_front();

//     // Remove smaller elements from back
//     while(!dq.empty() && a[dq.back()] <= a[i])
//         dq.pop_back();

//     dq.push_back(i);

//     if(i >= k-1)
//         cout << a[dq.front()] << ' ';
// }
for(int i=0;i<a.size();i++){
    if(!dq.empty()&&dq.front()==i-k)dq.pop_front();
    while(!dq.empty()&& a[dq.back()]<=a[i])dq.pop_back();
    dq.push_back(i);
    if(i+2>k)cout<<a[dq.front()]<<nl;
}

}
int32_t main() {
    fastio;
    int t=1;
    while(t--)solve();
    return 0;
}