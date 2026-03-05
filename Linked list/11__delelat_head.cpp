
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

// #define all(x) (x).begin(), (x).end()
// #define srt(v) sort(v.begin(),v.end())
// #define rsrt(v) sort(v.rbegin(),v.rend())

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
//     public:
//     int val;
//     Node* next;
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };
// void Print_linked_list(Node* head){
//     Node* tmp=head;
//     while(tmp!=NULL){
//         cout<<tmp->val<<' ';
//         tmp=tmp->next;
//     }  
// }
// void insert_at_tail(Node* &head,Node* &tail,int val){
//     Node* newnode=new Node(val);
//     if(head==NULL){
//         head=newnode;
//         tail=newnode;
//         return ;
//     }
//     tail->next=newnode;
//     tail=tail->next;
// }
// void head_delete(Node* &head){
//     Node* deletenode=head;
//     head=head->next;
//     delete deletenode;
// }
// int32_t main() {
//     fastio;
//     Node* head=NULL;
//     Node* tail=NULL;
//     while(1){
//         take(val);
//         if(val==-1)break;
//         insert_at_tail(head,tail,val);
//     }
//     head_delete(head);
//     Print_linked_list(head);
 
    
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
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void input(Node* &head,Node* &tail,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        tail=newnode;
    }
    tail->next=newnode;
    tail=newnode;
}
void output(Node* head){
    if(head==NULL)return;
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
}
void head_delelet(Node* &head){
    if(head==NULL)return;
    Node* deletat=head;
    head=head->next;
    delete deletat;
}
void any_pos_delete(Node* &head,Node* &tail,int pos){
    if(head==NULL)return;
    if(pos==0){
        head_delelet(head);\
        return;
    }
    Node* temp=head;
    for(int i=1 ;i<pos ; i++){
        temp=temp->next;
    }
    Node* deletenode=temp->next;
    temp->next=temp->next->next;
    delete deletenode;
}
void delete_tail(Node* &head,Node* &tail){
    if(head==NULL)return ;
    Node* tmp=head;
    while(tmp->next->next!=NULL){
        tmp=tmp->next;
    }
    Node* deletenode =tmp->next;
    tmp->next=NULL;
    tail=tmp;
    delete deletenode;
}
void revears(Node* head){
    if(head==NULL)return;
    revears(head->next);
    cout<<head->val<<" ";
}
int32_t main() {
    fastio;
 
    Node* head=NULL;
    Node* tail=NULL;
    while(1){
        int n;cin>>n;
        if(n==-1)break;
        input(head,tail,n);
    }
    output(head);
    nf;
    nf;
    //head_delelet(head);
    //any_pos_delete(head,tail,0);
    //delete_tail(head,tail);
    //revears(head);
    //output(head);
    nf;
    //cout<<tail->val<<nl;

    for(Node* i=head ; i->next!=NULL ;i=i->next){
        for(Node* j=i->next ; j!=NULL ;j=j->next){
            if(i->val>j->val)swap(i->val,j->val);
        }
    }
    output(head);

    return 0;
}