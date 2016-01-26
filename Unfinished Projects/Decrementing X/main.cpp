/* 
 * File:   main.cpp
 * Author: Kayla Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose:  Check out IDE
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
  
//Declare and initialize variables
    int num;
    int x;
    //Input data
    cout<<"Input a number, this number will count down and make an X. ";
    cin>>num;
    //Calculate or map inputs to outputs
    
    //Output the results
    
        for (int n=1;n<=num;num--){
            cout<<num<<endl;
        }
            for (int i=1;i<=num;x--){
            x=num;
            cout<<x<<endl;
            cout<<" "<<x<<endl;
            cout<<"  "<<x<<endl;
            cout<<"   "<<x<<endl;
            cout<<"    "<<x<<endl;
        }
    

    
    //Exit stage right
    return 0;
}

/* x=num;
            cout<<x<<"   "<<x<<endl;
            cout<<x<<"  "<<x<<endl;
            cout<<"   "<<x<<"   "<<endl;
            cout<<x<<"  "<<x<<endl;
            cout<<x<<"   "<<x<<endl;*/