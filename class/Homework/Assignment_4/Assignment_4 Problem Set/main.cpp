/* Author: Kayla Rodriguez
 * Created on January 19, 2016, 8:22 AM
 * Purpose Assignment 4 Problem Set
 */
 
//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;
 
//User Libraries
 
//Global Constant
float G=6.673e-8;  //gravitational constant
float L=0.264179f; //conversion from liters to gallons
//Function Prototypes
 
//Execution Begins Here
int main(int argc, char** argv) {
        //Declare and initialize variables
        unsigned short nSoltn; //Problem Solution to display
        bool reDsply=true;//Exit program when false
    
       //Menu to Display Solution
        do{
            //Input problem to display, i.e. Menu
            cout<<"\nAssignment 4 Problem Set"<<endl;
            cout<<"Type 1 to Display Gaddis 8thEd Chap5 Prob12"<<endl;
            cout<<"Type 2 to Display Gaddis 8thEd Chap5 Prob7"<<endl;
            cout<<"Type 3 to Display Savitch 7thEd Chap4 Prob7 "<<endl;
            cout<<"Type 4 to Display Savitch 7thEd Chap4 Prob1 "<<endl;
            cout<<"Type 5 to Display Savitch 7thEd Chap4 Prob2 "<<endl;
            cout<<"Type 6 to Display Savitch 7thEd Chap3 Prob16 "<<endl;
            cout<<"Type 7 to Display Savitch 7thEd Chap3 Prob1 "<<endl;
            cout<<"Type 8 to Display Savitch 7thEd Chap3 Prob5 "<<endl;
            cout<<"Type 9 to Display Savitch 9thEd Chap3 Prob3 "<<endl;
            cout<<"Type 10 to Display Gaddis 8thEd Chap4 Prob8"<<endl;
            cout<<"Type anything else to exit "<<endl;
            cin>>nSoltn;
            //Solutions to all the problems
            switch (nSoltn){
                case 1:{
                 //The problem to solve
                cout<<endl<<"Solution to Gaddis 8thEd Chap5 Prob12"<<endl;
                cout<<endl<<"Display a Temperature Table"<<endl<<endl;

                //Declare variables
                float slope=5.0f/9; //Slope of the line for temperature conversion c/f
                char  intrcpt=-32;  //Scaled 9/5 deg c
                unsigned char  c1=0,c2=100,f1=32,f2=212;//Data pts of freezing and boiling

                //Loop to generate the degree Celsius and output the table
                cout<<"Fahrenheit   Celsius   Celsius"<<endl;
                cout<<fixed<<setprecision(2)<<showpoint;
                for(int f=f1;f<=f2;f++){
                    float ceq=slope*(f+intrcpt);
                    float cintrp=c1+static_cast<float>(f-f1)/(f2-f1)*(c2-c1);
                    cout<<setw(10)<<f<<setw(10)<<ceq<<setw(10)<<cintrp<<endl;
                }
                    break;
                }
                case 2:{
                   //The problem to solve
                cout<<endl<<"Solution to Gaddis 8thEd Chap5 Prob7"<<endl;
                cout<<endl<<"Display a Salary Table"<<endl<<endl;

                //Declare variables
                unsigned int salary=1;      //Salary starting at a penny
                double totPay=salary;       //Total Pay by summing the salary

                //Loop to generate the Salary Table and Total Paid
                cout<<" Day        $Salary         $Total"<<endl;
                cout<<fixed<<setprecision(2)<<showpoint;
                cout<<setw(4)<<1<<setw(15)<<salary/100.0f<<setw(15)<<totPay/100.0f<<endl;
                for(int day=2;day<=31;day++){
                    //salary*=2;
                    salary<<=1;//Bit shift right by 1 bit
                    totPay+=salary;
                    cout<<setw(4)<<day<<setw(15)<<salary/100.0<<setw(15)<<totPay/100.0<<endl;
                }
                    break;
                }
                case 3:{
                    cout<<endl<<"Solution to Savitch 7thEd Chap3 Prob7 "<<endl;
                    cout<<"Gravitational Force Calculation "<<endl<<endl;

                       //Declare and initialize variables
                    float m1; //mass 1
                    float m2; //mass 2
                    float f;  //gravitational force
                    float d; //distance between objects
                    char choice;
                    do {
                        //Input data
                        cout<<"Enter mass of first object (in grams): ";
                        cin>>m1;
                        cout<<"Enter mass of second object (in grams): ";
                        cin>>m2;
                        cout<<"Enter the distance between the two objects (in cm): ";
                        cin>>d;

                        //Calculate
                        f=G*m1*m2/(pow(d,2));

                        //Output
                        cout<<"The gravitational force between these two objects in dynes ((g x cm)/sec^2) is ";
                        cout<<f<<endl;

                        cout<<"Would you like to repeat the program? "<<endl;
                        cout<<"y=yes anything else to exit"<<endl;
                        cin>>choice;
                    }while(choice=='y');
    
                    break;
                }
                case 4:{
                    cout<<endl<<"Solution to Savitch 7thEd Chap4 Prob1 "<<endl;
                    cout<<"Gasoline Liters "<<endl<<endl;
                     //The problem to solve
                    cout<<endl<<"Solution to Gaddis 8thEd Chap5 Prob1"<<endl;
                    cout<<endl<<"Gasoline Liters"<<endl<<endl;

                    //Declare variables
                    float nLit; //number of liters
                    float nMiles;//number of miles traveled
                    char choice;
                    do 
                    {
                        //Input
                        cout<<"What is the number of liters of gasoline consumed by your car? ";
                        cin>>nLit;
                        if (nLit==0){
                        cout<<"ERROR! Not possible. "<<endl;
                        }else {
                        cout<<"What is the number of miles traveled by your car? ";
                        cin>>nMiles;
                        }
                        //Output
                        cout<<"The number of miles per liter is "<<endl   ;
                        if (nLit==0){
                        cout<<"Cannot compute computation. "<<endl;
                        }else{
                        cout<<(nMiles/nLit)<<endl;
                        cout<<"and the number of miles per gallon is ";   
                        cout<<(nMiles/L)<<endl;
                        }

                        //Repeat?
                        cout<<"Would you like to repeat the program? "<<endl;
                        cout<<"y=yes anything else to exit"<<endl;
                        cin>>choice;
                    }while(choice=='y');

                   
                    break;
                }
                case 5:{
                cout<<endl<<"Solution to Savitch 7thEd Chap4 Prob2"<<endl;
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
                    break;
                }
                case 6:{
                cout<<endl<<"Solution to Savitch 7thEd Chap3 Prob16 "<<endl;
                cout<<"Equal Temperatures"<<endl<<endl;
                
                    break;
                }
                case 7:{
                    //The Problem to solve
                    cout<<endl<<"Solution to Savitch 7thEd Chap3 Prob1"<<endl;
                    cout<<endl<<"Rock-Paper-Scissors Games"<<endl<<endl;

                   
                    break;
                }
                case 8:{
                    cout<<endl<<"Solution to Savitch 7thEd Chap3 Prob5 "<<endl;
                    cout<<"Call Rates"<<endl<<endl;

                    break;
                }
                case 9:{
                //The problem to solve
                cout<<endl<<"Solution to Savitch 9thEd Chap3 Prob3"<<endl;
                cout<<endl<<"The Roman Numeral Conversion Program"<<endl<<endl;

               
                    break;
                }
                case 10:{
                    cout<<endl<<"Solution to Gaddis 8thEd Chap4 Prob8"<<endl;
                    cout<<endl<<"Mixing Primary Colors!"<<endl<<endl;
                   
                break;
                }
                default:{
                    cout<<"Exiting the Program"<<endl;
                    reDsply=false;
                }
            }
        }while(reDsply);

    //Exit stage right
    return 0;
}