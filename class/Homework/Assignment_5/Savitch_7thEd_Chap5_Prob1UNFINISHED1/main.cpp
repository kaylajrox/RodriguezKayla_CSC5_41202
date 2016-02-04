/* 
 * File:   main.cpp
 * Author: Kayla Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose:  Check out IDE
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void input(unsigned int,unsigned int);
void conv(unsigned int,unsigned int);
void output(unsigned int,unsigned int);
//Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize variables
    char ampm;
    unsigned int hr24;
    unsigned int min;
    char choice;
    do {
    input(hr24,min);
    conv(hr24, min);
    output(hr24, min);
        
    //Repeat program?
    cout<<"Would you like to repeat the program? "<<endl;
    cout<<"y=yes anything else to exit"<<endl;
    cin>>choice;
    }while(choice=='y');
    //Exit stage right
    return 0;
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                        Input Data                                          */
/******************************************************************************/
void input(unsigned int hr24,unsigned int min){ 
    cout<<"Conversion from 24-hour notation to 12-hour notation."<<endl;
    cout<<"What is the number of hours (24-System)? ";
    cin>>hr24;
    cout<<"What is the number of minutes? (in form 00) ";
    cin>>min;
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                       Conversion Function                                  */
/******************************************************************************/
void conv(unsigned int hr24,unsigned int min){
    if (hr24>12){
        hr24=hr24-12;
        min=min;
    }   
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                       Output Function                                      */
/******************************************************************************/
void output(unsigned int hr24,unsigned int min){
   if (hr24>=0&&hr24<12){
        cout<<hr24<<":"<<min<<endl;
        cout<<"AM"<<endl;
    }else {
        cout<<hr24<<":"<<min<<endl;
        cout<<"PM"<<endl;
    }
   
}