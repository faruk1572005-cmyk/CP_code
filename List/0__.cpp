
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



int32_t main() {
    fastio;
 
    //1
    list<int> l;

    //2
    list<int>l2(5);

    //3
    list<int> l3(5,10);

    //4
    list<int> l4={1,2,3,4};
    list<int> l5(l4);
    //4.1
    int array[]={1,3,4,5};
    list<int>l6(array,array+4);
    //4.2
    vector<int> v={1,2,3,4,5};
    list<int> l7(v.begin(),v.end());

    cout<<l6.size()<<nl;
    l4.clear();
    if(l4.empty())cout<<"Yes"<<nl;
    else cout<<"No"<<nl;

    //5
    for(int x:l7)cout<<x<<' ';nf;

    //6
    l4=l7;
    frg(x,l4)cout<<x<<' ';nf;

    //7
    l7.resize(10);
    frg(x,l7)cout<<x<<' ';nf;
    //7.1
    l7.resize(12,5);
    frg(x,l7)cout<<x<<' ';nf;

    //8
    l.push_back(4);
    l.push_front(5);
    l.pop_back();
    l.pop_front();

    //9
    l7.insert(next(l7.begin(),2),100);
    frg(x,l7)cout<<x<<' ';nf;
    //9.1
    l7.insert(next(l7.begin(),2),v.begin(),v.end());
    frg(x,l7)cout<<x<<' ';nf;

    //10
    replace(l7.begin(),l7.end(),4,100);
    frg(x,l7)cout<<x<<' ';nf;
    
    //11
    auto it=find(l7.begin(),l7.end(),4);
    if(it==l7.end())cout<<"no val"<<nl;
    else cout<<" have a val"<<nl;
    
    //12
    l7.remove(100);
    l7.remove(0);
    frg(x,l7)cout<<x<<' ';nf;

    //13
    l7.sort();
    frg(x,l7)cout<<x<<' ';nf;
    //13.1
    l7.sort(greater<int>());
    frg(x,l7)cout<<x<<' ';nf;

    //14
    l7.unique();
    frg(x,l7)cout<<x<<' ';nf;

    //15
    l7.reverse();
    frg(x,l7)cout<<x<<' ';nf;

    //16
    cout<<l7.front()<<" "<<l7.back()<<nl;

    //17
    auto it1=next(l7.begin(),1);
    cout<<*it1<<" "<<*next(l7.begin(),1)<<nl;

    


    
    return 0;
}