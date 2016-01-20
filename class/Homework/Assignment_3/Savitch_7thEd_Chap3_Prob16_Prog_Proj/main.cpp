/* 
 * Author: Kayla Rodriguez
 * Created on January 5, 2016, 9:20 PM
 * Purpose: 
 */
 
//System Libraries
#include <iostream>
using namespace std;
 
//User Libraries
 
//Global Constant

 
//Function Prototypes
 
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int tempC=100; //temperature in Celsius 
    int tempF;//temperature in Fahrenheit
   
        //Input data
    cout<<"This program tells you at what temperature degrees Fahrenheit and "<<endl;
    cout<<"degrees Celsius are the same. "<<endl;
       
        //Output
    
    while(tempC!=tempF){
        tempC--;
        tempF=((9*tempC)/5)+32;
    }
    cout<<"Temperatures are the same at "<<tempF<<" degrees Fahrenheit and"<<endl;
    cout<<"degrees Celsius."<<endl;
    //Exit stage right
    return 0;
}