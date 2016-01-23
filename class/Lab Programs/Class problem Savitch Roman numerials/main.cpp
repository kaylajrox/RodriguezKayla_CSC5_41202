/* Author: Kayla Rodriguez
 * Created on January 20, 2016, 8:55 AM
 * Purpose: Play Paper-Rock-Scissors with the computer
 */
 
//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
//User Libraries
 
//Global Constant

 
//Function Prototypes
 
//Execution Begins Here
int main(int argc, char** argv) {
   //The Problem to solve
    cout<<endl<<"Solution to Savitch 7thEd Chap3 Prob1"<<endl;
    cout<<endl<<"The Roman Numeral Conversion Program"<<endl<<endl;
    
   //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
   //Declare and initialize variables
    unsigned short number=rand()%2001+1000;//[1000,3000]
    unsigned char n1000s,n100s,n10s,n1s;//Number of 10^x's
    
   //Calculate the number of 1000's,100's,10's,1's
    n1000s=(number-number%1000)/1000;//Number of 1000's
    number=(number-n1000s*1000);     //subtract off 1000's
    n100s =(number-number%100)/100;  //Number of 100's
    number=(number-n100s*100);       //Subtract off 100's
    n10s  =(number-number%10)/10;    //Number of 10's
    n1s   =(number-number%1);        //NSubtract off 10's to get 1's

    //Output the number and it's components
    cout<<"The number to convert = "<<number<<endl;

   



//Exit stage right
return 0;
}