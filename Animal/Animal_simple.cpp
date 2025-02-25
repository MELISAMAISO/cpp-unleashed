/*
MELISA MAISO
BSCIT-05-0080/2024
C++ Program to demonstrate inheritancd*/

#include<iostream>
using namespace std;

//single inheritance

class Animal{
    public:
    void eat(){
        cout<<"I can eat !"<<endl;
    }
    void sleep(){
        cout<<"I can sleep !!"<<endl;
    }
};

//derived class
class Dog:public Animal{
    public:
    void bark(){
        cout<<"I can bark woof woof !!"<<endl;
    }

};

int main (){
    // create object of the dog class
    Dog dog1;

    //calling members of the base class
    dog1.eat();
    dog1.sleep();

    //calling members of the derived class
    dog1.bark();

    return 0;
}