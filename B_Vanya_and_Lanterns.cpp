
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
    int n,b;
    bool ans=true,ans1=true;
    vector<int>m;
    cin>>n>>b;
    int c[n];
    cout<<fixed<<setprecision(10);
    fr(n){
        cin>>c[i];
        if(c[i]==0)ans=false;
        if(c[i]==b)ans1=false;
    }if(n==1){
        cout<<max(c[0],b-c[0])/1.0;
        return ;
    }
    sort(c,c+n);
    if(ans)m.push_back(c[0]);
    for(int i=1;i<n;i++){
        m.push_back(c[i]-c[i-1]);
    }
    if(ans&&ans1&&((b-c[n-1])>c[0])&&(b-c[n-1])>*max_element(m.begin(),m.end())/2.0)cout<<(b-c[n-1])/1.0;
    else if(ans&&ans1&&((b-c[n-1])<=c[0])&&c[0]>=*max_element(m.begin(),m.end())/2.0)cout<<c[0]/1,0;
    else if(!ans)cout<<*max_element(m.begin(),m.end())/2.0;
    else if(m[0]>*max_element(m.begin(),m.end())/2.0)cout<<m[0]/1.0;
    else cout<<*max_element(m.begin(),m.end())/2.0;
}
int32_t main() {
    fastio;
    int t=1;
    while(t--)solve();
    return 0;
}