/* 
    File:   main.cpp
    Author: Kayla Rodriguez
    Created on January 20, 2016, 10:35 AM
    Purpose: Ocean Levels
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
cout<<endl<<"Solution to Gaddis 8thEd Chap5 Prob12"<<endl;
cout<<endl<<"Display Ocean Level Rising Table"<<endl<<endl;

//Declare variables
unsigned int year;
float INCRMNT=1.5;
float mmrise;

//Set Precision
cout<<fixed<<setprecision(2)<<showpoint;
//Loop to generate the degree Celsius and output the table
cout<<"Year\tNumber of Millimeters Risen "<<endl;

for(int year=0;year<=25;year+=INCRMNT)
    {
    //Calculate
    float mmrise=year*1.5f;
    
    //Display
    cout<<year<<"\t"<<mmrise<<endl;
    }
return 0;
}
