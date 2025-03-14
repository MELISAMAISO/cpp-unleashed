/*MELISA MAISO
BSCIT-05-0080/2024
C++ PROGRAM TO DEMONSTRATE USE OF STRUCTURES*/

#include<iostream>
using namespace std;

struct Player{
    string name;
    int score;
    int level;
};

//Function to display player details
void displayPlayer(const Player &p){
    cout<<"Player Name:"<<p.name<<endl;
    cout<<"Score:"<<p.score<<endl;
    cout<<"Level:"<<p.level<<endl;
}

int main(){
    Player player1={"John Newton",42,2};
    Player player2={"Nicole Smith",23,5};

    displayPlayer(player1);
    displayPlayer(player2);

   //records with user input
    Player player3,player4;

    cout<<"Player Name:";
    cin>>player3.name;
    cout<<"Score:";
    cin>>player3.score;
    cout<<"Level:";
    cin>>player3.level;

    cout<<"Player Name:";
    cin>>player4.name;
    cout<<"Score:";
    cin>>player4.score;
    cout<<"Level:";
    cin>>player4.level;

    return 0;
}