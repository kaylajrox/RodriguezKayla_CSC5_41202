/* 
 * Author: Kayla Rodriguez
 * Created on January 5, 2016, 9:20 PM
 * Purpose: 
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
    /*unsigned int jan;
    unsigned int feb;
    unsigned int mar;
    unsigned int apr;
    unsigned int may;
    unsigned int jun;
    unsigned int jul;
    unsigned int aug;
    unsigned int sep;
    unsigned int oct;
    unsigned int nov;
    unsigned int dec;*/
    unsigned int nMon; //Number of months
    unsigned short nDays; //Number of days
    
    char choice;
    do {
        //Input data
        cout<<"Please type in your birthday "<<endl;
        cout<<"Type in the number of months first:"<<endl;
        cin>>nMon;
        cout<<"Now type in the number of days:"<<endl;
        cin>>nDays;

        //Calculate
        

        //Output
        cout<<"Your birthday:"<<nMon<<"/"<<nDays<<endl;
        
        
        cout<<"Would you like to repeat the program? "<<endl;
        cout<<"y=yes anything else to exit"<<endl;
        cin>>choice;
    }while(choice=='y');
    

    
    
    //Exit stage right
    return 0;
}