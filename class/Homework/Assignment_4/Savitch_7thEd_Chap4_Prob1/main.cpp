
/* 
    File:   main.cpp
    Author: Kayla Rodriguez
    Created on January 20, 2016, 10:35 AM
    Purpose:  Gasoline Liters
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //Formatting
using namespace std;

//User Libraries

//Global Constants
float L=0.264179f; //conversion from liters to gallons
//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) 
{
    //The problem to solve
    cout<<endl<<"Solution to Gaddis 8thEd Chap5 Prob1"<<endl;
    cout<<endl<<"Gasoline Liters"<<endl<<endl;
    
    //Declare variables
    float nLit; //number of liters
    float nMiles;//number of miles traveled
    char choice;
    do 
    {
        //Input
        cout<<"What is the number of liters of gasoline consumed by your car? ";
        cin>>nLit;
        cout<<"What is the number of miles traveled by your car? ";
        cin>>nMiles;
        //Output
        cout<<"The number of miles per liter is ";
        cout<<(nMiles/nLit)<<endl;
        cout<<"and the number of miles per gallon is ";
        nLit=.264179;
        cout<<(nMiles/L)<<endl;
        
        //Repeat?
        cout<<"Would you like to repeat the program? "<<endl;
        cout<<"y=yes anything else to exit"<<endl;
        cin>>choice;
    }while(choice=='y');
    return 0;
}