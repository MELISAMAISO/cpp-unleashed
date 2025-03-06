/*
MELISA MAISO
BSCIT-05-0080/2024
C++ PROGRAM TO DEMONSTRATE INHERITANCE,ENCAPSULATION AND CONSTRUCTORS
*/
#include<iostream>
using namespace std;

//base class
class AccountHolder{
    protected:
    string name;

    public:
    void setName(string n){
        name=n;
    }
    string getName(){
        return name;
    }
};

//derived class that inherits from AccountHolder
class BankAccount:public AccountHolder{
    private:
    int accountNumber;
    double balance;

//constructor that initializes n, a, b by calling the base class constructor    
    public:
    BankAccount(string n, int a, double b){
        name=n;
        accountNumber=a;
        balance=b;
    }
    int getAccountNumber(){
        return accountNumber;
    }
    double getBalance(){
        return balance;
    }
};

//derived class that inherits from class bankaccount
class SavingsAccount:public BankAccount{
    private:
    double interestRate;

    public:
    SavingsAccount(string n, int a, double b, double i):
    BankAccount(n,a,b),
    interestRate(i){
       /* name=n;
        accountNumber=a;
        balance=b;
        interestRate=i;*/
    }
    int getInterestRate(){
        return interestRate;
    }
};

//main function to create objects and demonstrate functionality
int main(){

    //creating AccountHolder object
    AccountHolder h1;
    h1.setName("Julius Nyerere");
    cout<<"AccountHolder:"<<h1.getName()<<endl;

    //creating BankAccount object
    BankAccount b1 ("Collins Small",4006,5007);
    cout<<"AccountHolder Name: "<<b1.getName()<<endl;
    cout<<"Account Number: "<<b1.getAccountNumber()<<endl;
    cout<<"Account Balance: "<<b1.getBalance()<<endl;
  
    //creating SavingsAccount object
    SavingsAccount s1("Bob Johnson",6585,9900,9);
    cout<<"AccountHolder Name: "<<s1.getName()<<endl;
    cout<<"Account Number: "<<s1.getAccountNumber()<<endl;
    cout<<"Account Balance: "<<s1.getBalance()<<endl;
    cout<<"InterestRate: p.m "<<s1.getInterestRate()<<endl;
  
      return 0;

}