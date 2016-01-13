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
    const unsigned char MAXCAP=35; //Max Capacity of the room
    unsigned short stsUtil;        //Seats Utilized
    unsigned char delta;           //Difference between capacity and utilization
    
    //Input data
    cout<<"How many seats are being utilized in BE200?"<<endl;
    cin>>stsUtil;
    
    //Calculate or map inputs to outputs
    delta=MAXCAP-stsUtil;
            
    //Output the results
    cout<<"Maximum Room Capacity of BE200 = "<<static_cast<int>(MAXCAP)
        <<" seats"<<endl;
    if(delta>=0){
        cout<<"Class will be held, ";
        cout<<static_cast<int>(delta)<<" available seats remain!"<<endl;
        cout<<fixed<<setprecision(1)<<endl;
        cout<<"Percentage capacity utilized = "
            <<100.0f*stsUtil/MAXCAP<<"%"<<endl;
    }else {
        cout<<"Room capacity has been exceeded";
        cout<<static_cast<int>(-delta)<<" students need to leave"<<endl;
    }    
    
    //Exit stage right

    return 0;
}

