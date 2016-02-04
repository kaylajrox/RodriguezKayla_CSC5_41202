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

//Function prototypes
void hatsize(float,float,unsigned int);
void jsize(float,float,unsigned int);
void waisiz(float,unsigned int);
//Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize variables
    float height;
    float weight;
    unsigned int age;
    char choice;
    do {
        //Input data
        cout<<"What is your height? (in) ";
        cin>>height;
        cout<<"What is your weight? (in lbs) ";
        cin>>weight;
        cout<<"What is your age? ";
        cin>>age;
        //Calculate or map inputs to outputs

        //Output the results
        cout<<fixed<<setprecision(2);
        hatsize(height,weight,age);
        jsize(height,weight,age);
        waisiz(weight,age);
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
/*                        Hat size calculation Function                       */
/******************************************************************************/
void hatsize(float height, float weight, unsigned int age){ 
    float hatsize=weight/height*2.9f;
    cout<<"Your hat size is "<<hatsize<<endl;
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                       Jacket size calculation Function                     */
/******************************************************************************/
void jsize(float height, float weight, unsigned int age){
    //Declare Variables
    float jsize=(height*weight/288);
    if (age>30){
        jsize=jsize+(1/8);
        age=age+10;
    } 
    cout<<"Your jacket size is "<<jsize<<endl;
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                       Waist size calculation Function                      */
/******************************************************************************/
void waisiz(float weight, unsigned int age){
    float waisiz=weight/5.7f;
    if (age>28){
        waisiz=waisiz+(1/10);
        age=age+2;
    }
    cout<<"Your waist size is "<<waisiz<<endl;
   
}