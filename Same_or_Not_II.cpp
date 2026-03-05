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
 
// #include <bits/stdc++.h>
// using namespace std;


// class Node{
// public:
//     int val;
//     Node* next;
//     Node(int val) {
//         this->val=val;
//         this->next=NULL;
//     }
// };

// class myStack {
// private:
//     Node* head;
//     int size;
// public:
//     myStack(){
//         head=NULL;
//         size=0;
//     }
    
//     void push(int val) {
//         Node* newNode=new Node(val);
//         newNode->next=head;
//         head=newNode;
//         size++;
//     }
    
//     int pop(){
//         if (head==NULL) return -1;
//         Node* temp=head;
//         int val=head->val;
//         head=head->next;
//         delete temp;
//         size--;
//         return val;
//     }
    
//     int top(){
//         if(head==NULL) return -1;
//         return head->val;
//     }
    
//     bool empty(){
//         return head==NULL;
//     }
    
//     int getSize(){
//         return size;
//     }
// };

// class myQueue {
// private:
//     Node* front;
//     Node* rear;
//     int size;
// public:
//     myQueue() {
//         front=NULL;
//         rear=NULL;
//         size=0;
//     }
    
//     void enqueue(int val){
//         Node* newNode=new Node(val);
//         if (rear==NULL) {
//             front=newNode;
//             rear=newNode;
//         } else {
//             rear->next=newNode;
//             rear=newNode;
//         }
//         size++;
//     }
    
//     int dequeue(){
//         if (front==NULL) return -1;
//         Node* temp=front;
//         int val=front->val;
//         front=front->next;
//         if (front==NULL) rear=NULL;
//         delete temp;
//         size--;
//         return val;
//     }
    
//     int getFront(){
//         if (front==NULL) return -1;
//         return front->val;
//     }
    
//     bool empty(){
//         return front==NULL;
//     }
    
//     int getSize(){
//         return size;
//     }
// };

// int32_t main() {
//     fastio;

//     myStack st;
//     myQueue q;
    
//     int n,m;cin>>n>>m;
//     fr(n){
//         int val;cin>>val;
//         st.push(val);
//     }
//     fr(m){
//         int val;cin>>val;
//         q.enqueue(val);
//     }
//     if (st.getSize() != q.getSize()) {
//         cn;
//         return 0;
//     } 
//     bool same=true;
//     while (!st.empty()){
//         int stackTop=st.pop();
//         int queueFront=q.dequeue();
        
//         if (stackTop != queueFront) {
//             same=false;
//             break;
//         }
//     }
    
//     (same)?cy:cn;
    
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
class MyStack{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    void push(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=tail=newnode;
            return;
        }
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
    Node* top(){
        return tail;
    }
    void pop(){
        if(head==NULL){
            return;
        }
        Node* deletenode=tail;
        if(tail->prev){
            tail->prev->next=NULL;
            tail=tail->prev;
            delete deletenode;
            return;
        }
        delete deletenode;
        head=tail=NULL;
    }
};
class MyQueue{
    public:
    Node* head=NULL,*tail=NULL;
    void push(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=tail=newnode;
            return;
        }
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
    Node* front(){
        return head;
    }
    void pop(){
        if(head==NULL)return;
        Node* deletenode=head;
        if(head->next){
            head=head->next;
            head->prev=NULL;
            delete deletenode;
            return;
        }
        head=tail=NULL;
        delete deletenode;
    }
};
int32_t main() {
    fastio;
 
    int n,m;cin>>n>>m;
    MyStack st;
    fr(n){
        int val;cin>>val;
        st.push(val);
    }
    MyQueue q;
    fr(m){
        int val;cin>>val;
        q.push(val);
    }
    if(n!=m){
        cn;
        return 0;
    }
    fr(n){
        if(st.top()->val!=q.front()->val){
            cn;
            return 0;
        }
        q.pop();
        st.pop();
    }
    cy;
    return 0;
}