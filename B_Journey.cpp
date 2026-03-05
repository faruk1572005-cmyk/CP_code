#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,sum=0,count=0,day;
        int ar[3];
        cin>>n>>ar[0]>>ar[1]>>ar[2];
        sum=ar[0]+ar[1]+ar[2];
        count=n/sum;
        int rem=n%sum;
        day=count*3;
        // if(rem){
        //   rem-=ar[0];
        //   day++;
        //   if(rem>0)
        //   rem-=ar[1];
        //     day++;
        //     if(rem>0) day++;

        // }
        // while(1){
        //     bool ok=false;
        if(rem){
         int s=0;
            for(int i=0 ; i<3 ; i++){
                day++;
                s+=ar[i];
                if(s>=rem)break; 
            }
            // day++;
        }
        //     if(ok)break;
        //     // sum+=a;
        //     // if(sum<n) count++;
        //     // else break;
        //     // sum+=b;
        //     // if(sum<n) count++;
        //     // else break;
        //     // sum+=c;
        //     // if(sum<n) count++;
        //     // else break;

        // }
        //day++;
        cout<<day<<endl;
    }
    return 0;
}