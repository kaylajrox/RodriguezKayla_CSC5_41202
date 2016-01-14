/* 
 * Author: Kayla Rodriguez
 * Created on January 5, 2016, 9:20 PM
 * Purpose: Addition
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
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    int n6;
    int n7;
    int n8;
    int n9;
    int n10;
        //Input data
        cout<<"Enter in 10 whole numbers(positive and negative)"<<endl;
        cin>>n1;
        cin>>n2;
        cin>>n3;
        cin>>n4;
        cin>>n5;
        cin>>n6;
        cin>>n7;
        cin>>n8;
        cin>>n9;
        cin>>n10;
        short sumTot;
        unsigned short sumTotP;
        short sumTotN;
        
        //Calculate
        
        sumTot=n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;
        sumTotP=n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;
        sumTotN=-(n1+n2+n3+n4+n5+n6+n7+n8+n9+n10);

        //Output
        cout<<"The sum of all the numbers total is "<<sumTot<<endl;
        cout<<"The sum of all the numbers greater than zero is "<<sumTotP<<endl;
        cout<<"The sum of all the numbers less than zero is "<<sumTotN<<endl;
      
    //Exit stage right
    return 0;
}