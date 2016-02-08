/* 
    File:   main.cpp
    Author: kayla rodriguez
    Created on February 2nd, 2016, 8:20 AM
    Purpose:  Account Validation Modification
 */

//System Libraries
#include <iostream> 
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void sSort(int[],const int);
int aclistB(int[],const int,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    const int SIZEA=18;
    //Account validation
    int accVal[SIZEA] = {5658845,4520125,7895122,8777541,8451277,1302850,8080152,
    4562555,5552012,5050552,7825877,1250255,1005231,6545231,3852085,7576651,
                                                               7881200,4581002};
    int accNum;
    int search;
   
    //Input
    cout<<"Enter a seven digit charge account number ";
    cin>>accNum;
    //Sort Array
    sSort(accVal,SIZEA);
    //Search Array
    search=aclistB(accVal,SIZEA,accNum);
    if (search == -1)
        cout << "Number invalid.\n";
    else{
        cout << "The number is valid. ";
    } 
    //Exit stage right
    return 0;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Binary Search
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
int aclistB(int accVal[],const int SIZEA, int accNum){
    int pos = -1,first = 0,last = (SIZEA-1);
    int middle;                       
    bool found = false;    // Flag

    while (!found && first <= last){
        middle = (first + last) / 2; // Calculate midpoint
        if (accVal[middle] == accNum){ // If value is found at mid
            pos = middle;
            found = true;            
        }
        else if (accVal[middle] > accNum){ // If value is in lower half
            last = middle - 1;
        }
        else{
            first = middle + 1; // If value is in upper half
        }
    }
    return pos;
} 
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Selection Sort Search
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
void sSort(int accVal[],const int SIZEA){
    //Declare Variables
    int strScan, mini, minval;
    for (strScan=0;strScan < (SIZEA-1); strScan++){
        mini=strScan;
        minval = accVal[strScan];
        for (int i=strScan+1;i<SIZEA;i++){
            if (accVal[i]<minval){
                minval=accVal[i];
                mini=i;
            }
        }
        accVal[mini]=accVal[strScan];
        accVal[strScan]=minval;
    }
} 