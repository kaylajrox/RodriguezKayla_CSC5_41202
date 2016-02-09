/* 
    File:   main.cpp
    Author: kayla rodriguez
    Created on February 2nd, 2016, 8:20 AM
    Purpose: lottery modification
 * Gaddis 8thEd Chap8 Prob3
 */

//System Libraries
#include <iostream> 
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
int bSearch(int[], int, int);
void selSort(int[],const int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    const int SIZE=10;
    int list[SIZE] = {13579,26791,26792,33445,55555,62483,77777,79422,
                                                            85647,93121};
    int lotWin;
    int search;
   
    //Input
    cout<<"Enter this weeks winning numbers: ";
    cin>>lotWin;
    //Sorting
    selSort(list,SIZE);
    //Searching Array
    search=bSearch(list,SIZE,lotWin);
    if (search == -1)
        cout << "You did not win this week.\n";
    else{
        cout << "You have the winning lottery ticket! ";
        cout << list[search] << endl;
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
int bSearch(int list[], const int SIZE, int lotWin){
    int pos = -1,first = 0,last = (SIZE -1);
    int middle;                       
    bool found = false;    // Flag

    while (!found && first <= last){
        middle = (first + last) / 2; // Calculate midpoint
        if (list[middle] == lotWin){ // If value is found at mid
            pos = middle;
            found = true;            
        }
        else if (list[middle] > lotWin){ // If value is in lower half
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
void selSort(int list[],const int SIZE){
    //Declare Variables
    int strScan, mini, minval;
    for (strScan=0;strScan < (SIZE-1); strScan++){
        mini=strScan;
        minval = list[strScan];
        for (int i=strScan+1;i<SIZE;i++){
            if (list[i]<minval){
                minval=list[i];
                mini=i;
            }
        }
        list[mini]=list[strScan];
        list[strScan]=minval;
    }
} 
 
