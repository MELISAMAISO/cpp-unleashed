/*
MELISA MAISO
BSCIT-05-0080/2024
C++ program to demonstrate multiple inheritance
This is when a class is derived from more than one parent*/

#include<iostream>
using namespace std;

class Mammal{
    public:
    Mammal(){
        cout<<"Mammals can give birth to young ones"<<endl;
    }
};

class WingedAnimal{
    public:
    WingedAnimal(){
        cout<<"Winged animal can fly"<<endl;
    }
};

//child class inheriting from class mammal and class wingedAnimal

class Bat: public Mammal, public WingedAnimal{

};

int main(){
    Bat b1;

    return 0;
}