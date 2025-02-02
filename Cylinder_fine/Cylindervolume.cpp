#include <iostream>

using namespace std;

//Function to calculate volume of a cylinder
double calculateVolume(double radius,double height){
    const double PI=3.142;//define constant PI

    return PI*radius*radius*height;
}
int main(){
    double radius,height;

    //Taking input from the user
    cout <<"Enter the radius of the cylinder:";
    cin >>radius;
    cout <<"Enter the height of te cylinder:";
    cin >>height;

    //calculating and displaying the volume
    double volume = calculateVolume(radius,height);
    cout <<"The volume of the cylinder is:"<<
    volume << "CM3" <<endl;

    return 0;
}