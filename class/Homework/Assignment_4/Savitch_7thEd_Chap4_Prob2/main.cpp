
/* 
    File:   main.cpp
    Author: Kayla Rodriguez
    Created on January 20, 2016, 10:35 AM
    Purpose:  Gasoline Liters Comparison
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //Formatting
using namespace std;

//User Libraries

//Global Constants
float L=0.264179f; //conversion from liters to gallons
//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) 
{
    //The problem to solve
    cout<<endl<<"Solution to Gaddis 8thEd Chap5 Prob2"<<endl;
    cout<<endl<<"Gasoline Liters Comparison"<<endl<<endl;
    
    //Declare variables
    float nLit1; //number of liters of first car 
    float nMiles1;//number of miles traveled of first car
    float nLit2; //number of liters of second car
    float nMiles2;//number of miles traveled of second car
    char choice;
    do 
    {
        //Introduction
        cout<<"This program compares the efficiency of two vehicles. "<<endl;
        //Input first car
        cout<<"What is the number of liters of gasoline consumed by the first car? ";
        cin>>nLit1;
        if (nLit1==0){
            cout<<"ERROR! Not possible. "<<endl;
        }else{
        cout<<"What is the number of miles traveled by the first car? ";
        cin>>nMiles1;
        }
        //Output of the first car
        cout<<"The number of miles per liter of the first car is "<<endl;
         if (nLit1==0){
            cout<<"Undefined. Cannot do calculation. "<<endl;
        }else{
        cout<<(nMiles1/nLit1)<<endl;
        cout<<"and the number of miles per gallon is ";
        cout<<(nMiles1/L)<<endl;
        }
        //Input second car
        cout<<"What is the number of liters of gasoline consumed by the second car? ";
        cin>>nLit2;
         if (nLit2==0){
            cout<<"ERROR! Not possible. "<<endl;
        }else{
        cout<<"What is the number of miles traveled by the second car? ";
        cin>>nMiles2;
        }
         //Output of the second car
        cout<<"The number of miles per liter of the second car is "<<endl;
         if (nLit2==0){
            cout<<"Undefined. Cannot do calculation. "<<endl;
        }else{
        cout<<(nMiles2/nLit2)<<endl;     
        cout<<"and the number of miles per gallon is ";
        cout<<(nMiles2/L)<<endl;
        }
   
        if ((nMiles1/L)>(nMiles2/L)){
            cout<<"Car 1 has the best fuel efficiency! "<<endl;
        }else if ((nMiles1/L)<(nMiles2/L)){
            cout<<"Car 2 has the best fuel efficiency! "<<endl;
        }else{
            cout<<"Neither have the best fuel efficiency"<<endl;
        }
        
        //Repeat?
        cout<<"Would you like to repeat the program? "<<endl;
        cout<<"y=yes anything else to exit"<<endl;
        cin>>choice;
    }while(choice=='y');
    return 0;
}