#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,a,b;
        cin>>n;
        int arr[n];
        for(int i=0 ; i<n ;i++){
            cin>>a>>b;
            arr[i]=(int)a/b;
        }
        int max=arr[0];
        s=0;
        for(int i=1 ; i<n ; i++){
            if(max<arr[i])max=arr[i],s=i;
        }
        
        // int  arr[n*2];
        // for(int i=0 ; i<n*2 ; i++)cin>>arr[i];
        // div=arr[0]/arr[1];
        // for(int i=2 ; i<n*2 ; i+=2){
        //     int din=arr[i]/arr[i+1];
        //     if(div< din ){
        //         div=din;
        //         s++;
        //     }

        // }

        cout<<s+1<<endl;
    }
    return 0;
}