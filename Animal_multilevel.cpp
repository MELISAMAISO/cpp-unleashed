/*
MELISA MAISO 
BSCIT-05-0080/2024
C++ to demonstrate multilevel inheritance*/

#include<iostream>
using namespace std;

class Hyena{
    public:
    void spots(){
        cout<<"I have spots"<<endl;
    }
};

class Cheetah:public Hyena{
    public:
    void meat(){
        cout<<"I eat meat"<<endl;
    }

};

class Jaguar:public Cheetah{

};

int main(){
    Jaguar cab;
    cab.spots();
    cab.meat();

    return 0;
}
