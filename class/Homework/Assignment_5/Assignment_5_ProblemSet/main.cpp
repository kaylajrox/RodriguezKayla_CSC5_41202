/* 
    File:   main.cpp
    Author: Kayla Rodriguez
    Created on February 3, 2016, 8:35 PM
    Purpose:  Assignment 5 Problem Set
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
const char CNVPERC=100;

//Function prototypes
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void infrate(float,float);
void infratP(float, float);
void hatsize(float,float,unsigned int);
void jsize(float,float,unsigned int);
void waisiz(float,unsigned int);
void sNum(unsigned int,unsigned int,int);
void sNum2(unsigned int,unsigned int,int);
void input(unsigned int&,unsigned int&,string&);
unsigned int conv(unsigned int);
void output(unsigned int,unsigned int,string);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short nSoltn;//Problem Solution to display
    bool reDsply=true;    //Exit program when false
    
    //Menu to Display Solution
    do{
        //Input problem to display, i.e. Menu
        cout<<"Assignment 5 Problem Set"<<endl;
        cout<<"Type 1 to Display Savitch 7thEd Chap4 Prob4"<<endl;
        cout<<"Type 2 to Display Savitch 7thEd Chap4 Prob5"<<endl;
        cout<<"Type 3 to Display Savitch 7thEd Chap4 Prob9"<<endl;
        cout<<"Type 4 to Display Savitch 7thEd Chap4 Prob13"<<endl;
        cout<<"Type 5 to Display Savitch 7thEd Chap5 Prob1"<<endl;
        cout<<"Type anything else to exit "<<endl<<endl;
        cin>>nSoltn;
        //Solutions to all the problems
        switch(nSoltn){
            case 1:{problem1();break;}
            case 2:{problem2();break;}
            case 3:{problem3();break;}
            case 4:{problem4();break;}
            case 5:{problem5();break;}
            default:{
                cout<<"Exiting the Program"<<endl;
                reDsply=false;
            }
        }
    }while(reDsply);

    //Exit stage right
    return 0;
}
/******************************************************************************/
/************************** Problem 1 *****************************************/
/******************************************************************************/
void problem1(){
    cout<<endl<<"Solution to Savitch 7thEd Chap4 Prob4"<<endl;
    cout<<endl<<"Inflation Rate Calculation"<<endl<<endl;
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
        cout<<fixed<<setprecision(1);
        infrate(pitemO,pitemN);

    //Repeat program?
    cout<<"Would you like to repeat the program? "<<endl;
    cout<<"y=yes anything else to exit"<<endl;
    cin>>choice;
    }while(choice=='y');

}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                        Inflation Rate Calculation Function                 */
/******************************************************************************/
void infrate(float pitemO, float pitemN){
    cout<<fixed<<setprecision(1);
    float infrate=((pitemN-pitemO)/pitemO)*CNVPERC;
    cout<<"The estimated inflation rate is "<<infrate<<"%"<<endl;
}

