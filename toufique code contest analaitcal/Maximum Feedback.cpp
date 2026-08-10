#include <bits/stdc++.h>

using namespace std;

#define int long long
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
const char nl = '\n';

void solve();

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; 

    while(t--) 
    {
        solve();
    }

    return 0;
}

void solve() 
{
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> v[i];
    }
    

    int a = v[0];
    int b = v[0];
    
    for (int i = 1; i < n; i++) 
    {
     
        b = max(v[i], b + v[i]);
        a = max(a, b);
    }
    
    cout << a << endl;
}






#include <bits/stdc++.h>

using namespace std;

#define int long long
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
const char nl = '\n';

void solve();

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; 

    while(t--) 
    {
        solve();
    }

    return 0;
}

void solve() 
{
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> v[i];
    }
    

    int a = v[0];
    int b = v[0];
    
    for (int i = 1; i < n; i++) 
    {
     
        b = max(v[i], b + v[i]);
        a = max(a, b);
    }
    
    cout << a << endl;
}