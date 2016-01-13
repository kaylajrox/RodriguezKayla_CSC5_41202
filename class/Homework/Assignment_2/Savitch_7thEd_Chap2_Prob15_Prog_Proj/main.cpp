/* 
 * Author: Kayla Rodriguez
 * Created on January 5, 2016, 9:20 PM
 * Purpose: Workweek for an Employee
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
    float velss1;   //velocity of sound with first temperature
    int temp1;      //first temperature
    int temp2;      //second temperature
    float velss2;   //velocity of sound with second temperature
    float velss3;   //velocity of sound of temp1+1
    float velss4;   //velocity of sound of temp1+2
    float velss5;   //velocity of sound of temp1+3
    float velss6;   //velocity of sound of temp1+1
    
    //Input
    cout<<"This program gives the velocity of sound at two different temperatures."<<endl;
    cout<<"If your second temperature is greater than your first, then the program"<<endl;
    cout<<"gives the next four proceeding temperatures and velocities in temperature ";
    cout<<"increments of one degree Celsius."<<endl;
    cout<<"Enter a temperature: ";
    cin>>temp1;
    cout<<"Enter a second temperature: ";
    cin>>temp2;
    
    //Calculate Using Speed of sound formula
    velss1=331.3+.61*temp1;
    velss2=331.3+.61*temp2;
    velss3=331.3+.61*(temp1+1);
    velss4=331.3+.61*(temp1+2);
    velss5=331.3+.61*(temp1+3);
    velss6=331.3+.61*(temp1+4);
    
    //Output results
    cout<<"At "<<temp1<<" degrees Celsius the velocity of sound is "<<velss1<<"m/s"<<endl;
    if(temp2>temp1){
        cout<<"At "<<temp1+1<<" degrees Celsius the velocity of sound is "<<velss3<<"m/s"<<endl;
        cout<<"At "<<temp1+2<<" degrees Celsius the velocity of sound is "<<velss4<<"m/s"<<endl;
        cout<<"At "<<temp1+3<<" degrees Celsius the velocity of sound is "<<velss5<<"m/s"<<endl;
        cout<<"At "<<temp1+4<<" degrees Celsius the velocity of sound is "<<velss6<<"m/s"<<endl;    
    }   
    cout<<"At "<<temp2<<" degrees Celsius the velocity of sound is "<<velss2<<"m/s"<<endl; 
    
    //Exit stage right
    return 0;
}