/******************************************************************************/
/************************** Problem 2 *****************************************/
/******************************************************************************/
void problem2(){
    //The problem to solve
    cout<<endl<<"Solution to Savitch 7thEd Chap4 Prob5"<<endl;
    cout<<endl<<"Inflation Rate Calculation Modification"<<endl<<endl;
    //Declare and initialize variables
    float pitemO;
    float pitemN;
    float pitemN2;
    char choice;
    do {
        //Input data
        cout<<"What is the price of your item one year ago? ";
        cin>>pitemO;
        cout<<"What is the price of your item currently?  ";
        cin>>pitemN;

        //Output the results
        infrate(pitemO,pitemN);
        infratP(pitemO,pitemN);

    //Repeat program?
    cout<<"Would you like to repeat the program? "<<endl;
    cout<<"y=yes anything else to exit"<<endl;
    cin>>choice;
    }while(choice=='y');
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                   Inflation Rate Calculation Prediction Function           */
/******************************************************************************/
void infratP(float pitemO, float pitemN){
    cout<<fixed<<setprecision(2);
    float pricN=((pitemN-pitemO)/pitemO)*pitemN+pitemN;
    cout<<"The estimated price one year from now is "<<pricN<<endl;
    float pricN2=((pitemN-pitemO)/pitemO)*pricN+pricN;
    cout<<"The estimated price two years from now is "<<pricN2<<endl;
}
/******************************************************************************/
/************************** Problem 3 *****************************************/
/******************************************************************************/
void problem3(){
    //The problem to solve
    cout<<endl<<"Solution to Savitch 7thEd Chap4 Prob9"<<endl;
    cout<<endl<<"Clothes Sizes"<<endl<<endl;
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
/******************************************************************************/
/************************** Problem 4 *****************************************/
/******************************************************************************/
void problem4(){
   cout<<endl<<"Solution to Savitch 7thEd Chap4 Prob13"<<endl;
   cout<<endl<<"Beer on the Wall Song"<<endl<<endl;
   //The problem to solve
cout<<endl<<"Solution to Savitch 7thEd Chap4 Prob13"<<endl;
cout<<endl<<"The Bottles of Beer Program"<<endl<<endl;
    
//Declare and initialize variables
unsigned int n10s,n1s;//Number of 10^x's
int number;           //number for input between [0,99]
//Input
do{
    cout<<"Input a number between 0-99 to see the lyrics of 'Ninety-Nine "; 
    cout<<"Bottles of Beer on the Wall.' ";
    cin>>number;
}while(!(number>=0));
//Output
for (int n=1;n<=number;number--){
   
    sNum(n10s,n1s,number);
    cout<<"bottles of beer on the wall, "<<endl;
    sNum(n10s,n1s,number);
    cout<<"bottles of beer, "<<endl;
    cout<<"Take one down, pass it around,"<<endl;
    sNum2(n10s,n1s,number);
    cout<<"bottles of beer on the wall."<<endl<<endl;
}
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                        String Written Number Function                      */
/******************************************************************************/
void sNum(unsigned int n10s,unsigned int n1s,int number){ 
//Calculate the number of 1000's,100's,10's,1's
n10s  =(number-number%10)/10;    //Number of 10's
n1s   =(number-n10s*10);         //Subtract off 10's to get 1's

//Output the 10's
switch(n10s){
    case 9:  cout<<"Ninety ";break;
    case 8:  cout<<"Eighty ";break;
    case 7:  cout<<"Seventy ";break;
    case 6:  cout<<"Sixty ";break;
    case 5:  cout<<"Fifty ";break;
    case 4:  cout<<"Forty ";break;
    case 3:  cout<<"Thirty ";break;
    case 2:  cout<<"Twenty ";break;
    case 1:  cout<<"Ten ";break; 
    default:break;
}

//Output the 1's
switch(n1s){
    case 9:  cout<<"Nine ";break;
    case 8:  cout<<"Eight ";break;
    case 7:  cout<<"Seven ";break;
    case 6:  cout<<"Six ";break;
    case 5:  cout<<"Five ";break;
    case 4:  cout<<"Four ";break;
    case 3:  cout<<"Three ";break;
    case 2:  cout<<"Two ";break;
    case 1:  cout<<"One ";break; 
    default:break;
    }
    
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                        String Written Number Function 2                    */
/******************************************************************************/
void sNum2(unsigned int n10s,unsigned int n1s,int number){ 
//Calculate the number of 1000's,100's,10's,1's
n10s  =((number-number%10)/10)-1;    //Number of 10's
n1s   =((number-n10s*10))-1;         //Subtract off 10's to get 1's

//Output the 10's
switch(n10s){
    case 9:  cout<<"Ninety ";break;
    case 8:  cout<<"Eighty ";break;
    case 7:  cout<<"Seventy ";break;
    case 6:  cout<<"Sixty ";break;
    case 5:  cout<<"Fifty ";break;
    case 4:  cout<<"Forty ";break;
    case 3:  cout<<"Thirty ";break;
    case 2:  cout<<"Twenty ";break;
    case 1:  cout<<"Ten ";break; 
    default:break;
}

//Output the 1's
switch(n1s){
    case 9:  cout<<"Nine ";break;
    case 8:  cout<<"Eight ";break;
    case 7:  cout<<"Seven ";break;
    case 6:  cout<<"Six ";break;
    case 5:  cout<<"Five ";break;
    case 4:  cout<<"Four ";break;
    case 3:  cout<<"Three ";break;
    case 2:  cout<<"Two ";break;
    case 1:  cout<<"One ";break;
    default:break;
    }
   if ((number-1)==0){ 
    cout<<"Zero ";   
    }
}
/******************************************************************************/
/************************** Problem 5 *****************************************/
/******************************************************************************/
void problem5(){
    cout<<endl<<"Solution to Savitch 7thEd Chap5 Prob1"<<endl;
    cout<<endl<<"24 Hour clock"<<endl<<endl;
    //Declare and initialize variables
    unsigned int hr24;
    unsigned int min;
    unsigned int hr;
    string ampm;
    char choice;
    do {
        input(hr24,min,ampm);
        hr24=conv(hr24);
        output(hr24, min,ampm);

        //Repeat program?
        cout<<"Would you like to repeat the program? "<<endl;
        cout<<"y=yes anything else to exit"<<endl;
        cin>>choice;
    }while(choice=='y');
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                        Input Data                                          */
/******************************************************************************/
void input(unsigned int &hr24,unsigned int &min, string &ampm){ 
    cout<<"Conversion from 24-hour notation to 12-hour notation."<<endl;
    cout<<"What is the number of hours (24-System)? ";
    cin>>hr24;
    cout<<"What is the number of minutes? ";
    cin>>min;
    do {
        cout<<"Is it AM or PM? ";
        cin>>ampm;
        for (int i=0;i<ampm.size();i++){
            ampm[i]=toupper(ampm[i]);
        }
    }while (!(ampm=="AM"||ampm=="PM"));
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                       Conversion Function                                  */
/******************************************************************************/
unsigned int conv(unsigned int hr24){
    if (hr24>12){
        hr24=hr24-12;
    }else if (hr24==0){
        hr24=hr24+12;
    }
    return hr24;
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                       Output Function                                      */
/******************************************************************************/
void output(unsigned int hr24,unsigned int min,string ampm){
    if(hr24==12){
        cout<<hr24<<":";
        if (min>=10){
            cout<<min;
        }else {
            cout<<"0"<<min;
        } 
    }
    else if(hr24<12) {
        cout<<hr24<<":";
        if (min>=10){
            cout<<min;
        }else {
            cout<<"0"<<min;
        }
    }
    cout<<" "<<ampm<<endl;
}