/* 
 * Author: Kayla Rodriguez
 * Created on January 5, 2016, 9:20 PM
 * Purpose: 7.6% retroactive modified
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
    float monSlryN;   //new monthly salary
    float anlSlryN;   //new annual salary
    float payRet;     //retroactive pay
    float anlSlryP;   //previous annual salary
    unsigned int nMon; //number of months you will receive the retroactive for
    char choice;
    do {
        //Input data
        cout<<fixed<<setprecision(2);
        cout<<"You have won a 7.6% pay increase retroactive!"<<endl;
        cout<<"To calculate your new salary, please input your previous annual salary."<<endl;
        cin>>anlSlryP;
        cout<<"Enter the number of months you will receive this retroactive for "<<endl;
        cin>>nMon;
       
        //Calculate
        payRet=(7.6f/CNVPERC)*anlSlryP*nMon/12;
        anlSlryN=anlSlryP+payRet*12/nMon;
        monSlryN=anlSlryN/12;
        

        //Output
        cout<<"The amount of retroactive pay you will receive is ";
        cout<<"$"<<payRet<<endl;
        cout<<"Your new annual salary is "<<"$"<<anlSlryN;
        cout<<" and your new monthly salary is "<<"$"<<monSlryN<<endl;
        
        //Repeat
        cout<<"Would you like to repeat the program? "<<endl;
        cout<<"y=yes anything else to exit"<<endl;
        cin>>choice;
    }while(choice=='y');
    

    
    
    //Exit stage right
    return 0;
}