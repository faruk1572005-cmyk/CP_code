// /*    
//    ________________________
//    |                      |
//    |   Md.Faruk Hossian   |
//    |______________________|

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

// #define vll vector<long long>
// #define vi vector<int>
// #define vec(v,n) vector<int> v(n)
// #define vec2(v,x,y) vector<vector<int>> v(x, vector<int>(y));

// #define take(x) int x; cin >> x
// #define get(v,n) vec(v,n);fr(i,n)cin >> v[i]

// #define mxe(v) *max_element(v.begin(),v.end())
// #define mne(v) *min_element(v.begin(),v.end())

// #define psb(a) push_back(a)
// #define ppb pop_back()
// #define all(v) v.begin(),v.end()
// #define rall(v) v.rbegin(),v.rend()
// #define sz(v)(int)(v.size())
// #define sq(x) sqrtl(x)

// #define ff first
// #define ss second

// #define popcnt(x) __builtin_popcount11(x)
// #define clz(x) __builtin_clzll(x)
// #define fastio ios :: sync_with_stdio(false);cin.tie(0);cout.tie(0)

// class Node{
// public:
//     int val;
//     Node* next;
//     Node* prev;

//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//         this->prev=NULL;
//     }
// };

// int size(Node* head){
//     int cnt=0;
//     Node* tmp=head;
//     while (tmp!=NULL)
//     {
//         cnt++;
//         tmp=tmp->next;
//     }
//     return cnt;
// }

// void print_left(Node* head){
//     cout<<"L -> ";
//     Node* tmp=head;
//     while (tmp!=NULL)
//     {
//         cout<<tmp->val<<" ";
//         tmp=tmp->next;
//     }
//     nf;
// }

// void print_right(Node* tail){
//     cout<<"R -> ";
//     Node* tmp=tail;
//     while (tmp!=NULL)
//     {
//         cout<<tmp->val<<" ";
//         tmp=tmp->prev;
//     }
//     nf;
// }

// void insert_at_head(Node*& head, Node*& tail, int val){
//     Node* newNode=new Node(val);
//     if (head==NULL)
//     {
//         head=tail=newNode;
//         return;
//     }
//     newNode->next=head;
//     head->prev=newNode;
//     head=newNode;
// }

// void insert_at_tail(Node*& head, Node*& tail, int val){
//     Node* newNode=new Node(val);
//     if (tail==NULL){
//         head=tail=newNode;
//         return;
//     }
//     tail->next=newNode;
//     newNode->prev=tail;
//     tail=newNode;
// }

// void insert_at_position(Node* head, int pos, int val){
//     Node* newNode=new Node(val);
//     Node* tmp=head;

//     for(int i=1; i<= pos-1; i++){
//         tmp=tmp->next;
//     }

//     newNode->next=tmp->next;
//     newNode->prev=tmp;
//     tmp->next->prev=newNode;
//     tmp->next=newNode;
// }

// int32_t main() {
//     fastio;
    
//     int t;cin>>t;

//     Node* head=NULL;
//     Node* tail=NULL;

//     while (t--){
//         int x,v;cin>>x>>v;
//         int sz=size(head);
//         if (x< 0 || x>sz){
//             cout<<"Invalid"<<nl;
//             continue;
//         }
//         if (x==0) insert_at_head(head, tail, v);
//         else if (x==sz) insert_at_tail(head, tail, v);
//         else insert_at_position(head, x, v);
//         print_left(head);
//         print_right(tail);
//     }

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
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
int idxx=0;
void head_insert(Node* &head,Node* &tail,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=tail=newnode;
        return;
    }
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
}
void tail_insert(Node* &head,Node* &tail,int val){
    Node* newnode=new Node(val);
    if(tail==NULL){
        head=tail=newnode;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void anypos(Node* &head, Node* &tail,int val,int idx){
    if(idx>idxx)return;
    if(idx==0){
        head_insert(head,tail,val);
        idxx++;
        return;
    }
    if(idx==idxx){
        tail_insert(head,tail,val);
        idxx++;
        return;
    }
    Node* newnode=new Node(val);
    Node* tmp=head;
    for(int i=0 ;i<idx-1 ; i++){
        tmp=tmp->next;
    }
    tmp->next->prev=newnode;
    newnode->next=tmp->next;
    tmp->next=newnode;
    newnode->prev=tmp;
    idxx++;
}
void output_L(Node* head){
    while(head){
        cout<<" "<<head->val;
        head=head->next;
    }
}
void output_R(Node* tail){
    while(tail){
        cout<<" "<<tail->val;
        tail=tail->prev;
    }
}
int32_t main() {
    fastio;
 
    Node* head=NULL;
    Node* tail=NULL;
    take(t){
        int idx,val;cin>>idx>>val;
        if(idxx<idx)cout<<"Invalid\n";
        else{
            anypos(head,tail,val,idx);
            cout<<"L ->";
            output_L(head);nf;
            cout<<"R ->";
            output_R(tail);
            nf;
        }
    }
    return 0;
}