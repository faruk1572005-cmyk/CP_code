
#include <bits/stdc++.h>
using namespace std;
 
#define nl "\n"
#define nf cout<<endl
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define fr(N)for(ll i=0;i<N;i++)
#define all(x) (x).begin(), (x).end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define vll vector<long long>
#define vi vector<int>
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n,m;cin>>n>>m;
    unordered_set<string> st;
    st.reserve(300000);
    for(int i=0;i<m+n ;i++){
        string s;cin>>s;
        st.insert(s);
    }
    int count=m+n-st.size();
    if(count%2==0){
        n>m?cy:cn;
    }
    else n>=m?cy:cn;
    return 0;
}