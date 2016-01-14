/* 
 * Author: Kayla Rodriguez
 * Created on January 5, 2016, 9:20 PM
 * Purpose: Workweek for an Employee
 */
 
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
 
//User Libraries
 
//Global Constant
const char CNVPERC=100;//Conversion to percentage
 
//Function Prototypes
 
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float sSocTax=.06f;    //withheld social security tax
    float fedInTax=.14f;   //federal income tax
    float stInTax=.05f;    //state income tax
    unsigned int nHrs;     //Number of hours worked per week
    unsigned int nDep;     //Number of dependents 
    float taxTl;           //amount of total taxes being applied
    float totPayN;         //total net pay
    float totPayG;         //total gross pay
    float HRPAY=16.78f;    //Pay per hour
    float amtTook;         //amount of money taken out from taxes
    float aTookSS;         //amount taken from paycheck by social security
    float aTookFT;         //amount taken from paycheck by federal income tax
    float aTookST;         //amount taken from paycheck by state income tax
    char choice;
    do {
        //Input
        cout<<"What is the amount of hours you worked this week? ";
        cin>>nHrs;
        cout<<"How many dependents do you claim? ";
        cin>>nDep;

        //Calculate
        totPayG=nHrs*HRPAY;
        taxTl=sSocTax+fedInTax+stInTax;
        amtTook=taxTl*totPayG;
        totPayN=totPayG-amtTook-10;
        aTookSS=totPayG*sSocTax;
        aTookFT=totPayG*fedInTax;
        aTookST=totPayG*stInTax;


        //Output
        cout<<fixed<<setprecision(2);
        cout<<"Your Gross pay is "<<"$"<<totPayG<<endl;
        cout<<"The amount of total taxes in place: "<<taxTl*CNVPERC<<" %"<<endl;
        cout<<"The amount of money from paycheck by total taxes in place is "<<"$"<<amtTook<<endl;
        cout<<"The amount of money from paycheck used for social security is "<<"$"<<aTookSS<<endl;
        cout<<"The amount of money from paycheck used for federal income tax is "<<"$"<<aTookFT<<endl;
        cout<<"The amount of money from paycheck used for state income tax is "<<"$"<<aTookST<<endl;
        if (nDep >= 3)
        {
            cout<<"Your net pay is "<<"$"<<totPayN-35<<endl;       
        }    
        else
        {    
            cout<<"Your net pay is "<<"$"<<totPayN<<endl;
        }
        cout<<"Would you like to repeat the program? "<<endl;
        cout<<"y=yes anything else to exit"<<endl;
        cin>>choice;
        
    }while(choice=='y');   
    //Exit stage right
    return 0;
}