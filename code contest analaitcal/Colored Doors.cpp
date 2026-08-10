#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// #include <cctype>

using namespace std;

#define int long long
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
const char nl = '\n';

void solve();

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    // string s;
    // cin >> s;

    // int n = s.size();
    // int flag = 1;

    // for(int i=0; i<n-2; i+=2)
    // {
    //     if(char(s[i]+32) == char(s[i+1]))
    //     {
    //         flag = 1;
    //     }
    //     if(!flag)
    //     {
    //         flag = 0;
    //     }
    // }

    // // a = 97; z = 122; A = 65;  Z = 90;
    // for(int i=0; i<n/2; i++)
    // {
    //     if(char(s[i]+32) != char(s[n-i-1]))
    //     {
    //         flag = 0;
    //         break;
    //     }
    //     // cout << char(s[i] + 32);
    // }

    // if(flag)
    // yes;
    // else
    // no;

    string s;
    cin >> s;

    stack<char> st;
    bool is_true = true;

    for (char c : s)
    {
        if (isupper(c))
        {
            st.push(c);
        }
        else
        {
            if (st.empty() || (st.top() + 32) != c)
            {
                is_true = false;
                break;
            }
            st.pop();
        }
    }

    if (!st.empty())
    {
        is_true = false;
    }

    if (is_true)
    {
        yes;
    }
    else
    {
        no;
    }
}



#include <bits/stdc++.h>
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <cctype>

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

    while(t--) {
        solve();
    }

    return 0;
}

void solve() 
{
    string s;
    cin >> s; 

    int n = s.size();
    int flag = 1;
    
    // a = 97; z = 122; A = 65;  Z = 90;
    for(int i=0; i<n/2; i++)
    {
        if(char(s[i]+32) != char(s[n-i-1]))
        {
            flag = 0;
            break;
        }
        // cout << char(s[i] + 32);
    }

    for(int i=0; i<n-2; i+=2)
    {
        if(char(s[i]+32) == char(s[i+1]))
        {
            flag = 1;
        }
    }

    if(flag)
    yes;
    else 
    no;
}