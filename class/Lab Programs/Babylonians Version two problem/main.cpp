/* 
 * File:   main.cpp
 * Author: Kayla Rodriguez
 * Purpose: Babylonians 
 * Version 2
 * Created on January 13, 2016, 10:09 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare and initialize variables
    float qwntity=0.25f;//A value to add repeatedly
    float sum=0; //The result of a repetitive addition
    int nLoops=10000000;//Number of times to loop
    float answer;
    
    //Input data
    for(int i=1;i<=nLoops;i++){
        sum+=qwntity;
    }
    //Calculate or map the inputs and outputs
    answer=nLoops*qwntity;
  
    //Output the Results
   cout<<"The product answer = "<<answer<<endl;
   cout<<"the sum answer = "<<sum<<endl;
   cout<<"the percent error = "<<(answer-sum)/answer*100<<"%"<<endl;
   
    //Exit Stage right
    return 0;
    
}