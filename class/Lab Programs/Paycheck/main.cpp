/*
  File:   main.cpp
  Author: Kayla Rodriguez
  Created on January 5, 2016, 10:18 AM
 Purpose: Check out IDE
 */ 
 

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
     //Declare and initialize variables
    float           payRate=1e1f;//Pay Rate in $'s/hour
    unsigned char   hrsWrkd=40; //Hours worked (hrs) 
   
     //Calculate or map inputs to outputs
    float payChk=payRate*hrsWrkd;//Pay check ($'s)
    
    //Output the results
    cout<<"Pay Rate     = $ "<<payRate<<"'s/hr"<<endl;
    cout<<"Hours Worked =   "<<static_cast<int>(hrsWrkd)<<" hrs"<<endl;
    cout<<"Pay Check    = $"<<payChk<<endl;
    
    //Exit stage right
    return 0;
}
    