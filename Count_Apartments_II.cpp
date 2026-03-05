
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
#define nf cout<<"\n"

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

#define popcnt(x) __builtin_popcount11(x)
#define clz(x) __builtin_clzll(x)
#define fastio ios :: sync_with_stdio(false);cin.tie(0);cout.tie(0)

int n,m;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> dir = {{-1, 0},{0, 1},{1, 0},{0, -1}};
int bfs(int sx, int sy){
    queue<pair<int,int>> q;
    q.push({sx, sy});
    vis[sx][sy] = true;
    int cnt =1;
    while(!q.empty()){
        auto [x, y]=q.front();
        q.pop();
        for(auto d :dir){
            int nx=x+ d.first;
            int ny= y +d.second;
            if(nx>=0 && nx<n && ny>=0 && ny<m && !vis[nx][ny] && grid[nx][ny]=='.') {
                vis[nx][ny] = true;
                q.push({nx, ny});
                cnt++;
            }
        }
    }
    return cnt;
}

void solve(){
    cin>>n>>m;
    for(int i=0; i < n; i++){
        for(int j=0; j<m; j++)cin >> grid[i][j];
    }
    memset(vis, false, sizeof(vis));
    vector<int> rooms;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(grid[i][j]=='.' && !vis[i][j])rooms.push_back(bfs(i, j));
        }
    }
    if(rooms.empty()){
        cout<<0<<nl;
        return ;
    }
    sort(all(rooms));
    for(int x : rooms)cout <<x<<" ";
}
int32_t main() {
    fastio;
 
    int t=1;
    
    while(t--)solve();
    return 0;
}