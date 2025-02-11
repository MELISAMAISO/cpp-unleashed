/*
BSCIT-05-0080/2024
ASSIGNMENT USING (CLASSES) CAR MODEL
MELISA MOKEIRA MAISO
*/

#include <iostream>
#include <string>

using namespace std;

class Car{
    public:
    string brand;
    string model;
    float price;
    int mileage;

    void display(){
        cout<< "Brand:"<<brand<<endl;
        cout<< "Model:"<<model<<endl;
        cout<< "Price:$"<<price<<endl;
        cout<< "Mileage"<<mileage<<"miles"<<endl;
    }
    void drive(int distance){
        mileage += distance;
        cout<< "Updated Mileage after driving"<<distance<<"miles:"<<mileage<<"miles"<<endl;

    }

};

int main(){
    Car myCar;

    myCar.brand ="Toyota";
    myCar.model ="Corolla";
    myCar.price =20000;
    myCar.mileage =5000;

    myCar.display();

    myCar.drive(150);
    myCar.drive(300);

    return 0;
}