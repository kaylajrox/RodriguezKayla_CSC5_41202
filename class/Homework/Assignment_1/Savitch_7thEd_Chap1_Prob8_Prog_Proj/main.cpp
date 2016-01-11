/* 
 * Author: Kayla Rodriguez
 * Created on January 10, 2016, 9:38 AM
 * Purpose: Value of Quarters, Nickels, Dimes in cents and dollars
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
const char CNVQRTR=25;   //Cents per quarter
const char CNVDIME=10;   //Cents per dime
const char CNVNIKL=5;    //Cents per nickel
const char CNVPNDL=100;//Conversion from pennies to dollars

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short nQrtrs,nNikls,nDimes;//Declare inputs, number of Q,D,N
    unsigned short total;//total
    
    //Input the number of coins 
    cout<<"How many quarters do you have? "<<endl;
    cin>>nQrtrs;
    cout<<"How many dimes do you have? "<<endl;
    cin>>nDimes;
    cout<<"How many nickels do you have? "<<endl;
    cin>>nNikls;
    
    //Calculate the total
    total=nQrtrs*CNVQRTR+nDimes*CNVDIME+nNikls*CNVNIKL;
    //Output the results
    cout<<"Number of Quarters input = "<<nQrtrs<<endl;
    cout<<"Number of Dimes    input = "<<nDimes<<endl;
    cout<<"Number of Nickels  input = "<<nNikls<<endl;
    cout<<"The amount in cents:   "<<1.0f*total<<endl;
    cout<<"This amount in dollars is: $"<<1.0f*total/CNVPNDL<<endl;
    
    //Exit stage right
    return 0;
}