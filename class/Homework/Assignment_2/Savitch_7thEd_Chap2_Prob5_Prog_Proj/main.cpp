/* 
 * Author: Kayla Rodriguez
 * Created on January 13, 2016, 5:51 PM
 * Purpose: Interest Rates
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
 
//Global Constant
const char CNVPERC=100; //conversion from percentage
//Function Prototypes
 
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned int nMon; //Number of months the loan lasts for
    float amtRec; //amount needed from the loan
    float intRate;//interest rate
    float fceVle; //face value needed
    float monPay; //monthly payment
    float aTook; //amount interest rate takes from loan
    char choice;
    do {
    //Input data
    cout<<"What amount do you need to receive? ";
    cin>>amtRec;
    cout<<"What is the interest rate percentage? ";
    cin>>intRate;
    cout<<"What is the duration of the loan in months? ";
    cin>>nMon;
    
    //Calculate or map inputs to outputs
    fceVle=amtRec/(1-(intRate*nMon/CNVPERC/12));
    monPay=fceVle/nMon;
    
   
   
            
    //Output the results
    cout<<fixed<<setprecision(2)<<endl;
    cout<<"The face value required in order to receive this amount is ";
    cout<<fceVle;
    cout<<fixed<<setprecision(2)<<endl;
    cout<<"Your monthly payment is $";
    cout<<monPay<<endl;
    
  
     cout<<"\nWould you like to repeat the program? "<<endl;
        cout<<"y=yes anything else to exit"<<endl;
        cin>>choice;
    }while(choice=='y');
    
    
    //Exit stage right

    return 0;
}

