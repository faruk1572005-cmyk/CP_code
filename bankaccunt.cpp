#include<bits/stdc++.h>
using namespace std;

class Bankaccount{
    private:
       string nm;
       int accountnumber;
       double balance;
    public:
        Bankaccount(string n,int acc,double bal){
            nm=n;
            accountnumber=acc;
            balance=bal;
        }

        void deposit(double mm){
            balance+=mm;
            cout<<"Deposit: "<<mm<<endl;
        }
        void withdraw(double mm){
            if(balance>=mm){
                balance-=mm;
                cout<<"withdraw"<<endl;
            }else {
                cout<<"not withdraw\n";
            }
        }

        void showbalance(){
            cout<<"Balance : "<<balance<<endl;
        }
};

int main(){
    Bankaccount ob1("Faruk" ,250109,  40000000  );
    ob1.showbalance();
    ob1.deposit(300000);
    ob1.showbalance();
    ob1.withdraw(500000);
    ob1.showbalance();
    ob1.withdraw(1090909090);

}