/* Author: Kayla Rodriguez
 * Created on January 5, 2016, 9:20 PM
 * Purpose: 
 */
 
//System Libraries
#include <iostream>
using namespace std;
 
//User Libraries
 
//Global Constant

 
//Function Prototypes
 
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned int plyr; //different players 
    unsigned int plyr2=2; //different players 
    char p; //paper
    char P;//paper
    char r; //rock
    char R; //rock
    char s; //scissors
    char S;//scissors
    char choice;
    do {
        //Input data
        cout<<"Type 1 to display player 1 options "<<endl;
        cout<<"Type 2 to display player 1 options "<<endl;
        cin>>plyr;
        cout<<"Player 1 please input r,s, or p (stands for rock, paper, scissors)"<<endl;
        switch (plyr1)
        {   
            case 'p':
            case'P':
                cout<<"Paper covers rock";
                break;
            case 'r':
            case 'R':
                cout<<"Rock breaks scissors";
                break;
            case 's':
            case'S':
                cout<<"Scissors cuts Paper";
                break;
                
            }
        
        //Calculate
        

        //Output

        
        cout<<"Would you like to repeat the program? "<<endl;
        cout<<"y=yes anything else to exit"<<endl;
        cin>>choice;
    }while(choice=='y');
    

    
    
    //Exit stage right
    return 0;
}