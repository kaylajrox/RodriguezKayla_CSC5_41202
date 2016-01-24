
/* 
    File:   main.cpp
    Author: Dr. Mark E. Lehr
    Created on January 20, 2016, 10:35 AM
    Purpose:  Table of Temperatures
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //Formatting
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //The problem to solve
    cout<<endl<<"Solution to Gaddis 8thEd Chap5 Prob11"<<endl;
    cout<<endl<<"Population Sizes"<<endl<<endl;
    
    //Declare variables
    unsigned int nOrg; //starting number or organisms
    float percGro;
    unsigned int nDays;
    unsigned int popSize; //population size
    unsigned char  d1=0,d2=100,p1=nOrg,p2=212;//Data pts of freezing and boiling
    
    //Input
    cout<<"What is the starting number of organisms?"<<endl;
    cin>>nOrg;
    cout<<"What is their average population increase (in percentage)? "<<endl;
    cin>>percGro;
    cout<<"What is the number of days they will multiply?"<<endl;
    cin>>nDays;
    
    //Calculation
    popSize=nOrg+(percGro*nOrg/100);
    
    
    //Loop to generate the population for each new day
    cout<<"Day   Population Size"<<endl;
    //cout<<fixed<<setprecision(2)<<showpoint;
    for(int p=p1;p<=p2;p++){
        float peq=(percGro*nOrg/100)*(p+nOrg);
        float cintrp=p1+(p-p1)/(p2-p1)*(d2-d1);
        cout<<setw(10)<<p<<setw(10)<<peq<<setw(10)<<cintrp<<endl;
    }    
    //Exit stage right
    return 0;
}