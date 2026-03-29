
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
    Node* root;
    if(val==-1)root=NULL;
    else root=new Node(val);
    queue<Node*>q;
    if(root)q.push(root);
    while(!q.empty()){
        Node* p=q.front();
        q.pop();
        int l,r;cin>>l>>r;
        Node* lnode,* rnode;
        if(l==-1)lnode=NULL;
        else lnode=new Node(l);
        if(r==-1)rnode=NULL;
        else rnode=new Node(r);
        p->left=lnode;
        p->right=rnode;
        if(p->left)q.push(p->left);
        if(p->right)q.push(p->right);
    }
    return root;
}

void output(Node* root){
    if(root==NULL)return;
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

int maximum_depth(Node* root){
    if(root==NULL)return 0;
    int l=maximum_depth(root->left);
    int r=maximum_depth(root->right);
    return max(l,r)+1;
}
void solve(){
    Node* root=input();
    output(root);
    nf;nf;
    cout<<maximum_depth(root);

}
int32_t main() {
    fastio;
    int t=1;
    while(t--)solve();
    return 0;
}