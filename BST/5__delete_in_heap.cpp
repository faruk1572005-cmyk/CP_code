
/*    


████████████████████████████████████████████████████
██                                                ██
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
#define nf cout<<endl

#define int long long
#define uint unsigned long long int

#define cy cout << "YES\n"
#define cn cout << "NO\n"

#define fr(N)for(int i=0;i<N;i++)
#define frs(i,s,n) for(int i=s;i<(n);i++)
#define fr1(i,n) for(int i=1;i <= (n);i++)
#define vin(a) for(auto &i:a)cin >> i
#define frg(x,a) for(auto x:a)

#define vll vector<long long>
#define vec(v,n) vector<int> v(n)
#define get(v,n) vec(v,n);fr(i,n)cin >> v[i]

#define iint(x) int x; cin >> x
#define ichar(x) char x; cin >> x
#define istring(x) string x; cin>>x
#define istrings(x) string x; geline(cin,x)
#define take(x) int x; cin >> x; while(x--)
#define intput(x) int x;cin>>x;

#define mxe(v) *max_element(v.begin(),v.end())
#define mne(v) *min_element(v.begin(),v.end())

#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v)(int)(v.size())

#define ff first
#define ss second

#define popcnt(x) __builtin_popcount11(x)
#define clz(x) __builtin_clzll(x)
#define fastio ios :: sync_with_stdio(false);cin.tie(0);cout.tie(0)

void insert(vll &v, int val){
    v.push_back(val);
    int cur_idx=v.size()-1;
    while(1){
        int par_idx=(cur_idx-1)/2;
       if(v[cur_idx]>v[par_idx])swap(v[cur_idx],v[par_idx]);
       else break;
       cur_idx=par_idx;
    }
}
void delet_head(vll &v){
    cout<<v[0]<< " Delete->";
    v[0]=v.back();
    v.pop_back();
    int cur_idx=0;
    while(true){
        int left_idx=cur_idx*2+1;
        int right_idx=cur_idx*2+2;
        int left_val=LONG_LONG_MIN,right_val=LONG_LONG_MIN;
        if(left_idx<v.size())left_val=v[left_idx];
        if(right_idx<v.size())right_val=v[right_idx];
        if(left_val>right_val&&left_val>v[cur_idx]){
            swap(v[left_idx],v[cur_idx]);
            cur_idx=left_idx;
        }
        else if(right_val>left_val&&right_val>v[cur_idx]){
            swap(v[right_idx],v[cur_idx]);
            cur_idx=right_idx;
        }
        else break;
    }
}
int32_t main() {
    fastio;
    // iint(n);
    // vll v(n);//fr(n)cin>>v[i];
   // fr(v.size())cout<<v[i]<< " ";nf;nf;
    vll v;
    take(t){
        iint(val);
        insert(v,val);
    }
    fr(v.size())cout<<v[i]<<" ";nf;nf;
    delet_head(v);
    fr(v.size())cout<<v[i]<<" ";nf;
    delet_head(v);
    fr(v.size())cout<<v[i]<<" ";nf;
    delet_head(v);
    fr(v.size())cout<<v[i]<<" ";nf;
    delet_head(v);
    fr(v.size())cout<<v[i]<<" ";nf;
    delet_head(v);
    fr(v.size())cout<<v[i]<<" ";nf;
    delet_head(v);
    fr(v.size())cout<<v[i]<<" ";nf;
    delet_head(v);
    fr(v.size())cout<<v[i]<<" ";nf;
    delet_head(v);
    fr(v.size())cout<<v[i]<<" ";nf;
    
 
    
    return 0;
}