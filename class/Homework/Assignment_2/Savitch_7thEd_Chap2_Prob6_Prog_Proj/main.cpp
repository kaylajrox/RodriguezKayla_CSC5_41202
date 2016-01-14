/* 
 * Author: Kayla Rodriguez
 * Created on January 13, 2016, 10:20 AM
 * Purpose: Capacity of a Room
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
 
//Global Constant

//Function Prototypes
 
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned int maxcap;       //Max Capacity of the room
    unsigned short stsUtil;    //Seats Utilized
    int delta;                 //Difference between capacity and utilization
    char choice;
    do {
    //Input data
    cout<<"How many seats are being utilized in the meeting room? ";
    cin>>stsUtil;
    cout<<"What is the maximum room capacity of the meeting room? ";
    cin>>maxcap;
    
    //Calculate or map inputs to outputs
    delta=maxcap-stsUtil;
            
    //Output the results
    
    if(delta>=0){
        cout<<"Meeting will be held, ";
        cout<<static_cast<int>(delta)<<" available seats remain!"<<endl;
        cout<<fixed<<setprecision(2);
        cout<<"Percentage capacity utilized = "
            <<100.0f*stsUtil/maxcap<<"%"<<endl;
    }else {
        cout<<"Room capacity has been exceeded. "<<endl;
        cout<<static_cast<int>(-delta)<<" people need to leave"<<endl;
    }    
    cout<<"Would you like to repeat the program? "<<endl;
        cout<<"y=yes anything else to exit"<<endl;
        cin>>choice;
    }while(choice=='y');
    //Exit stage right

    return 0;
}

