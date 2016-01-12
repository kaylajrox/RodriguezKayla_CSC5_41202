/* 
 * Author: Kayla Rodriguez
 * Created on January 5, 2016, 9:20 PM
 * Purpose: Jackpot
 */
 
//System Libraries
#include <iostream>
using namespace std;
 
//User Libraries
 
//Global Constant
const char CNVPERC=100;//Conversion to percentage
 
//Function Prototypes
 
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float lumpSum=.62f;    //lump sum
    float aftrTax=.52f;    //after taxes
    float mrried=.50f;    //marriage penality
    float jackPot;        //check this value 1.4e9
    
    
    //Input
    cout<<"What is the Jackpot amount? ";
    cin>>jackPot;
    
    
    //Calculate
    float taxTtl=lumpSum*aftrTax*mrried;
    float total=jackPot*taxTtl;
    
    //Output
    cout<<"The amount of total taxes in place: "<<taxTtl<<endl;
    cout<<"The total amount of money you will receive is: $ "<<total<<endl;
 
 
    //Exit stage right
    return 0;
}