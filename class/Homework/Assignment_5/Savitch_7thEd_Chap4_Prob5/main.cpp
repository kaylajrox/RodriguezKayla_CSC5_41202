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
const char CNVPERC=100;
//Function prototypes
void infrate(float,float);
void infratP(float, float);
//Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize variables
    float pitemO;
    float pitemN;
    char choice;
    do {
        //Input data
        cout<<"What is the price of your item one year ago? ";
        cin>>pitemO;
        cout<<"What is the price of your item currently?  ";
        cin>>pitemN;

        //Output the results
        cout<<fixed<<setprecision(2);
        infrate(pitemO,pitemN);
        infratP(pitemO,pitemN);
  
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
/*                        Inflation Rate Calculation Function                 */
/******************************************************************************/
void infrate(float pitemO, float pitemN){ 
    float infrate=((pitemN-pitemO)/pitemO)*CNVPERC;
    cout<<"The estimated inflation rate is "<<infrate<<"%"<<endl;
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                   Inflation Rate Calculation Prediction Function           */
/******************************************************************************/
void infratP(float pitemO, float pitemN){ 
    float pricN=((pitemN-pitemO)/pitemO)*pitemN+pitemN;
    cout<<"The estimated price one year from now is "<<pricN<<endl;
}