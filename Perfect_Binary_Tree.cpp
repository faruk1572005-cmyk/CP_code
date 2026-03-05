/*    
   ________________________
   |                      |
   |   Md.Faruk Hossian   |
   |______________________|

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

#define take(x) int x; cin >> x
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
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* input_tree(){
    int val;cin>> val;
    if (val==-1) return NULL;
    Node* root=new Node(val);
    queue<Node*>q;q.push(root);
    while(!q.empty()){
        Node* parent=q.front();
        q.pop();
        int l, r;cin>>l>>r;
        if (l!=-1){
            parent->left=new Node(l);
            q.push(parent->left);
        }
        if (r!=-1){
            parent->right=new Node(r);
            q.push(parent->right);
        }
    }
    return root;
}
int height(Node* root){
    if (root==NULL) return -1;
    return 1+max(height(root->left),height(root->right));
}
int count_nodes(Node* root){
    if (root==NULL) return 0;
    return 1+count_nodes(root->left)+count_nodes(root->right);
}

int32_t main(){
    fastio;
    Node* root=input_tree();
    int h=height(root); 
    int total_nodes=count_nodes(root);
    int expected_nodes=pow(2,h+1)-1;
    if (total_nodes==expected_nodes)cy;
    else cn;
    return 0;
}