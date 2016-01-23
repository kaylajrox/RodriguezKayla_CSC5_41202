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
const char CNVPERC=100;
float PI=atan(1)*4;
//Function Prototypes
 
//Execution Begins Here
int main(int argc, char** argv) {
        //Declare and initialize variables
        unsigned short nSoltn; //Problem Solution to display
        bool reDsply=true;//Exit program when false
    
       //Menu to Display Solution
        do{
            //Input problem to display, i.e. Menu
            cout<<"\nAssignment 3 Problem Set"<<endl;
            cout<<"Type 1 to Display Gaddis 8thEd Chap5 Prob10"<<endl;
            cout<<"Type 2 to Display Savitch 8thEd Chap3 Prob11"<<endl;
            cout<<"Type 3 to Display Savitch 7thEd Chap3 Prob2 "<<endl;
            cout<<"Type 4 to Display Savitch 7thEd Chap3 Prob6 "<<endl;
            cout<<"Type 5 to Display Savitch 7thEd Chap3 Prob15 "<<endl;
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
                cout<<endl<<"Solution to Savitch 8thEd Chap3 Prob10 "<<endl;
                cout<<"Green Crud Population and Fibbonacci Sequence "<<endl<<endl;
                    
               
                    break;
                }
                case 2:{
                    cout<<endl<<"Solution to Savitch 8thEd Chap3 Prob11 "<<endl;
                    cout<<"e^x Calculation"<<endl<<endl;
                    
                    
                    break;
                }
                case 3:{
                    cout<<endl<<"Solution to Savitch 7thEd Chap3 Prob2 "<<endl;
                    cout<<"Revolving Credit"<<endl<<endl;
                    
                   
                    break;
                }
                case 4:{
                    cout<<endl<<"Solution to Savitch 7thEd Chap3 Prob6 "<<endl;
                    cout<<"The Quadratic Formula "<<endl<<endl;
                    
                   
                    break;
                }
                case 5:{
                    cout<<endl<<"Solution to Savitch 7thEd Chap3 Prob15 "<<endl;
                    cout<<"Bouyancy"<<endl<<endl;
                    
                    
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