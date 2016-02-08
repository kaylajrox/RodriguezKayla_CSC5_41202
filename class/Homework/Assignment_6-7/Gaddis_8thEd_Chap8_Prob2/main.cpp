/* 
    File:   main.cpp
    Author: kayla rodriguez
    Created on February 2nd, 2016, 8:20 AM
    Purpose:  To develop a linear search routine to find a value
           and repeat the process till exhausted with all values
 */

//System Libraries
#include <iostream> 
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
int schList(int[],int,int);

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
    //Searching Array
    search=schList(list,SIZE,lotWin);
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
//                      Linear Search
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
int schList(int list[], int SIZE, int lotWin){
    int i = 0;			
    int pos = -1; //Records position of search value		
    bool found = false;		
    while (i < SIZE && !found){
        if (list[i] == lotWin){
            found = true;
            pos = i;		  			
        }
        i++;					
    }
    return pos;				
}