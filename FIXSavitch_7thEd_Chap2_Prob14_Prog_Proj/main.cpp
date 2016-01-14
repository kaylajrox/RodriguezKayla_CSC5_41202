/* 
 * Author: Kayla Rodriguez
 * Created on January 5, 2016, 9:20 PM
 * Purpose: Mad Lib
 */
 
//System Libraries
#include <iostream>
#include <string>
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
        string mystr;
        cin>>(instctr, mystr);
        cout<<"Your name "<<endl;
        cin>>(nme, mystr);
        cout<<"The name of a food "<<endl;
        cin>>(foodnme, mystr);
        cout<<"A number between 100 and 120 "<<endl;
        cin>>n;
        cout<<"An adjective "<<endl;
        cin>>(adj, mystr);
        cout<<"A color "<<endl;
        cin>>(color, mystr);
        cout<<"An animal "<<endl;
        cin>>(animal, mystr);
       
        //Calculate
        

        //Output
        cout<<"Dear Instructor "<<mystr<<","<<endl;
        cout<<"               "<<endl;
        cout<<"I am sorry that I am unable to turn in my homework at this time."<<endl;
        cout<<"First, I ate a rotten "<<mystr<<", which made me turn "<<mystr<<" and"<<endl;
        cout<<"extremely ill. I came down with a fever of "<<n<<"."<<endl;
        cout<<"Next, my "<<mystr<<" pet "<<mystr<<" must have smelled the remains of the "<<mystr<<endl;
        cout<<"on my homework, because he ate it. I am currently rewriting my homework and I hope you"<<endl;
        cout<<"accept it late."<<endl;
        cout<<"                "<<endl;
        cout<<"Sincerely,"<<endl;
        cout<<mystr<<endl;

        
        cout<<"Would you like to repeat the program? "<<endl;
        cout<<"y=yes anything else to exit"<<endl;
        cin>>choice;
    }while(choice=='y');
    

    

    //Exit stage right
    return 0;
}