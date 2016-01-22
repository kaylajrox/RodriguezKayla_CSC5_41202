 /* Author: Kayla Rodriguez
 * Created on January 20, 2016, 8:55 AM
 * Purpose: Play Paper-Rock-Scissors 
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
    char player2; //The computers play
    char player1;  //the players move
    bool result;  //True is a win, False is a tie
    char choice;
    do {
        //Input the player1's turn
        do{
          cout<<"Player 1, What is your move P,R,S?"<<endl;
          cin>>player1;
          player1=toupper(player1);
        }while(!(player1=='P'||player1=='R'||player1=='S'));
        
         //Input the player2's turn
        do{
          cout<<"Player 2, What is your move P,R,S?"<<endl;
          cin>>player2;
          player2=toupper(player2);
        }while(!(player2=='P'||player2=='R'||player2=='S'));

        //Output the moves by the computer and player
        cout<<"Player 1's move  "<<player1<<endl;
        cout<<"Player 2's move  "<<player2<<endl;
        
        //Determine the result
        if(player1==player2){
            cout<<"The result is a Tie"<<endl;
        }else if(player1=='P'&&player2=='R'){
            cout<<"Player 1 wins!"<<endl;
        }else if(player1=='R'&&player2=='S'){
            cout<<"Player 1 wins!"<<endl;   
        }else if(player1=='S'&&player2=='P'){
            cout<<"Player 1 wins!"<<endl;    
        }else if(player2=='P'&&player1=='R'){
            cout<<"Player 2 wins!"<<endl;
        }else if(player2=='R'&&player1=='S'){
            cout<<"Player 2 wins!"<<endl;
        }else if(player2=='S'&&player1=='P'){
            cout<<"Player 2 wins!"<<endl;    
        }else{
            cout<<"Player 2 loses"<<endl;
        }
        
        //Repeat program?
        cout<<"Would you like to play again? "<<endl;
        cout<<"y=yes anything else to exit"<<endl<<endl;
        cin>>choice;
    }while(choice=='y');
    
    //Exit stage right
    return 0;
}
