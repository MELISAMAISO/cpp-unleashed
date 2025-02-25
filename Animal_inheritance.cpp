/*
MELISA MAISO
BSCIT-05-0080/2024
C++ program to demonstrate hierarchial inheritance
This is when more than one class is inherited from the parent class*/

#include<iostream>
using namespace std;

//parent class
class Animal{
    public:
    void info(){
        cout<<"I am a domestic animal."<<endl;
    }
};

//child class 1

class Dog:public Animal{
    public:
    void bark(){
        cout<<"I am a dog.\n WOOF WOOF!!"<<endl;
    }
};

//child class 2

class Cat:public Animal{
    public:
    void meow(){
        cout<<"I am a cat.\n MEOW MEOW!!"<<endl;
    }
};

//child class 3

class Horse:public Animal{
    public:
    void neigh(){
        cout<<"I am a dog.\n HIHO HIHO!!"<<endl;
    }
};

int main(){
    //create object of the dog class
    Dog dog1;
    cout<<"Dog Class:"<<endl;

    dog1.info();//parent class function
    dog1.bark();

    //create object of the cat
    Cat cat1;
    cout<<"\nCat Class:"<<endl;

    cat1.info();//parent class function
    cat1.meow();

    //create object of the horse
    Horse horse1;
    cout<<"\nHorse class:"<<endl;

    horse1.info();//parent class function
    horse1.neigh();

    return 0;
}