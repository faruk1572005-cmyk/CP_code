
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
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void output(Node* head){
    if(head==NULL)return ;
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
}
void insert(Node* &head,Node* &tail,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void tail_s(Node* &head, Node* &tail,int val){
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
void anypos(Node* &head,Node* &tail,int pos,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=tail=newnode;
        return;
    }
    if(pos==0){
        insert(head,tail,val);
        return;
    }
    Node* tmp=head;
    for(int i=1 ; i<pos; i++){
        tmp=tmp->next;
    }
    //cout<<tmp->val;
    newnode->next=tmp->next;
    tmp->next->prev=newnode;
    tmp->next=newnode;
    newnode->prev=tmp;
}
void head_delete(Node* &head,Node* &tail){
    if(head==NULL)return;
    Node* deletenode=head;
    head->next->prev=NULL;
    head=head->next;
    delete deletenode;
    if(head==NULL)tail=NULL;
}
void tail_delete(Node* &head,Node* &tail){
    if(head==NULL)return;
    Node* deletenode=tail;
    tail->prev->next=NULL;
    tail=tail->prev;
    delete deletenode;
}
void anypos_delete(Node* &head,Node* &tail,int pos){
    if(head==NULL)return;
    if(pos==0){
        head_delete(head,tail);
        return;
    }
    Node* tmp=head;
    for(int i=1 ;i<pos ; i++){
        tmp=tmp->next;
    }
    Node* deletenode=tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->prev=tmp;
    delete deletenode;
}
int size_l(Node* head){
    int siz=0;
    if(head==NULL)return 0;
    while(head){
        siz++;
        head=head->next;
    }
    return siz;
}
int32_t main(){
    fastio;
 
    // Node* head=new Node(20);
    // Node* a=new Node(35);
    // Node* tail=new Node(30);
    // head->next=a;
    // a->prev=head;
    // a->next=tail;
    // tail->prev=a;
    Node* head=NULL;
    Node* tail=NULL;
    while(1){
        int  val;cin>>val;
        if(val==-1)break;
        tail_s(head,tail,val);
    }
    
    output(head);
    // nf;
    // nf;
    // insert(head,tail,40);
    // insert(head,tail,50);
    // insert(head,tail,60);
    // tail_s(head,tail,90);
    // tail_s(head,tail,100);
    // output(head);
    // nf;nf;
    // anypos(head,tail,0,30);
    // output(head);
    nf;nf;
    head_delete(head,tail);
    output(head);
    nf;nf;
    if((tail->val))cout<<"nul"<<nl;
    cout<<tail->val;
    nf;nf;
    // tail_delete(head,tail);
    // output(head);
    // nf;nf;
    // anypos_delete(head,tail,1);
    // output(head);
    // nf;
    // cout<<size_l(head);
    return 0;
}