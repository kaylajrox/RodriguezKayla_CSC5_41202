/* 
 * Author: Kayla Rodriguez
 * Created on January 6, 2016, 9:38 AM
 * Purpose: How many Does it Take
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
const char wtBill=1;//Weight in grams
const float cnvLbs=1.0f/453.5f;//Conversion from grams to lbs

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned int amtStl;     //Amount to steal
    unsigned short denom;    //Bill denomination
    unsigned char wtPers=80; //Weight person can carry
    unsigned char nPerps;    //Number of perpetrators
    
    //Input the number of coins 
    cout<<"How much money would you like to acquire?"<<endl;
    cin>>amtStl;
    cout<<"What is the bill denomination desired?"<<endl;
    cin>>denom;
    
    //Calculate the total
    nPerps=cnvLbs*amtStl*wtBill/denom/wtPers+1;
    //Output the results
    cout<<"Amount Desire = $"<<amtStl<<endl;
    cout<<"Denomination Desired = $"<<denom<<endl;
    cout<<"Number of Individuals required on the job = "
            <<static_cast<int>(nPerps)<<endl;
    
    //Exit stage right
    return 0;
}
