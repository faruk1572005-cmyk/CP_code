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

#define all(x) (x).begin(), (x).end()
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())

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
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

Node* head = NULL;
Node* tail = NULL;
int sz = 0;

void insert_at_head(int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
    } else {
        newnode->next = head;
        head = newnode;
    }
    sz++;
}

void insert_at_tail(int val) {
    Node* newnode = new Node(val);
    if (tail == NULL) {
        head = newnode;
        tail = newnode;
    } else {
        tail->next = newnode;
        tail = newnode;
    }
    sz++;
}

void delete_at_index(int pos) {
    if (pos < 0 || pos >= sz) return;
    
    Node* toDelete = NULL;
    
    if (pos == 0) {
        toDelete = head;
        head = head->next;
        if (head == NULL) tail = NULL;
    } else {
        Node* temp = head;
        for (int i = 0; i < pos - 1; i++) {
            temp = temp->next;
        }
        toDelete = temp->next;
        temp->next = toDelete->next;
        if (temp->next == NULL) tail = temp;
    }
    
    delete toDelete;
    sz--;
}

void print_list() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val;
        if (temp->next != NULL) cout << " ";
        temp = temp->next;
    }
    cout << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int Q;
    cin >> Q;
    
    while (Q--) {
        int X, V;
        cin >> X >> V;
        
        if (X == 0) insert_at_head(V);
        else if (X == 1) insert_at_tail(V);
        else if (X == 2) delete_at_index(V);
        
        print_list();
    }
    
    return 0;
}