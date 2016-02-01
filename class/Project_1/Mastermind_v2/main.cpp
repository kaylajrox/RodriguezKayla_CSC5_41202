/* Author: Kayla Rodriguez
 * Created on January 20, 2016, 8:55 PM
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

 
//Function Prototypes
 
//Execution Begins Here
int main(int argc, char** argv) {
//The Problem to solve
cout<<endl<<"Solution to Projec 1"<<endl;
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
char pick4;  //
unsigned int spot1;
unsigned int spot2;
unsigned int spot3;
unsigned int spot4;
ofstream out;
//Open the File
out.open("Mastermind.dat");

//Introduction to Game
cout<<"Welcome to a game of Mastermind!"<<endl<<endl;
cout<<"Please pick four colors and press enter to continue."<<endl;
//Input
cout<<"The available colors are red, green, blue, yellow, brown, orange,";
cout<<" black, and white."<<endl;
do{
    cout<<"To choose your colors, red= r, green=g, blue=b, brown=n, black=k,";
    cout<<endl<<"yellow=y, orange=o, and white = w."<<endl;
    cout<<"Pick your first color ";      
    cout<<"and press enter"<<endl;
    cin>>color1;
    do{
        cout<<"Which spot do you want the color in? 1,2,3, or 4? ";
        cin>>spot1;
    }while (!(spot1==1||spot1==2||spot1==3||spot1==4));
    color1=toupper(color1);
}while(!(color1=='R'||color1=='G'||color1=='B'||
        color1=='N'||color1=='K'||color1=='Y'||color1=='O'||color1=='W'));  
do{
    cout<<"Pick your second color ";
    cin>>color2;
     do{
        cout<<"Which spot do you want the color in? 1,2,3, or 4? ";
        cin>>spot2;
    }while (!(spot2==1||spot2==2||spot2==3||spot2==4));
}while(!(color1=='R'||color1=='G'||color1=='B'||
        color1=='N'||color1=='K'||color1=='Y'||color1=='O'||color1=='W'));
do{
    cout<<"Pick your third color ";
    cin>>color3;
     do{
        cout<<"Which spot do you want the color in? 1,2,3, or 4? ";
        cin>>spot3;
    }while (!(spot3==1||spot3==2||spot3==3||spot3==4));
}while(!(color1=='R'||color1=='G'||color1=='B'||
        color1=='N'||color1=='K'||color1=='Y'||color1=='O'||color1=='W'));
do{
    cout<<"Pick your fourth color ";
    cin>>color4;
     do{
        cout<<"Which spot do you want the color in? 1,2,3, or 4? ";
        cin>>spot4;
    }while (!(spot4==1||spot4==2||spot4==3||spot4==4));
}while(!(color1=='R'||color1=='G'||color1=='B'||
        color1=='N'||color1=='K'||color1=='Y'||color1=='O'||color1=='W'));
//Computer generates its own random pick
do{
       pick1=rand()%8+66;     
    }while(pick1=='C'||pick1=='D'||pick1=='E'||pick1=='F'
            ||pick1=='H'||pick1=='I'||pick1=='J'||pick1=='L'||pick1=='M'||
            pick1=='P'||pick1=='Q');
do{
   pick2=rand()%8+66;     
}while(pick2=='C'||pick2=='D'||pick2=='E'||pick2=='F'
        ||pick2=='H'||pick2=='I'||pick2=='J'||pick2=='L'||pick2=='M'||
        pick2=='P'||pick2=='Q');
do{
   pick3=rand()%8+66;     
}while(pick3=='C'||pick3=='D'||pick3=='E'||pick3=='F'
        ||pick3=='H'||pick3='I'||pick3=='J'||pick3=='L'||pick3=='M'||
        pick3=='P'||pick3=='Q');
do{
   pick4=rand()%8+66;     
}while(pick4=='C'||pick4=='D'||pick4=='E'||pick4=='F'
        ||pick4=='H'||pick4=='I'||pick4=='J'||pick4=='L'||pick4=='M'||
        pick4=='P'||pick4=='Q');
//User plays until they can guess the computer's pick
if (color1==pick1){
    cout<<"You have guessed a right ball, but it is not in the right spot.";
    cout<<" Keep guessing."<<endl;
}else if (color2==pick2){
    cout<<"You have guessed a right ball, but it is not in the right spot.";
    cout<<" Keep guessing."<<endl;
}else if (color3==pick3){
    cout<<"You have guessed a right ball, but it is not in the right spot.";
    cout<<" Keep guessing."<<endl;
}else if (color4==pick4){
    cout<<"You have guessed a right ball, but it is not in the right spot.";
    cout<<" Keep guessing."<<endl;
}else{
    cout<<"WRONG."<<endl;
}
//Exit stage right
out.close();
return 0;
}