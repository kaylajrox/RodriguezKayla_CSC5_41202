/* 
 * Author: Kayla Rodriguez
 * Created on January 5, 2016, 9:20 PM
 * Purpose: Mad Lib
 */
 
//System Libraries
#include <iostream>
#include <cstring>
using namespace std;
 
//User Libraries
 
//Global Constant

//Function Prototypes
 
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    char instctr; //name of instructor
    char nme;     //your name
    char foodnme; //food name
    unsigned int n;//number between 100 and 120
    char adj;     //adjective
    char color;   //color
    char animal;  //animal
    char choice;
    do {
        //Input data
        cout<<"This is a game of Mad Lib! Enter the following to play:"<<endl;
        cout<<"The first or last name of your instructor "<<endl;
        cin>>instctr;
        cout<<"Your name "<<endl;
        cin>>nme;
        cout<<"The name of a food "<<endl;
        cin>>foodnme;
        cout<<"A number between 100 and 120 "<<endl;
        cin>>n;
        cout<<"An adjective "<<endl;
        cin>>adj;
        cout<<"A color "<<endl;
        cin>>color;
        cout<<"An animal "<<endl;
        cin>>animal;
       
        //Calculate
        

        //Output
        cout<<"Dear Instructor "<<instctr<<","<<endl;
        cout<<"               "<<endl;
        cout<<"I am sorry that I am unable to turn in my homework at this time."<<endl;
        cout<<"First, I ate a rotten "<<foodnme<<", which made me turn "<<color<<" and"<<endl;
        cout<<"extremely ill. I came down with a fever of "<<n<<"."<<endl;
        cout<<"Next, my "<<adj<<" pet "<<animal<<" must have smelled the remains of the "<<foodnme<<endl;
        cout<<"on my homework, because he ate it. I am currently rewriting my homework and I hope you"<<endl;
        cout<<"accept it late."<<endl;
        cout<<"                "<<endl;
        cout<<"Sincerely,"<<endl;
        cout<<nme<<endl;

        
        cout<<"Would you like to repeat the program? "<<endl;
        cout<<"y=yes anything else to exit"<<endl;
        cin>>choice;
    }while(choice=='y');
    

    
    
    //Exit stage right
    return 0;
}