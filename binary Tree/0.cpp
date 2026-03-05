
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
Node* input(){
    int val;cin>>val;
    Node* root;
    if(val==-1)root=NULL;
    else root=new Node(val);
    queue<Node*>q;
    if(root)q.push(root);
    while(!q.empty()){
        int l,r;cin>>l>>r;
        Node* Myleft,*Myrigt;
        if(l==-1)Myleft=NULL;
        else Myleft=new Node(l);
        if(r==-1)Myrigt=NULL;
        else Myrigt=new Node(r);
        Node* p=q.front();
        q.pop();
        p->left=Myleft;
        p->rigt=Myrigt;
        if(p->left)q.push(p->left);
        if(p->rigt)q.push(p->rigt);
    }
    return root;
}
void output(Node* root){
    queue<Node*>q;
    if(root)q.push(root);
    while(!q.empty()){
        Node* p=q.front();
        q.pop();
        cout<<p->val<<" ";
        if(p->left)q.push(p->left);
        if(p->rigt)q.push(p->rigt);
    }
}
int node_count(Node* root){
    if(root==NULL)return 0;
    if(root->left==NULL&&root->rigt==NULL)return 1;
    int l=node_count(root->left);
    int r=node_count(root->rigt);
    return r+l;
}
int max_hight(Node* root){
    if(root==NULL)return 0;
    if(root->left==NULL&&root->rigt==NULL)return 0;
    int l=max_hight(root->left);
    int r=max_hight(root->rigt);
    return max(l,r)+1;
}
void preorder(Node* root){
    if(root==NULL)return;
    cout<<root->val<<" ";
    if(root->left)preorder(root->left);
    if(root->rigt)preorder(root->rigt);
}
void inorder(Node* root){
    if(root==NULL)return;
    if(root->left)inorder(root->left);
    cout<<root->val<<" ";
    if(root->rigt)inorder(root->rigt);
}
void postorder(Node* root){
    if(root==NULL)return;
    if(root->left)postorder(root->left);
    if(root->rigt)postorder(root->rigt);
    cout<<root->val<<" ";
}
int32_t main() {
    fastio;
 
    Node* root=input();
    output(root);
    nf;nf;
    cout<<node_count(root)<<nl;
    nf;
    cout<<max_hight(root);
    nf;nf;
    preorder(root);
    nf;nf;
    inorder(root);
    nf;nf;
    postorder(root);
    return 0;
}