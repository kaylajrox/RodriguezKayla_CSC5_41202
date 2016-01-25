
/* 
    File:   main.cpp
    Author: Kayla Rodriguez
    Created on January 20, 2016, 10:35 AM
    Purpose:  Population Sizes
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
    unsigned int nDays1;
    unsigned int popSize; //population size

    
    //Input
    cout<<"What is the starting number of organisms?"<<endl;
    cin>>nOrg;
    if (nOrg==1){
        cout<<"Population must be greater than or equal to two. "<<endl;
    }else {
        cout<<"What is their average population increase (in percentage)? "<<endl;
        cin>>percGro;
        cout<<"What is the number of days they will multiply?"<<endl;
        cin>>nDays1;

        //Loop to generate the population for each new day
        cout<<"Day   Population Size"<<endl;
        for(int nDays=1;nDays<=nDays1;nDays++)
            {
            //Calculate
            unsigned int popSize=(nOrg+(percGro*nOrg/100))*nDays;

            //Display
            cout<<nDays<<"\t"<<popSize<<endl;
            } 
    }
    //Exit stage right
    return 0;
}