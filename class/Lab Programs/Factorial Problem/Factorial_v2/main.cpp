/* 
 * Author: Kayla Rodriguez
 * Created on January 19, 2016, 9:20 PM
 * Purpose: Factorial
 */
 
//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
//User Libraries
 
//Global Constant

//Function Prototypes
 
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    const unsigned char nTerms=13;
    float etox=1,x;//e^x

    //Input the value x
    cout<<"Input x of e^x computation"<<endl;
    cin>>x;

    //Calculate e^x
    for(int n=1;n<=nTerms;n++){
        //Declare and Initialize variables
        unsigned int factN=1;//N and N
        
        //Calculate the factorial
        for(int i=1;i<=n;i++){
            factN*=i;   
        }

        //Calculate e^x with the above factorial
        etox+=pow(x,n)/factN;
    }
    
    //Output
    cout<<"The exact value of e^"<<x<<"="<<exp(x)<<endl;
    cout<<"The approx value of e^"<<x<<"="<<etox<<endl;
    

    //Exit stage right
    return 0;
}