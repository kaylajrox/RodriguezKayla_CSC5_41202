/* 
 * File:   main.cpp
 * Author: Kayla Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose:  Number n
 * Gaddis 8thEd Chap7 Prob4
 */

//System Libraries
#include <iostream>
#include <cstdlib>  //Random Functions
#include <ctime>    //Setting the seed with time
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void arrayF(int[],int,int);

//Execution Begins Here
int main(int argc, char** argv) {
//Initialize the seed
    srand(static_cast<unsigned int>(time(0)));
//Declare and initialize variables
    int size;
    int n;
    int array[size];
    //Input
    cout<<"This program outputs all the numbers"<<endl<<"that are greater than"; 
    cout<<"your inputted number in an array filled with randomly chosen "<<endl;
    cout<<"numbers between [0,100)."<<endl;
    cout<<"Enter the size of your array: ";
    cin>>size;
    cout<<"Enter a number, n: ";
    cin>>n;
    arrayF(array,size,n);
    //Exit stage right
    return 0;
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                           Array Output                                     */
/******************************************************************************/
void arrayF(int array[],int size,int n){
   //Loop and fill the array with random numbers
    cout<<"All the numbers in your array greater than "<<n<<" are: "<<endl;
    cout<<"(If output is blank, no numbers in the random set are bigger.)"<<endl;
    for(int i=0;i<size;i++){
        array[i]=rand()%90;//[0,99]
        if (n<array[i]){
            cout<<array[i]<<" "<<endl;
        }        
    }   
}


