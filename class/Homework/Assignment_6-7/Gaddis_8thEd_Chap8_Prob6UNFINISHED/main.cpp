/* 
 * File:   main.cpp
 * Author: Kayla Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose: Example Modification
 * Gaddis 8thEd Chap8 Prob6
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void selectS(string[],int);
void shArray(string[],int);
//Execution Begins Here
int main(int argc, char** argv) {
//Define an array with unsorted values
    const int NAMES=20;
    string names[NAMES]={"Collins, Bill","Smith, Bart","Allen, Jim",
    "Griffin, Jim","Stamey, Marty","Rose, Geri","Taylor, Terri","Johnson, Jill",
    "Allison, Jeff","Looney, Joe","Wolfe, Bill","James, Jean","Weaver, Jim,",
    "Pore, Bob","Rutherford, Greg","Javens, Renee","Harrison, Rose","Setzer, Cathy",
    "Pike, Gordon","Holland, Beth" };
    
    //Display the values
    cout<<"The unsorted values are\n";
    shArray(names,NAMES);
    
    //Sort the values
    selectS(names,NAMES);
    
    //Display the values again
    cout<<"The sorted values are\n";
    shArray(names,NAMES);

    //Exit stage right
    return 0;
}
//******************************************************************************
//Definition of Selection Sort
//
//
//******************************************************************************
void selectS(string names[],int NAMES){
    //Declare Variables
    int strScan, mini, minval;
    for (strScan=0;strScan < (NAMES-1); strScan++){
        mini=strScan;
        minval = names[strScan];
        for (int i=strScan+1;i<NAMES;i++){
            if (names[i]<minval){
                minval=names[i];
                mini=i;
            }
        }
        names[mini]=names[strScan];
        names[strScan]=minval;
    }
}
//******************************************************************************
//Definition of function show Array
//shArray
//
//******************************************************************************
void shArray(string names[],int NAMES){
    for(int count=0;count<NAMES;count++){
        cout<<names[count]<<" ";
        cout<<endl;
    }
}