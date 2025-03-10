/*
MELISA MAISO
BSCIT-05-0080/2024
C++ PROGRAM TO DEMONSTRATE INHERITANCE,ENCAPSULATION AND CONSTRUCTORS
*/
#include<iostream>
using namespace std;

//base class
class Person{
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

//derived class that inherits from base class 
class LibraryMember:public Person{
    private:
    int memberID;
    int booksBorrowed;

//constructor that initializes n, id, borrowed by calling base class construcor    
    public:
    LibraryMember(string n, int id, int books){
        name=n;
        memberID=id;
        booksBorrowed=books;
    }
    int getMemberID(){
        return memberID;
    }
    int getBooksBorrowed(){
        return booksBorrowed;
    }
};

//derived class that inherits from LibraryMember
class PremiumMember:public LibraryMember{
    private:
    double membershipFee;

//constructor that initializes n, id, borrowed, fee by calling appropriate constructors
    public:
    PremiumMember(string n, int id, int books, double fee):
    LibraryMember(n,id,books),//calls LibraryMember contructor
    membershipFee(fee){}//directly initializes membershipfee

    double getMembershipFee(){
        return membershipFee;
    }

};

//main function to create objects and demonstrate functionality
int main(){
    //creating Person object
    Person person1;
    person1.setName("Hyline William");
    cout<<"Person Name:"<<person1.getName()<<endl;

    //creating LibraryMember object
    LibraryMember member1 ("Collins Small",406,5);
    cout<<"Library Member Name: "<<member1.getName()<<endl;
    cout<<"Member ID: "<<member1.getMemberID()<<endl;
    cout<<"Books Borrowed: "<<member1.getBooksBorrowed()<<endl;

    //creating PremiumMember object
    PremiumMember premium1("Bob Johnson",202,5,99.99);
    cout<<"Premium Member Name: "<<premium1.getName()<<endl;
    cout<<"Member ID: "<<premium1.getMemberID()<<endl;
    cout<<"Books Borrowed: "<<premium1.getBooksBorrowed()<<endl;
    cout<<"Membership Fee: $"<<premium1.getMembershipFee()<<endl;

    return 0;


}