/* 
 * Author: Kayla Rodriguez
 * Created on January 9, 2016, 1:55 PM
 * Purpose: Simple Calculations: Addition and Multiplication
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
    short intgr1;    //first integer
    short intgr2;    //second integer
    int total1;      //integers multiplied
    int total2;     //integers added
    
    
         
   //Input  
    cout<<"Enter an integer number: "<<endl;
    cin>>intgr1;
    cout<<"Enter another integer number: "<<endl;
    cin>>intgr2;
    
    //Calculate the total
    total1=intgr1*intgr2;
    total2=intgr1+intgr2;        
    
   
    
    //Output the results
    cout<<"Multiplication of Integers:";
    cout<<total1<<endl;
    cout<<"Addition of Integers:";
    cout<<total2<<endl;
            
    
    //Exit stage right
    return 0;
}


