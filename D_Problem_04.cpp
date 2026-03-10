
// /*    


//        ████████████████████████████████████████████████████
//        ██               Md.Faruk Hossain                 ██
//        ██    ███████╗ █████╗ ██████╗ ██╗   ██╗██╗  ██╗   ██
//        ██    ██╔════╝██╔══██╗██╔══██╗██║   ██║██║ ██╔╝   ██
//        ██    █████╗  ███████║██████╔╝██║   ██║█████╔╝    ██
//        ██    ██╔══╝  ██╔══██║██╔══██╗██║   ██║██╔═██╗    ██
//        ██    ██║     ██║  ██║██║  ██║╚██████╔╝██║  ██╗   ██
//        ██    ╚═╝     ╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═╝   ██
//        ████████████████████████████████████████████████████

// */


// #include <bits/stdc++.h>
// using namespace std;
 
// #define nl "\n"
// #define nf cout<<"\n"
// #define int long long
// #define cy cout << "YES\n"
// #define cn cout << "NO\n"
// #define fr(N)for(int i=0;i<N;i++)
// #define frg(x,a) for(auto x:a)
// #define vll vector<long long>
// #define all(v) v.begin(),v.end()
// #define rall(v) v.rbegin(),v.rend()

// #define fastio ios :: sync_with_stdio(false);cin.tie(0);cout.tie(0)
// vll a(1005);

// void solve(){
//     int x;cin>>x;
//     cout<<a[x]<<nl;
    
// }
// int32_t main() {
//     fastio;

//     int a[1005];

//     for(int i=1,j=1;i<=1005 ;i++){
//         while(j%3==0 || j%10==3) j++;
//         a[i]=j;
//         j++;
//     }

// int n;cin>>n; 
// for(int i=1 ;i<=n ;i++){
//     int x;cin>>x;
//     cout<<a[x]<<endl;
// }

//     // int t=1;cin>>t;
//     // int x=1;
//     // for(int i=1 ;i<=1000; i++){
//     //     while(x%10==3 ||x%3==0) x++;
//     //     a[i]=x;
//     //     x++;
//     // }
//     // while(t--)solve();
//     // return 0;
// }


// // 1 =1  a[1]=1
// //2 =2  a[2]=2
// // 3= 4  a[3]=4
// //4 =5
// //5=7 
// // 6=8
// //7=10
// //8=11
// //9==14
// //10 =16
// //11=17
// //12=19


#include <iostream>
using namespace std;
int main()
{
   int n;
   cin >> n;
   int a[1005];
   for (int i = 1, j = 1; i <= 1005; i++)
   {
      while (j % 3 == 0 || j % 10 == 3)
      {
         j++;
      }
      a[i]=j++;
   }
   for (int i = 1; i <= n; i++)
      {
         int x;
         cin >> x;
         cout << a[x]<< endl;
      
      }
      return 0;
      
}