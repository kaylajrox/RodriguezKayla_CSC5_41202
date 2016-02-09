/* 
 * File:   main.cpp
 * Author: Kayla Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose: Testing throwing dice
 */

//System Libraries
#include <iostream>//I/O
#include <cstdlib>//srand and rand functions
#include <ctime>//time to set the random number seed
#include <fstream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    unsigned short games;//max number of throws
    short frq2=0,frq3=0,frq4=0,frq5=0,frq6=0,frq7=0,frq8=0;
    short frq9=0, frq10=0, frq11=0,frq12=0;
    unsigned short wins=0,losses=0;
    ofstream out;
    //Open the file
    out.open("CardGames.dat");
    //Input data
    cout<<"How many games of Craps would you like to play"<<endl;
    cout<<"Utilize a number between 10,000 and 40,000"<<endl;
    cin>>games;
    while(games<10000&&games<40000){
        cout<<"How many games of Craps would you like to play"<<endl;
        cout<<"Utilize a number between 10,000 and 40,000"<<endl;
        cin>>games;
    }
    //Throw the die
    for(int throws=1;throws<=games;throws++){
        char die1=rand()%6+1;//number between [1,6]
        char die2=rand()%6+1;//number between [1,6]
        char sum=die1+die2;
        if (sum==2||sum==3||sum==12)losses++;
        else if (sum==7||sum==11)wins++;
        else{
            //roll again
            bool kpRln=true;
            do{
                die1=rand()%6+1;//number between [1,6]
                die2=rand()%6+1;//number between [1,6]
               char sum2=die1+die2;
               switch (sum==7){
                   case true:{losses++;kpRln=false;}
                   default:
                       
                  if(sum==sum2){wins++;kpRln=false;}
                  if (sum2==7){losses++;kpRln=false;} 
               }
            
            }while(kpRln);
        }
    }
    //Output the results to a file
    out<<"Out of "<<games<<" played"<<endl;
    out<<"You won "<<wins<<" games and "<<endl;
    out<<"You lost "<<losses<<" games. "<<endl;
    out<<"Percentage wise "<<endl;
    out<<"You won "<<100.0f*wins/games<<"% games."<<endl;
    out<<"You lost "<<100.0f*losses/games<<"% games."<<endl;
    out<<"Your wins and losses total = "<<wins+losses<<endl;
   
    
    //Exit stage right
    out.close();
    return 0;
}

