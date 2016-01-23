/* Author: Kayla Rodriguez
 * Created on January 20, 2016, 8:55 PM
 * Purpose: Monty Hall Game Show
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
cout<<endl<<"Solution to Savitch 7thEd Chap3 Prob13"<<endl;
cout<<endl<<"The Monty Hall Game Show Problem   "<<endl<<endl;

//Set the random number seed
srand(static_cast<unsigned int>(time(0)));

//Declare and initialize variables
char pick2;      //Pick of the user if the user decides to switch 
char pick1;      //Initial pick of the user 
char pickC1;     //random pick of the computer of prize to reveal
char pickC2;     //random pick of the computer of the car prize
char choice;     //choice of user to switch response
char pick3;      //pick1=pick3 if user stays with answer
int counter=10000;   //See how many loops it took to get the answer
float tol=0.001f;//Accuracy of the results/tolerance
do{
//Input the players turn
    do{
      cout<<"Please pick a door( A,B or C) and press enter to continue."<<endl;
      cin>>pick1;
      pick1=toupper(pick1);
    }while(!(pick1=='A'||pick1=='B'||pick1=='C'));

    //Computer Picks which door to reveal to the user    
    do{
       pickC1=rand()%3+65;     
    }while(pickC1==pick1);

    //Output the consolation prize and option to switch
    cout<<"Door "<<pickC1<<" is a consolation prize. Would you like to keep your pick?"<<endl;
    cout<<"Or would you like to switch your pick?"<<endl;
    cout<<"Press y to switch your answer, press n to keep it."<<endl;
    cin>>choice;
    //Switch options
    if (choice=='y')
    {
        do{
            cout<<"Please pick another door."<<endl;
            cin>>pick2;
            pick2=toupper(pick2);
        }while(!(pick2=='A'||pick2=='B'||pick2=='C'));
    }else if (choice=='n')
    {  do{ 
        cout<<"This is your pick: "<<pick1<<endl;
        cout<<"Please retype your choice: ";
        cin>>pick3;
        pick3=toupper(pick3);
    }while(!(pick3=='A'||pick3=='B'||pick3=='C'));
        cout<<"You have kept your choice, and ";
    }else
        do{
          cout<<"You must type y or n to continue."<<endl;
          cin>>choice;
          choice=toupper(choice);
          }while(!(choice=='Y'||choice=='N'));

    //Determine if user wins the car 
    do{
           pickC2=rand()%3+65;     
        }while(pickC2==pickC1);
        cout<<"the winning door was "<<pickC2<<"."<<endl;

        if (pickC2==pick2||pickC2==pick3)
        {
            cout<<"You win the car!"<<endl;
        }else
            cout<<"You did not win the car, and you receive a consolation prize."<<endl<<endl;

    //Analysis of Outcome
        cout<<"ANAYLSIS OF RESULTS: "<<endl;
        cout<<"Even though it may seem like once one of prizes are revealed you"<<endl;
        cout<<"now have a ";
        cout<<"50% chance of getting the car. This is not necessarily"<<endl<<"true.";
        cout<<" When you originally picked, you had three options, and therefore"<<endl;
        cout<<"approximately a 67% chance of picking the wrong choice initially."<<endl;
        cout<<"So, it would be better to switch your answer because the one you"<<endl;
        cout<<"already picked is";
        cout<<" most likely wrong."<<endl;
}while 
//Exit stage right
return 0;
}