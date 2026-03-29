
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


int search(string pat, string s) {
        int k=pat.size(),n=s.size(),l=0,r=0,ans=0;
        vector<int>p(26,0),t(26,0);
        for(int i=0;i<k;i++)p[(pat[i]-'a')]++;
        // frg(x,p)cout<<x;nf;
        while(r<n){
            t[(int)(s[r++]-'a')]++;
            if(r-l==k){
                // frg(x,t)cout<<x;nf;
                if(t==p)ans++;
                t[(int)(s[l++]-'a')]--;
            }
          
        }
        return ans;
        // int ans=0,r=0,n=s.size(),l=0,k=pat.size();
        // while(r<n){
        //     sum.insert(s[r++]);
        //     if(r-l==k){
        //         frg(x,sum)cout<<x;cout<<' ';
        //         if(sum==ml)ans++;
        //         sum.erase(sum.find(s[l++]));

        //     }
            
        // }
        // return ans;
        // code here
        
}
void solve(){
    string s,p;cin>>s>>p;
   cout<< search(p,s);
    
}
int32_t main() {
    fastio;
    int t=1;
    while(t--)solve();
    return 0;
}