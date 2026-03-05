
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

class Node{
    public:
    int val;
    Node* left;
    Node* rigt;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->rigt=NULL;
    }
};
Node* input_tree(){
    queue<Node*>q;
    int val;cin>>val;
    Node* root;
    if(val==-1) root=NULL;
    else root=new Node(val);
    if(root)q.push(root);
    while(!q.empty()){
        Node* p=q.front();
        q.pop();
        int l,r;cin>>l>>r;
        Node* Myleft;
        if(l==-1)Myleft=NULL;
        else Myleft=new Node(l);
        Node* Myrigt;
        if(r==-1)Myrigt=NULL;
        else Myrigt=new Node(r);
        p->left=Myleft;
        p->rigt=Myrigt;
        if(p->left)q.push(p->left);
        if(p->rigt)q.push(p->rigt);
    }
    return root;
}
void output_tree(Node* root){
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* p=q.front();
        q.pop();
        cout<<p->val<<" ";
        if(p->left)q.push(p->left);
        if(p->rigt)q.push(p->rigt); 
    }
}
void preorder(Node* root){
    cout<<root->val<<" ";
    if(root->left)preorder(root->left);
    if(root->rigt)preorder(root->rigt);
}

int32_t main() {
    fastio;
    Node* root=input_tree();
    output_tree(root); 
    nf;nf;
    preorder(root);
    return 0;
}