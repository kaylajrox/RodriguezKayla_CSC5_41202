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
cout<<endl<<"Solution to Savitch 7thEd Chap3 Prob13"<<endl;
cout<<endl<<"The Monty Hall Game Show Problem   "<<endl<<endl;

//Set the random number seed
srand(static_cast<unsigned int>(time(0)));

//Declare and initialize variables
char pick1;
char pick2;      //Pick of the user if the user decides to switch 
string color1; 
string color2;
string color3;
string color4;//Initial pick of the user
char choice;     //choice of user to switch response
char pick3;
char pick4;//pick1=pick3 if user stays with answers
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
    cout<<"To choose your colors, red= r, green=g, blue=bl, brown=br, black=bk,";
    cout<<endl<<"yellow=y, orange=o, and white = w. Pick your first color ";
    cout<<"and press enter"<<endl;
    cin>>color1;
    do{
        cout<<"Which spot do you want the color in? 1,2,3, or 4? ";
        cin>>spot1;
    }while (!(spot1==1||spot1==2||spot1==3||spot1==4));
    cout<<"Pick your second color ";
    cin>>color2;
     do{
        cout<<"Which spot do you want the color in? 1,2,3, or 4? ";
        cin>>spot2;
    }while (!(spot2==1||spot2==2||spot2==3||spot2==4));
    cout<<"Pick your third color ";
    cin>>color3;
     do{
        cout<<"Which spot do you want the color in? 1,2,3, or 4? ";
        cin>>spot3;
    }while (!(spot3==1||spot3==2||spot3==3||spot3==4));
    cout<<"Pick your fourth color ";
    cin>>color4;
     do{
        cout<<"Which spot do you want the color in? 1,2,3, or 4? ";
        cin>>spot4;
    }while (!(spot4==1||spot4==2||spot4==3||spot4==4));
    for (int i=0;i<color1.size();i++){
        color1[i]=toupper(color1[i]);
    }
}while(!(color1=="R"||color1=="G"||color1=="Bl"||
        color1=="Br"||color1=="Bk"||color1=="Y"||color1=="O"||color1=="W"));

//Computer generates its own random pick

//User plays until they can guess the computer's pick
//Exit stage right
out.close();
return 0;
}