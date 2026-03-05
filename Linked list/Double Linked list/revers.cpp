
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
#define frg(x,v) for(auto x:v)

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
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void input(Node* &head,Node* &tail,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void output(Node* head){
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
}
void revers(Node* head,Node* tail){
    Node* i=head;
    Node* j=tail;
    for(; i!=j && i->next!=j ;i=i->next,j=j->prev){
        swap(i->val,j->val);
    }
    swap(i->val,j->val);
}
void insert_vector(Node* head,vll &v){
    while(head){
        v.push_back(head->val);
        head=head->next;
    }
}
void cppy(Node* &head,Node* &tail,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=tail=newnode;
    }
    tail->next=newnode;
    tail=newnode;
}
int32_t main() {
    fastio;
 
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while(1){
        cin>>val;
        if(val==-1) break;
        input(head,tail,val);
    }
  // Node* root=head;
    Node* chead=NULL,*ctail=NULL;
    Node* tmp=head;
    while(tmp!=NULL){
        cppy(chead,ctail,tmp->val);
        tmp=tmp->next;
    }

    revers(head,tail);
    output(head);nf;nf;
    output(chead);
   // output(root);
    // nf;nf;
    // vll v;
    // //insert_vector(head,v);
    // frg(x,v)cout<<x<<' ';
   
    return 0;
}