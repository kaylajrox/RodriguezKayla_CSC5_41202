 /* Author: Kayla Rodriguez
 * Created on January 20, 2016, 8:55 AM
 * Purpose: Play Paper-Rock-Scissors with the computer
 */
 
//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
//User Libraries
 
//Global Constant

 
//Function Prototypes
 
//Execution Begins Here
int main(int argc, char** argv) {
   //The Problem to solve
    cout<<endl<<"Solution to Savitch 7thEd Chap3 Prob1"<<endl;
    cout<<endl<<"The Rock-Paper-Scissors Games"<<endl<<endl;
    
   //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
   //Declare and initialize variables
    char computr; //The computers play
    char player;  //the players move
    char choice;
    do {
        //Input the players turn
        do{
          cout<<"What is your move P,R,S?"<<endl;
          cin>>player;
          player=toupper(player);
        }while(!(player=='P'||player=='R'||player=='S'));

        //Computer Generated Play
        do{
           computr=rand()%4+80;     
        }while(computr=='Q');

        //Output the results
        cout<<"The Computer played "<<computr<<endl;
        cout<<"The Players move    "<<player<<endl<<endl;
        
        //Repeat program?
        cout<<"Would you like to repeat the program and play again? "<<endl;
        cout<<"y=yes anything else to exit"<<endl;
        cin>>choice;
    }while(choice=='y');
    

    
    
    //Exit stage right
    return 0;
}