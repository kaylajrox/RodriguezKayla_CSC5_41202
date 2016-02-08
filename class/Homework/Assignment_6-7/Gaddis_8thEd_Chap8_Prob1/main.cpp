/* 
    File:   main.cpp
    Author: kayla rodriguez
    Created on February 2nd, 2016, 8:20 AM
    Purpose:  Account Validation
 */

//System Libraries
#include <iostream> 
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
int acclist(int[],int,int);

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
    //Searching Array
    search=acclist(accVal,SIZEA,accNum);
    if (search == -1)
        cout << "Number invalid.\n";
    else{
        cout << "The number is valid: ";
        cout << accVal[search] << endl;
    } 
    //Exit stage right
    return 0;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Linear Search
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
int acclist(int accVal[], int SIZEA, int accNum){
    int i = 0;			
    int pos = -1; //Records position of search value		
    bool found = false;		
    while (i < SIZEA && !found){
        if (accVal[i] == accNum){
            found = true;
            pos = i;		  			
        }
        i++;					
    }
    return pos;				
}