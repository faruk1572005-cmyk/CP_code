
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

#define fastio ios :: sync_with_stdio(false);cin.tie(0);cout.tie(0)


//13
void print(stringstream & ss){
    string word;
    if(ss>>word){
        cout<<word<<"  ;  ";
        print(ss);
    }
}

int32_t main() {
    fastio;
 
    string s;
    getline(cin,s);

    //1 push_back()
    s.push_back('s');
    cout<<s<<nl;

    //2 pop_back()
    s.pop_back();
    cout<<s<<nl<<nl;

    //3 erase()
    s.erase(8,6);
    cout<<s<<nl<<nl;

    //4 replace()
    s.replace(0,7,"Replaced");
    cout<<s<<nl<<nl;

    //5 insert()
    s.insert(5," insert ");
    cout<<s<<nl<<nl;

    //6 raeng base loop
    frg(x,s)cout<<x;nf;nf;
    //6.1
    for(auto it=s.begin();it<s.end();it++)
    cout<<*it;nf;nf;

    //7 begin() end()
    cout<<*(s.begin())<<"  "<<*(s.end()-1)<<nl<<nl;
    
    //8 stringstream
    stringstream ss(s);
    string word;
    while(ss>>word)cout<<word<<" ; ";nf;nf;

    //9 resize()
    cout<<s.size()<<nl;
    s.resize(45);
    cout<<s<<nl<<s.size()<<nl<<s[44]<<nl;

    //10 find()

    //11 sort()
    cin.ignore();
    string s1;
    getline(cin,s1);
    cout<<s1<<nl;
    sort(all(s1));
    cout<<s1<<nl;
    //11.1 
    sort(rall(s1));
    cout<<s1<<nl<<nl;
    
    //12 reverse()
    reverse(all(s));
    cout<<s<<nl<<nl;

    //13
    // stringstream ss(s);
    // print(ss);


    return 0;
}