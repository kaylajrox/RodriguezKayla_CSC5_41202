
/* 
    File:   main.cpp
    Author: Kayla Rodriguez
    Created on January 20, 2016, 10:35 AM
    Purpose:  Distance Traveled
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //Formatting
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) 
{
    //The problem to solve
    cout<<endl<<"Solution to Gaddis 8thEd Chap5 Prob6"<<endl;
    cout<<endl<<"Distance Traveled"<<endl<<endl;
    
    //Declare variables
    unsigned int speed;
    unsigned int distnce;
    unsigned int hrs;
    unsigned char  hrs1=0,hrs2=100,d1=distnce,d2=212;//Data pts of freezing and boiling
    
    //Input
    cout<<"What is the speed of the vehicle in miles per hour? ";
    cin>>speed;   
    cout<<"How many hours has it traveled? ";
    cin>>hrs2;
    
    //Calculation 
    
    
    //Loop to generate the population for each new day
    cout<<"Hour   Distance Traveled"<<endl;
    cout<<"------------------------"<<endl;
    for(int hrs1=1;hrs1<=hrs2;hrs++)
    {
        hrs<<=1;//Bit shift right by 1 bit
        distnce+=hrs;
       
    }    
    //Exit stage right
    return 0;
}