
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

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* input(){
    int val;cin>>val;
    Node* root=new Node(val);
    queue<Node*>q;
    if(root)q.push(root);
    while(!q.empty()){
        int l,r;cin>>l>>r;
        Node* Myleft,*Myright;
        if(l==-1)Myleft=NULL;
        else Myleft=new Node(l);
        if(r==-1)Myright=NULL;
        else Myright=new Node(r);
        Node* p=q.front();
        q.pop();
        p->left=Myleft;
        p->right=Myright;
        if(p->left)q.push(p->left);
        if(p->right)q.push(p->right);
    }
    return root;
}
void output(Node* root){
   queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* p=q.front();
        q.pop();
        cout<<p->val<<" ";
        if(p->left)q.push(p->left);
        if(p->right)q.push(p->right);

    }
}
int outpu(Node* root){
    int sum=0;
   queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* p=q.front();
        q.pop();
        cout<<p->left->val<<" ";
        if(p->left)q.push(p->left);
        if(p->right)q.push(p->right);

    }
    return sum;
}
int32_t main() {
    fastio;
    Node* root=input();
    //output(root);
    cout<<outpu(root);

 
    
    return 0;
}