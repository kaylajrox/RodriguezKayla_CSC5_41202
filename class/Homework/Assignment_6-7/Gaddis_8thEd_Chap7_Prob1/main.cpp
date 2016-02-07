/* 
 * File:   main.cpp
 * Author: Kayla Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose:  Arrays 10 Numbers
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void PrtAry(int[],int);
void intAry(int[],int);

//Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize variables
    const int SIZE=10;
    int number[SIZE];
    
    //Calculate or map inputs to outputs

    //Output the results
    intAry(number,SIZE);
    PrtAry(number,10);

    //Exit stage right
    return 0;
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                            Print Array                                     */
/******************************************************************************/
void PrtAry(int number[],int SIZE){ 
    int count;
    int highest;
    int lowest;
    highest = number[0];
    for (count = 1; count < SIZE; count++){
        if (number[count] > highest){
            highest = number[count];
        }
     } 
    cout<<"The largest value is: "<<highest<<endl;
    lowest = number[0];
    for (count = 1; count < SIZE; count++){
        if (number[count] > highest){
            highest = number[count];
        }
     } 
    cout<<"The smallest value is: "<<lowest<<endl;
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                       Print Array                                          */
/******************************************************************************/
void intAry(int number[],int SIZE){
    cout<<"Enter in ten Numbers."<<endl;
    for(int i=0;i<SIZE;i++){
        cin>>number[i];
    }  
    
}