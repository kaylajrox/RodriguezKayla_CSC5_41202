/* 
 * Author: Kayla Rodriguez
 * Created on January 5, 2016, 9:20 PM
 * Purpose: 
 */
 
//System Libraries
#include <iostream>
#include <cmath>
using namespace std;
 
//User Libraries
 
//Global Constant
float G=6.673e-8;
 
//Function Prototypes
 
//Execution Begins Here
int main(int argc, char** argv) {
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
    
    
    //Exit stage right
    return 0;
}
