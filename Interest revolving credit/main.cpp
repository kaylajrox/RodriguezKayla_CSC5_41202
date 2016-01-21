/* 
 * Author: Kayla Rodriguez
 * Created on January 5, 2016, 9:20 PM
 * Purpose: Interest and Revolving Credit Accounts
 */
 
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
 
//User Libraries
 
//Global Constant
const char CNVPERC=100;
 
//Function Prototypes
 
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float accBal;
    float payI;  //interest rate on first 1000
    float payII; //interest rate after 1000
    float perc10;//minimum payment calculation for between 10 and 1000
    float int1;
    float int2;
    float totAmtI;
    float amtOwe;
    float total;
    char choice;
    do {
        //Input data
        cout<<fixed<<setprecision(2);
        cout<<"What is the account balance? ";
        cin>>accBal;

        //Output
        if (accBal<=10){
            payI=(1.5f/static_cast<float>(CNVPERC))*accBal;
            cout<<"Your interest is "<<payI<<"."<<endl;
            cout<<"There is no minimum payment. ";
            amtOwe=accBal+payI;
            cout<<"The total amount due is "<<amtOwe<<endl<<endl;
        }else if (accBal>10&&accBal<1000){
            payI=(1.5f/static_cast<float>(CNVPERC))*accBal; 
            totAmtI=(accBal+payI);
            perc10=totAmtI*10/static_cast<float>(CNVPERC);
            cout<<"Interest due is "<<payI<<endl; 
            cout<<"Your minimum payment is "<<perc10<<endl;
            cout<<"The total amount due is "<<totAmtI<<endl<<endl;
        }else if (accBal==1000){
            payI=(1.5f/static_cast<float>(CNVPERC))*accBal; 
            int1=(payI+accBal)*10/static_cast<float>(CNVPERC);            
            cout<<"Interest due is "<<payI<<endl; 
            cout<<"Your minimum payment is "<<int1<<endl;
            totAmtI=(accBal+payI);
            cout<<"The total amount due is "<<totAmtI<<endl<<endl;
        }else if (accBal>1000){
            payI=(1.5f/static_cast<float>(CNVPERC))*1000;
            payII=(1.0f/static_cast<float>(CNVPERC))*(accBal-1000);
            total=payI+payII+accBal;
            int2=total*10/static_cast<float>(CNVPERC);
            cout<<"Interest due is "<<payI+payII<<endl;
            cout<<"Your minimum payment is "<<int2<<endl;
            cout<<"The total amount due is "<<total;
            cout<<endl<<endl;
        } 
        //Repeat
        cout<<"Would you like to repeat the program? "<<endl;
        cout<<"y=yes anything else to exit"<<endl;
        cin>>choice;
    }while(choice=='y');
    
    //Exit stage right
    return 0;
}