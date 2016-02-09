/* 
 * File:   main.cpp
 * Author: Kayla Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose:  Payroll
 * Gaddis 8thEd Chap7 Prob9
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize variables
    int empId[7]={5658845,4520125,7895122,8777541,8451277,1302850,7580489};
    int NUMHRS=7;
    int hours[7];
    float payRte[7];
    float wages[7];
    //Input
    cout<<fixed<<setprecision(2);
    for(int i=0;i<7;i++){
        cout<<"Enter employee "<<i+1<<" hourly pay rate"<<endl;
        cin>>payRte[i];
        cout<<"Enter employee "<<i+1<<" hours worked "<<endl;
        cin>>hours[i];
    }
    for (int i=0;i<7;i++){
        wages[i]=payRte[i]*(float)hours[i];
        cout<<"Employee ID number "<<empId[i]<<" had a gross wage of "<<"$";
        cout<<wages[i]<<endl;
    }
    //Output the results

    //Exit stage right
    return 0;
}
