/*
BSCIT-05-0080/2024
ASSIGNMENT libraryfinecalculator
MELISA MOKEIRA MAISO
*/

#include<iostream>

using namespace std;

int main(){
    int daysOverDue;
    double fine=0;

    //Taking input from the user
    cout<< "Enter the number of days the book is overdue:";
    cin >>daysOverDue;

    //calculating fine based on the days overdue
    if(daysOverDue>0 && daysOverDue <=7){
        fine=daysOverDue *20;//ksh 20 per day for upto 7 days
    }
    else if(daysOverDue>=8 && daysOverDue <=14){
        fine=daysOverDue *50;//ksh 50 per day 8-14days
    }
    else{
        cout <<"No fine or fine rate not specified for this duration." <<endl;
        return 0;
    }
    //displaying fine
    cout<<"The total fine is:Ksh."<<fine <<endl;

    return 0;
}