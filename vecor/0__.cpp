
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

#define vll vector<long long>
#define vi vector<int>
#define vec(v,n) vector<int> v(n)
#define vec2(v,x,y) vector<vector<int>> v(x, vector<int>(y));

#define take(x) int x; cin >> x; while(x--)
#define get(v,n) vec(v,n);fr(i,n)cin >> v[i]

#define mxe(v) *max_element(v.begin(),v.end())
#define mne(v) *min_element(v.begin(),v.end())

#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v)(int)(v.size())
#define sq(x) sqrtl(x)

#define ff first
#define ss second

#define popcnt(x) __builtin_popcount11(x)
#define clz(x) __builtin_clzll(x)
#define fastio ios :: sync_with_stdio(false);cin.tie(0);cout.tie(0)


int32_t main() {
    fastio;
    vector<int>v2(10);
    vector<int>v={1,2,4,7,8};

    //1 push_back() pop_back()
    v.push_back(5);
    v.pop_back();

    //2 front() back()
    cout<<v.front()<<" "<<v.back()<<nl;

    //3 empty()
    if(v.empty())cy;
    else cn;

    //4 clear()
    vector<int> v1={1,2,3,4};
    v1.clear();

    //5 size()
    cout<<v.size()<<nl;

    //6 assign()
    v1={2,4,5,3,5};
    cout<<v1[2]<<"   ";
    v1.assign(10,2);
    fr(v1.size())cout<<v1[i]<<" ";nf;
    
    //7 begin() end()
    cout<<*v.begin()<<" "<<*v.end()<<"   ";
    auto a=v.end()-1;
    cout<<*a<<nl;

    //8 reverse()
    reverse(all(v));
    fr(v.size())cout<<v[i]<<" ";nf;

    //9 sort()
    sort(all(v));
    fr(v.size())cout<<v[i]<<" ";nf;
    //9.1 reverse sort()
    sort(rall(v));
    fr(v.size())cout<<v[i]<<" ";nf;

    //10 min mix
    cout<<*min_element(all(v))<<" "<<*max_element(all(v))<<nl;

    //11 insert()
    v.insert(v.begin()+2,100);
    fr(v.size())cout<<v[i]<<" ";nf;
    //11.1
    v2={1,2,3,4};
    v.insert(v.begin()+2,v2.begin(),v2.end());
    fr(v.size())cout<<v[i]<<" ";nf;

    //12 erase()
    v.erase(v.begin()+2);
    fr(v.size())cout<<v[i]<<" ";nf;
    //12.1
    v.erase(v.begin()+2,v.begin()+5);
    fr(v.size())cout<<v[i]<<" ";nf;
    
    //13 replace()
    replace(v.begin(),v.end(),2,500);
    fr(v.size())cout<<v[i]<<" ";nf;

    //14 find()
    auto it=find(all(v),100);
    (it!=v.end())?cy:cn; 
    
    //15 swap()
    v={1,2,3,5};
    v2={6,4,7,9};
    swap(v,v2);
    fr(v.size())cout<<v[i]<<" ";nf;
    fr(v2.size())cout<<v2[i]<<" ";nf;

    return 0;
}