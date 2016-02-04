/* 
    File:   main.cpp
    Author: Kayla Rodriguez
    Created on February 3, 2016, 8:35 PM
    Purpose:  Menu
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void input(unsigned int&,unsigned int&,string&);
unsigned int conv(unsigned int);
void output(unsigned int,unsigned int,string);
int main(int argc, char** argv) {
cout<<endl<<"Solution to Savitch 7thEd Chap5 Prob1"<<endl;
    cout<<endl<<"24 Hour clock"<<endl<<endl;
    //Declare and initialize variables
    unsigned int hr24;
    unsigned int min;
    unsigned int hr;
    string ampm;
    char choice;
    do {
        input(hr24,min,ampm);
        hr24=conv(hr24);
        output(hr24, min,ampm);

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
void input(unsigned int &hr24,unsigned int &min, string &ampm){ 
    cout<<"Conversion from 24-hour notation to 12-hour notation."<<endl;
    cout<<"What is the number of hours (24-System)? ";
    cin>>hr24;
    cout<<"What is the number of minutes? ";
    cin>>min;
    do {
        cout<<"Is it AM or PM? Type am or pm.";
        cin>>ampm;
        for (int i=0;i<ampm.size();i++){
            ampm[i]=toupper(ampm[i]);
        }
    }while (!(ampm=="AM"||ampm=="PM"));
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                       Conversion Function                                  */
/******************************************************************************/
unsigned int conv(unsigned int hr24){
    if (hr24>12){
        hr24=hr24-12;
    }else if (hr24==0){
        hr24=hr24+12;
    }
    return hr24;
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                       Output Function                                      */
/******************************************************************************/
void output(unsigned int hr24,unsigned int min,string ampm){
    if(hr24==12){
        cout<<hr24<<":";
        if (min>=10){
            cout<<min;
        }else {
            cout<<"0"<<min;
        } 
    }
    else if(hr24<12) {
        cout<<hr24<<":";
        if (min>=10){
            cout<<min;
        }else {
            cout<<"0"<<min;
        }
    }
    cout<<" "<<ampm<<endl;
}