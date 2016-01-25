  
/* 
    File:   main.cpp
    Author: Kayla Rodriguez
    Created on January 20, 2016, 10:35 AM
    Purpose:  deep fried twinkies
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
    cout<<endl<<"Solution to Savitch 8thEd Chap4 Prob15"<<endl;
    cout<<endl<<"Deep-Fried Twinkies "<<endl<<endl;
    
    //Declare variables
    float coin; //money denominations
    float coin1; //money denominations
    float total; //money denominations
    //float coin1; //money denominations
    //Introduction
    cout<<"It costs $3.50 to buy a deep fried twinkie. "<<endl;
    //Input
    cout<<fixed<<setprecision(2);
    cout<<"Please enter coins/ dollars into the machine. "<<endl;
    cin>>coin;
    if (!(coin==5.00||coin==1.00||coin==0.50||coin==0.25||coin==0.10||coin==0.05)){
       cout<<"Not a valid money input. Please insert something else. "<<endl;
    }else if (coin>3.50f){
        cout<<"Enjoy your deep fried twinkie! ";
        cout<<"Your change is $"<<(5.00f-3.50f)<<endl;
    }
    else{
       do{
           cout<<"Please enter another coin/dollar. "<<endl;
           cin>>coin1;
           total=coin1+coin;
       } while (!((coin1+coin)==3.50));
    }       
    
    return 0;
}