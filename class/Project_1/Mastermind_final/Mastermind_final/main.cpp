/* Author: Kayla Rodriguez
 * Created on January 30, 2016, 8:55 PM
 * Purpose: Mastermind
 */
 
//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream> //File I/O
#include <iomanip> //Formatting
using namespace std;
 
//User Libraries
 
//Global Constant
const char CNVPERC=100;
//Function Prototypes
 
//Execution Begins Here
int main(int argc, char** argv) {
//The Problem to solve
cout<<endl<<"Solution to Project 1"<<endl;
cout<<endl<<"Mastermind Problem "<<endl<<endl;

//Set the random number seed
srand(static_cast<unsigned int>(time(0)));

//Declare and initialize variables
char pick1;
char pick2;     
char color1; 
char color2;
char color3;
char color4;     
char pick3;
char pick4; 
int nTrys=0;
char hint; 
int limit;
const char GMELMT=10;
bool hintR=true; //exit hint when false
ofstream out;
//Open the File
out.open("Mastermind.dat");

//Introduction to Game
cout<<"Welcome to a game of Mastermind!"<<endl<<endl;
cout<<"Please pick four colors and press enter to continue."<<endl;
cout<<"The available colors are red, green, blue, yellow, brown, orange,";
cout<<" black, and white."<<endl;
cout<<"Keep in mind that order matters and you must guess not only the ";
cout<<"colors the computer"<<endl<<"picked, but the order as well";
cout<<"(referred to as color spots). The computer will not"<<endl;
cout<<"pick any color more than once."<<endl;
cout<<"If you can guess in 10 tries or less, you win."<<endl;
cout<<"To choose your colors, red= r, green=g, blue=b, brown=n, black=k,";
cout<<endl<<"yellow=y, orange=o, and white = w."<<endl;
//Computer Generated Pick of Colors User Tries to Guess
do{
    pick1=rand()%24+66;     
}while(pick1=='C'||pick1=='D'||pick1=='E'||pick1=='F'
            ||pick1=='H'||pick1=='I'||pick1=='J'||pick1=='L'||pick1=='M'||
            pick1=='P'||pick1=='Q'||pick1=='S'||pick1=='T'||
            pick1=='U'||pick1=='V'||pick1=='X');
do{
   pick2=rand()%24+66;     
}while(pick2=='C'||pick2=='D'||pick2=='E'||pick2=='F'
        ||pick2=='H'||pick2=='I'||pick2=='J'||pick2=='L'||pick2=='M'||
        pick2=='P'||pick2=='Q'||pick2=='S'||pick2=='T'||
        pick2=='U'||pick2=='V'||pick2=='X'||pick2==pick1);
do{
   pick3=rand()%24+66;     
}while(pick3=='C'||pick3=='D'||pick3=='E'||pick3=='F'
        ||pick3=='H'||pick3=='I'||pick3=='J'||pick3=='L'||pick3=='M'||
        pick3=='P'||pick3=='Q'||pick3=='S'||pick3=='T'||
        pick3=='U'||pick3=='V'||pick3=='X'||pick3==pick2||pick3==pick1);
do{
   pick4=rand()%24+66;     
}while(pick4=='C'||pick4=='D'||pick4=='E'||pick4=='F'
        ||pick4=='H'||pick4=='I'||pick4=='J'||pick4=='L'||pick4=='M'||
        pick4=='P'||pick4=='Q'||pick4=='S'||pick4=='T'||
        pick4=='U'||pick4=='V'||pick4=='X'||pick4==pick3||pick4==pick2||
        pick4==pick1);
//User Inputs
cout<<"What is the max amount of attempts you would like to play?"<<endl;
cin>>limit;
//Modify the limit of games based on how many it takes to win
limit=limit>GMELMT?limit:GMELMT;//Ternary Operator


for (int n=1;n<=limit;n++){
        do{
            cout<<"Pick your first color ";      
            cin>>color1;
            color1=toupper(color1);
        }while(!(color1=='R'||color1=='G'||color1=='B'||
                color1=='N'||color1=='K'||color1=='Y'||color1=='O'
                ||color1=='W'));  
        do{
            cout<<"Pick your second color ";
            cin>>color2;
            color2=toupper(color2);
        }while(!(color2=='R'||color2=='G'||color2=='B'||
                color2=='N'||color2=='K'||color2=='Y'||color2=='O'
                ||color2=='W'));
        do{
            cout<<"Pick your third color ";
            cin>>color3;
            color3=toupper(color3);
        }while(!(color3=='R'||color3=='G'||color3=='B'||
                color3=='N'||color3=='K'||color3=='Y'||color3=='O'
                ||color3=='W'));
        do{
            cout<<"Pick your fourth color ";
            cin>>color4;
            color4=toupper(color4);
        }while(!(color4=='R'||color4=='G'||color4=='B'||
                color4=='N'||color4=='K'||color4=='Y'||color4=='O'
                ||color4=='W'));
        //Switch Statement to present hints
        do{
            cout<<"Do you want some hints?"<<endl;
            cout<<"Type 1 to display how many colors are correct and in the ";
            cout<<"right spot."<<endl;
            cout<<"Type anything else if you would like no hints "<<endl;
            cin>>hint;
            switch (hint){
                case 49:{
                    //One of your color choices is correct
                    if (color1==pick2||color1==pick3||color1==pick4){
                        cout<<"One of your colors is correct; ";
                        cout<<"however, it is not in the right spot."<<endl;
                        cout<<"Change the order of which you ";
                        cout<<"input this color to get it in the right spot.";
                        cout<<endl<<endl;
                    }else if (color2==pick1||color2==pick3||color2==pick4){
                        cout<<"One of your colors is correct; ";
                        cout<<"however, it is not in the right spot."<<endl;
                        cout<<"Change the order of which you ";
                        cout<<"input this color to get it in the right spot.";
                        cout<<endl<<endl;
                    }else if (color3==pick2||color3==pick1||color3==pick4){
                        cout<<"One of your colors is correct; "; 
                        cout<<"however, it is not in the right spot."<<endl; 
                        cout<<"Change the order of which you ";
                        cout<<"input this color to get it in the right spot.";
                        cout<<endl<<endl;
                    }else if (color4==pick2||color4==pick3||color4==pick1){
                        cout<<"One of your colors is correct; ";
                        cout<<"however, it is not in the right spot.";
                        cout<<"Change the order of which you ";
                        cout<<"input this color to get it in the right spot.";
                        cout<<endl<<endl;
                    //Two of your color choices are correct
                    }else if ((color1==pick2||color1==pick3||color1==pick4)
                            &&(color2==pick3||color2==pick4||color2==pick1)){
                        cout<<"Two of your colors are correct; ";
                        cout<<"however, neither are in the right spot.";
                        cout<<"Change the order of which you ";
                        cout<<"input this color to get it in the right spot.";
                        cout<<endl<<endl;
                    }else if ((color1==pick2||color1==pick3||color1==pick4)
                            &&(color3==pick2||color3==pick4||color3==pick1)){
                        cout<<"Two of your colors are correct; ";
                        cout<<"however, neither are in the right spot.";
                        cout<<"Change the order of which you ";
                        cout<<"input this color to get it in the right spot.";
                        cout<<endl<<endl;
                    }else if ((color1==pick2||color1==pick3||color1==pick4)
                            &&(color4==pick3||color4==pick2||color4==pick1)){
                        cout<<"Two of your colors are correct; ";
                        cout<<"however, neither are in the right spot.";
                        cout<<"Change the order of which you ";
                        cout<<"input this color to get it in the right spot.";
                        cout<<endl<<endl;
                    }else if ((color4==pick2||color4==pick3||color4==pick1)
                            &&(color2==pick3||color2==pick4||color2==pick1)){
                        cout<<"Two of your colors are correct; ";
                        cout<<"however, neither are in the right spot.";
                        cout<<"Change the order of which you ";
                        cout<<"input this color to get it in the right spot.";
                        cout<<endl<<endl;
                    }else if ((color3==pick2||color3==pick1||color3==pick4)
                            &&(color2==pick3||color2==pick4||color2==pick1)){
                        cout<<"Two of your colors are correct; ";
                        cout<<"however, neither are in the right spot.";
                        cout<<"Change the order of which you ";
                        cout<<"input this color to get it in the right spot.";
                        cout<<endl<<endl;
                    }else if ((color4==pick2||color4==pick3||color4==pick1)
                            &&(color3==pick2||color3==pick4||color3==pick1)){
                        cout<<"Two of your colors are correct; ";
                        cout<<"however, neither are in the right spot.";
                        cout<<"Change the order of which you ";
                        cout<<"input this color to get it in the right spot.";
                        cout<<endl<<endl;
                    //Three of your color choices are correct
                    }else if ((color1==pick2||color1==pick3||color1==pick4)
                            &&(color2==pick3||color2==pick4||color2==pick1)
                             &&(color3==pick2||color3==pick4||color3==pick1)){
                        cout<<"Three of your colors are correct; ";
                        cout<<"however, none are not in the right spot.";
                        cout<<"Change the order of which you ";
                        cout<<"input this color to get it in the right spot.";
                        cout<<endl<<endl;
                    }else if ((color1==pick2||color1==pick3||color1==pick4)
                            &&(color2==pick3||color2==pick4||color2==pick1)
                             &&(color4==pick2||color4==pick3||color4==pick1)){
                        cout<<"Three of your colors are correct; ";
                        cout<<"however, none are not in the right spot.";
                        cout<<"Change the order of which you ";
                        cout<<"input this color to get it in the right spot.";
                        cout<<endl<<endl;
                    }else if ((color4==pick2||color4==pick3||color4==pick1)
                            &&(color2==pick3||color2==pick4||color2==pick1)
                             &&(color3==pick2||color3==pick4||color3==pick1)){
                        cout<<"Three of your colors are correct; ";
                        cout<<"however, none are not in the right spot.";
                        cout<<"Change the order of which you ";
                        cout<<"input this color to get it in the right spot.";
                        cout<<endl<<endl;
                    }else if ((color1==pick2||color1==pick3||color1==pick4)
                            &&(color4==pick3||color4==pick2||color4==pick1)
                             &&(color3==pick2||color3==pick4||color3==pick1)){
                        cout<<"Three of your colors are correct; ";
                        cout<<"however, none are not in the right spot.";
                        cout<<"Change the order of which you ";
                        cout<<"input this color to get it in the right spot.";
                        cout<<endl<<endl;
                    }                    
                    //One in the correct spot
                    else if ((color1==pick1)||(color2==pick2)||(color3==pick3)||
                            (color4==pick4)){
                        cout<<"One of your colors is correct and in the correct spot.";
                        cout<<endl<<endl;
                    //Two in the correct spot
                    }else if((color1==pick1)&&(color2==pick2)){
                        cout<<"Two of your colors are correct and in the correct spot.";
                        cout<<endl<<endl;
                    }else if((color1==pick1)&&(color3==pick3)){
                        cout<<"Two of your colors are correct and in the correct spot.";
                        cout<<endl<<endl;
                    }else if((color1==pick1)&&(color4==pick4)){
                        cout<<"Two of your colors are correct and in the correct spot.";
                        cout<<endl<<endl;
                    }else if((color3==pick3)&&(color2==pick2)){
                        cout<<"Two of your colors are correct and in the correct spot.";
                        cout<<endl<<endl;
                    }else if((color4==pick4)&&(color2==pick2)){
                        cout<<"Two of your colors are correct and in the correct spot.";
                        cout<<endl<<endl;
                    }else if((color3==pick3)&&(color4==pick4)){
                        cout<<"Two of your colors are correct and in the correct spot.";
                        cout<<endl<<endl;
                    //Three in the correct spot
                    }else if((color1==pick1)&&(color2==pick2)&&(color3==pick3)){
                        cout<<"Three of your colors are correct and in the right spot.";
                        cout<<endl<<endl;
                    }else if((color1==pick1)&&(color2==pick2)&&(color4==pick4)){
                        cout<<"Three of your colors are correct and in the right spot.";
                        cout<<endl<<endl;
                    }else if((color4==pick4)&&(color2==pick2)&&(color3==pick3)){
                        cout<<"Three of your colors are correct and in the right spot.";
                        cout<<endl<<endl;
                    }else if((color1==pick1)&&(color4==pick4)&&(color3==pick3)){
                        cout<<"Three of your colors are correct and in the right spot.";
                        cout<<endl<<endl;
                    }else{
                        cout<<"None of these color choices are correct or in the right spot."<<endl; 
                        cout<<"Try something different."<<endl<<endl;
                    }
                  break;  
                }
              
                default:{     
                    cout<<"No hint will be given"<<endl<<endl;
                    hintR=false;
                }
            }
        }while(hintR);

        //Representation of User's Original Choices
        cout<<"Your colors are "<<color1<<" "<<color2<<" "<<color3<<" ";
        cout<<color4<<endl;
        //Loop to generate the table of choices
        nTrys++;
        int nChoice=0;
        cout<<"Number of Tries so far"<<endl;
        cout<<"----------------------------"<<endl;
        while(nChoice<=nTrys-1){
            nChoice++;
            cout<<nChoice<<endl;
        } 
    if((nTrys<GMELMT)&&(color1==pick1)&&(color2==pick2)&&(color3==pick3)&&
            (color4==pick4)){
        limit=nTrys;
    }
}
//Reveals Computer's Choice Once User Guesses
    cout<<"The computers colors are "<<pick1<<" "<<pick2<<" "<<pick3<<" ";
    cout<<pick4<<endl;
    cout<<"Your colors are "<<color1<<" "<<color2<<" "<<color3<<" ";
    cout<<color4<<endl;
    cout<<"Your total number of tries is "<<nTrys<<endl;
    if(nTrys<GMELMT&&color1==pick1&&color2==pick2&&color3==pick3&&color4==pick4){
        //Tries Percentage if won
        cout<<fixed<<setprecision(1);
        cout<<"You win!"<<endl;
        cout<<"The percentage of the board you got through is ";
        cout<<(float)(nTrys)/(10.0f)*CNVPERC<<"% "<<endl;
    }else{
        cout<<"You lose. You could not guess below 10 tries."<<endl;
    }

//Exit stage right
out.close();
return 0;
}
