/* 
 * Author: Kayla Rodriguez
 * Created on January 5, 2016, 9:20 PM
 * Purpose: Car Payments
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
    float p;  //payout
    float r;  //rate
    unsigned int n; //number of payments
    float L;   //loan
    char choice;
    do {
        //Input
        cout<<"what is your rate?";
        cin>>r;
        cout<<"what is your loan?";
        cin>>L;
        cout<<"what is the number of payments you have to make?";

        //Calculate
        p=(r*(1+r)^n)*L/((1+r)^n-1);


        //Output
        cout<<"your pay out is"<<p<<endl;       

       
        
    }while(choice=='y');   
    //Exit stage right
    return 0;
}
