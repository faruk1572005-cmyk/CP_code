
// /*    


// ████████████████████████████████████████████████████
// ██                                                ██
// ██    ███████╗ █████╗ ██████╗ ██╗   ██╗██╗  ██╗   ██
// ██    ██╔════╝██╔══██╗██╔══██╗██║   ██║██║ ██╔╝   ██
// ██    █████╗  ███████║██████╔╝██║   ██║█████╔╝    ██
// ██    ██╔══╝  ██╔══██║██╔══██╗██║   ██║██╔═██╗    ██
// ██    ██║     ██║  ██║██║  ██║╚██████╔╝██║  ██╗   ██
// ██    ╚═╝     ╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═╝   ██
// ████████████████████████████████████████████████████

// */


// #include <bits/stdc++.h>
// using namespace std;
 
// #define nl "\n"
// #define nf cout<<endl

// #define int long long
// #define uint unsigned long long int

// #define cy cout << "YES\n"
// #define cn cout << "NO\n"

// #define fr(N)for(int i=0;i<N;i++)
// #define frs(i,s,n) for(int i=s;i<(n);i++)
// #define fr1(i,n) for(int i=1;i <= (n);i++)
// #define vin(a) for(auto &i:a)cin >> i
// #define frg(x,a) for(auto x:a)

// #define vll vector<long long>
// #define vec(v,n) vector<int> v(n)
// #define get(v,n) vec(v,n);fr(i,n)cin >> v[i]

// #define take(x) int x; cin >> x; while(x--)
// #define intput(x) int x;cin>>x;

// #define mxe(v) *max_element(v.begin(),v.end())
// #define mne(v) *min_element(v.begin(),v.end())

// #define psb(a) push_back(a)
// #define ppb pop_back()
// #define all(v) v.begin(),v.end()
// #define rall(v) v.rbegin(),v.rend()
// #define sz(v)(int)(v.size())

// #define ff first
// #define ss second

// #define popcnt(x) __builtin_popcount11(x)
// #define clz(x) __builtin_clzll(x)
// #define fastio ios :: sync_with_stdio(false);cin.tie(0);cout.tie(0)

// class Node{
//     public:
//     int val;
//     Node* left;
//     Node* right;
//     Node(int val){
//         this->val=val;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };
// Node* input(){
//     int val;cin>>val;
//     Node* root=new Node(val);
//     queue<Node*>q;
//     q.push(root);
//     while(!q.empty()){
//         int l,r;cin>>l>>r;
//         Node* myleft;
//         if(l==-1)myleft=NULL;
//         else myleft=new Node(l);
//         Node* myright;
//         if(r==-1)myright=NULL;
//         else myright=new Node(r);
//         Node* p=q.front();
//         q.pop();
//         p->left=myleft;
//         p->right=myright;
//         if(p->left)q.push(p->left);
//         if(p->right)q.push(p->right);
//     }
//     return root;
// }
// void output(Node* root){
//     queue<Node*>q;
//     q.push(root);
//     while(!q.empty()){
//         Node* p=q.front();
//         q.pop();
//         cout<<p->val<<' ';
//         if(p->left)q.push(p->left);
//         if(p->right)q.push(p->right);
//     }
// }
// bool search(Node* root,int val){
//     if(root==NULL)return false;
//     if(root->val==val) return true;
//     if(root->val>val) return search(root->left,val);
//     else return search(root->right,val);
// }

// int32_t main() {
//     fastio;
 
//     Node* root=input();
//     output(root);
//     nf;nf;
//     int val;cin>>val;
//     if(search(root,val))cout<<"Found\n";
//     else cout<<"Not found"<<nl;
    
//     return 0;
// }


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
    Node* root;
    int val;cin>>val;
    if(val==-1)root=NULL;
    else root=new Node(val);
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
        p->rigt=Myright;
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
        cout<<p->val<< ' ';
        if(p->left)q.push(p->left);
        if(p->rigt)q.push(p->rigt);
    }
}
bool surch(Node* root,int val){
    if(root==NULL)return false;
    if(root->val==val)return true;
    if(root->val>val)return surch(root->left,val);
    else return surch(root->rigt,val);
}
void insert(Node* &root,int x){
    Node* newnode=new Node(x);
    if(root==NULL){
        root=newnode;
        return;
    }
    if(x<root->val){
        if(root->left==NULL){
            root->left=newnode;
            return;
        }else{
            insert(root->left,x);
        }

    }else{
        if(root->rigt==NULL){
            root->rigt=newnode;
            return;
        }
        else {
            insert(root->rigt,x);
        }
    }
}
int32_t main() {
    fastio;
 
    Node* root=input();
    output(root);
    iint(val);
    nf;
    insert(root,val);
    output(root);
    //surch(root,val)?cy:cn;
    return 0;
}