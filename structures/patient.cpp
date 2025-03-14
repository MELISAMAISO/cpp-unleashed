/*MELISA MAISO
BSCIT-05-0080/2024
C++ PROGRAM TO DEMONSTRATE USE OF STRUCTURES*/

#include<iostream>
using namespace std;

struct Patient{
    string name;
    int age;
    string diagnosis;
};

//function to display patient details
/*const Patient &p ensures that the function does not modify the original Patient object,
making it safer andmore efficient by avoiding unnecessary copying*/
void displayPatient(const Patient &p){
    cout<<"Patient Name :"<<p.name<<endl;
    cout<<"Patient Age :"<<p.age<<endl;
    cout<<"Diagnosis :"<<p.diagnosis<<endl;
}

int main(){
    Patient patient1={"John Newton",42,"Malaria\n"};
    Patient patient2={"Nicole Smith",23,"COVID-19\n"};

    displayPatient(patient1);
    displayPatient(patient2);

    //records with user inputs
    Patient patient3,patient4;
    cout<<"Patient Name:";
    cin>>patient3.name;
    cout<<"Patient Age:";
    cin>>patient3.age;
    cout<<"Diagnosis:";
    cin>>patient3.diagnosis;



    return 0;
}