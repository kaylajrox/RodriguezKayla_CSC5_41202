
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
    float speed;
    float distnce;
    unsigned int hrs;
    unsigned int hrs2;
    
    //Input
    cout<<"What is the speed of the vehicle in miles per hour? ";
    cin>>speed;   
    cout<<"How many hours has it traveled? ";
    cin>>hrs2;
    
    //Loop to generate distance for each hour
    cout<<"Hour\tDistance Traveled"<<endl;
    cout<<"------------------------"<<endl;
    for(int hrs=1;hrs<=hrs2;hrs++)
        {
        //Calculate
        float distnce=speed*hrs;

        //Display
        cout<<hrs<<"\t"<<distnce<<endl;
        } 
    //Exit stage right
    return 0;
}