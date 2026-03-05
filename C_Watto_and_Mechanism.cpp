// // // /*    


// // // ████████████████████████████████████████████████████
// // // ██                                                ██
// // // ██    ███████╗ █████╗ ██████╗ ██╗   ██╗██╗  ██╗   ██
// // // ██    ██╔════╝██╔══██╗██╔══██╗██║   ██║██║ ██╔╝   ██
// // // ██    █████╗  ███████║██████╔╝██║   ██║█████╔╝    ██
// // // ██    ██╔══╝  ██╔══██║██╔══██╗██║   ██║██╔═██╗    ██
// // // ██    ██║     ██║  ██║██║  ██║╚██████╔╝██║  ██╗   ██
// // // ██    ╚═╝     ╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═╝   ██
// // // ████████████████████████████████████████████████████

// // // */


// // // #include <bits/stdc++.h>
// // // using namespace std;
 
// // // #define nl "\n"
// // // #define nf cout<<endl
// // // #define ll long long
// // // #define pb push_back
// // // #define ff first
// // // #define ss second
// // // #define fr(N)for(ll i=0;i<N;i++)
// // // #define all(x) (x).begin(), (x).end()
// // // #define cy cout << "YES\n"
// // // #define cn cout << "NO\n"
// // // #define vll vector<long long>
// // // #define vi vector<int>
 
 

// // // int main(){
// // //     ios::sync_with_stdio(false);
// // //     cin.tie(nullptr);

// // //     int n, m;
// // //     cin >> n >> m;

// // //     unordered_set<string> st;
// // //     st.reserve(n * 10);
// // //     st.max_load_factor(0.7);
// // //     vector<string>s(n);
// // //     for(int i = 0; i < n; i++){
        
// // //         cin >> s[i];
// // //         for(int j = 0; j < (int)s[i].size(); j++){
// // //             string p = s[i];
// // //             p[j] = '*';
// // //             st.insert(p);
// // //         }
// // //     }
   
// // //     for(int i = 0; i < m; i++){
// // //         string t;
// // //         cin >> t;
// // //         for(int k=0;i<n;i++){
// // //             if(s[k]==t){
// // //                 cn;
// // //                 break;
// // //             }
// // //         }
// // //         bool ok = false;
// // //         for(int j = 0; j < (int)t.size(); j++){
// // //             string p = t;
// // //             p[j] = '*';
// // //             if(st.count(p)){
// // //                 ok = true;
// // //                 break;
// // //             }
// // //         }
// // //         cout << (ok ? "YES\n" : "NO\n");
// // //     }
// // // }
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
// #define ll long long
// #define pb push_back
// #define ff first
// #define ss second
// #define fr(N)for(ll i=0;i<N;i++)
// #define all(x) (x).begin(), (x).end()
// #define cy cout << "YES\n"
// #define cn cout << "NO\n"
// #define vll vector<long long>
// #define vi vector<int>
 
 
// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
 
//     ll n,m;cin>>n>>m;
//     unordered_set<string> st;
//     st.reserve(300000000);
//     fr(n){
//         string s;cin>>s;
//         st.insert(s);
//     }
//     while(m--){
//         string s;cin>>s;
//         bool ok=false;
//         for(int i=0;i<s.size() &&!ok;i++){
//             char ss=s[i];
//             for(char a='a';a<='c' ;a++){
//                 if( ss==a)continue;
//                 s[i]=a;
//                 if(st.count(s)){
//                     ok=true;
//                     break;
//                 }
//             }
//             s[i]=ss;
//         }
//         ok?cy:cn;
//     }

//     return 0;
// }


// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
    
// //     int n, m;
// //     cin >> n >> m;
    
// //     unordered_set<string> dictionary;
    
// //     // ডিকশনারি স্ট্রিংগুলো সংরক্ষণ
// //     for (int i = 0; i < n; i++) {
// //         string s;
// //         cin >> s;
// //         dictionary.insert(s);
// //     }
    
// //     // ক্যোয়ারি প্রসেসিং
// //     while (m--) {
// //         string s;
// //         cin >> s;
        
// //         bool found = false;
        
// //         // প্রতিটি পজিশনে অক্ষর পরিবর্তন করে চেক করা
// //         for (int i = 0; i < s.length() && !found; i++) {
// //             char original = s[i];  // মূল অক্ষর সংরক্ষণ
            
// //             // 'a', 'b', 'c' এর মধ্যে অন্য অক্ষরগুলো দিয়ে চেক করা
// //             for (char c = 'a'; c <= 'c'; c++) {
// //                 if (c == original) continue;  // মূল অক্ষর বাদ
                
// //                 s[i] = c;  // অক্ষর পরিবর্তন
                
// //                 // ডিকশনারিতে আছে কিনা চেক
// //                 if (dictionary.find(s) != dictionary.end()) {
// //                     found = true;
// //                     break;
// //                 }
// //             }
            
// //             s[i] = original;  // মূল অক্ষর ফিরিয়ে আনা
// //         }
        
// //         cout << (found ? "YES" : "NO") << "\n";
// //     }
    
// //     return 0;
// // }

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

const int p = 5, MOD[] = {(int) 1e9 + 7, (int) 1e9 + 9}, maxn = 6e5 + 5;

typedef long long ll;

string s1[maxn];
map < pair < int, int >, vector < int > > imam[2];
int pref[2][maxn], suff[2][maxn];

inline int sum(int a, int b, int mod) {
	if(a + b >= mod) return a + b - mod;
	if(a + b < 0) return a + b + mod;
	return a + b;
}

inline int mul(int a, int b, int mod) {
	return (ll) a * b % mod;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	string s;
	int sz;
	for(int i = 0; i < n; i++) {
		cin >> s1[i];
		sz = s1[i].size();
		for(int k = 0; k < 2; k++) {
			for(int j = 0; j < sz; j++) {
				pref[k][j + 1] = sum(mul(pref[k][j], p, MOD[k]), s1[i][j] - 'a' + 1, MOD[k]);
			}
			suff[k][sz] = 0;
			for(int j = sz - 1; j >= 0; j--) {
				suff[k][j] = sum(mul(suff[k][j + 1], p, MOD[k]), s1[i][j] - 'a' + 1, MOD[k]);
			}
			for(int j = 0; j < sz; j++) {
				imam[k][{pref[k][j], suff[k][j + 1]}].push_back(i);
			}
		}
	}
	bool pp;
//	cout << "-----------------" << endl;
	for(int i = 0; i < m; i++) {
		cin >> s;
		sz = s.size();
		for(int k = 0; k < 2; k++) {
			for(int j = 0; j < sz; j++) {
				pref[k][j + 1] = sum(mul(pref[k][j], p, MOD[k]), s[j] - 'a' + 1, MOD[k]);
			}
			suff[k][sz] = 0;
			for(int j = sz - 1; j >= 0; j--) {
				suff[k][j] = sum(mul(suff[k][j + 1], p, MOD[k]), s[j] - 'a' + 1, MOD[k]);
			}
		}
		for(int j = 0; j < sz; j++) {
			for(int k = 0; k < 2; k++) {
				pp = 0;
				if(imam[k].find({pref[k][j], suff[k][j + 1]}) != imam[k].end()) {
					for(int x : imam[k][{pref[k][j], suff[k][j + 1]}]) {
						if(s1[x][j] != s[j]) {
							pp = 1;
							break;
						}
					}
				}
				if(!pp) break;
			}
			if(pp) break;
		}
		if(pp) cout << "YES\n";
		else cout << "NO\n";
		
	}
	return 0;
}
