#include<bits/stdc++.h>
using namespace std;

void fun(int arr[],int n){
    for (int i=0 ; i<n ; i++){
        bool ok=false,of=false;
        for(int j=i  ; j<n-1 ;j++){
            if(arr[j]==0) {
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
                ok=true;
                
                
            }
            
        }
        if(ok)n--,i--;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++) cin>>arr[i];
    fun(arr,n);
    for(int i=0; i<n ; i++) cout<<arr[i]<<" ";

    return 0;
}