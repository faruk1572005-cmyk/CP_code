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
    Node *left,*right;
    Node(int v){
        val=v;
        left=right=NULL;
    }
};
Node* buildTree(){
    int val;cin>>val;
    if (val==-1) return NULL;
    Node* root = new Node(val);
    queue<Node*>q;q.push(root);
    while (!q.empty()){
        Node* curr=q.front();
        q.pop();
        int l, r;cin>>l>>r;
        if(l!=-1){
            curr->left=new Node(l);
            q.push(curr->left);
        }
        if(r!=-1){
            curr->right=new Node(r);
            q.push(curr->right);
        }
    }
    return root;
}
void printLeft(Node* root){
    if (!root) return;
    if (root->left) printLeft(root->left);
    else if (root->right)printLeft(root->right);
    cout<<root->val<<" ";
}
void printRight(Node* root){
    if(!root) return;
    cout<<root->val<<" ";
    if(root->right)printRight(root->right);
    else if (root->left) printRight(root->left);
}
int32_t main() {
    fastio;
    Node* root=buildTree();
    if (!root) return 0;
    if (root->left)printLeft(root->left);
    cout<<root->val<<" ";
    if (root->right)printRight(root->right);
    return 0;
}
