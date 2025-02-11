/*
BSCIT-05-0080/2024
ASSIGNMENT USING ENCAPSULATION
MELISA MOKEIRA MAISO
*/

#include<iostream>

using namespace std;

class BankAccount{
    private:
    string accountHolder;
    double balance;

    public:
    //setter
    void setAccountHolder(string a){
        accountHolder=a;
    }
    void setBalance(double b){
        balance=b;
    }
    //getter
    string getAccountHolder(){
        return accountHolder;
    }
    double getBalance(){
        return balance;
    }

    };

    int main(){
        BankAccount b1;
        b1.setAccountHolder("John");
        cout<<"Name is"<<b1.getAccountHolder()<<endl;

        b1.setBalance(8000.000);
        cout<<"Account balance"<<b1.getBalance()<<endl;

        return 0;
    }
