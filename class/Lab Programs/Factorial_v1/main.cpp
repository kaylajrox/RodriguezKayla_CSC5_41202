/* 
 * Author: Kayla Rodriguez
 * Created on January 19, 2016, 9:20 PM
 * Purpose: Factorial
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
    unsigned int n, factN=1; //N and N!

    //Input data
    cout<<"Enter the number you would like to compute the factorial n!"<<endl;
    cout<<"The limit of this calculation is <=13"<<endl;
    cin>>n;

    //Calculate
    for(int i=1;i<=n;i++){
        factN*=i;
    }
    
    //Output
    cout<<n<<"!="<<factN<<endl;

    //Exit stage right
    return 0;
}