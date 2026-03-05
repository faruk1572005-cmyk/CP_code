/*    
   ________________________
   |                      |
   |   Md.Faruk Hossian   |
   |______________________|

*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int x[n];
        for(int i=0 ; i<n  ;i++){
            cin>>x[i];
        }
        if(n==1){
            cout<<abs(s-x[0])<<endl;
            continue;
        }
        if(s<=x[0]){
            cout<<x[n-1]-s<<endl;
            continue;
        }
        int c=min((s-x[0]),abs(s-x[n-1]));
        cout<<c+x[n-1]-x[0]<<endl;
    }
    return 0;
}