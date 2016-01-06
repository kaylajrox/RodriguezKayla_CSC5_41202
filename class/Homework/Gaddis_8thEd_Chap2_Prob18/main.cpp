/* 
 * File:   main.cpp
 * Author: Kayla Rodriguez
 * Created on January 6, 2016, 9:26 AM
 * Purpose: Energy Drink Survey
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const char cnvPerc=100;//Conversion to percentage

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short cstSrvy=16500; //Customers Surveyed
    unsigned char  peDrnk=15; //Percentage Surveyed of energy drinkers
    unsigned char  pcDrnk=58; //Percentage Surveyed of energy citrus drinkers
    unsigned short neDrnk,ncDrnk; //Number of energy and citrus energy drinkers
    
    //Calculate the number of drinkers 
    neDrnk=(cstSrvy*peDrnk)/(cnvPerc);  
    ncDrnk=(neDrnk*pcDrnk)/(cnvPerc); //Number of Energy Citrus drinkers
    
    //Output the results
    cout<<"Number of Customers Surveyed = "        <<cstSrvy<<endl;
    cout<<"Percentage of Energy Drinkers = "        <<static_cast<int>(peDrnk)<<"%"<<endl;
    cout<<"Percentage of Energy Citrus Drinkers = " <<static_cast<int>(pcDrnk)<<"%"<<endl;
    cout<<"Number of Energy Drinkers = "            <<neDrnk<<endl;
    cout<<"Number of Energy Citrus Drinkers = "     <<ncDrnk<<endl;
    
    //Exit stage right
    return 0;
}

