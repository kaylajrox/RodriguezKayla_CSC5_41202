/* 
 * Author: Kayla Rodriguez
 * Created on January 10, 2016, 4:50 PM
 * Purpose: Distance of a Free-falling Object 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
const float  GRAVITY=32; //Sea Level Earth Acceleration Constant ft/sec^2

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned int nSec;      //Declare inputs, number of seconds
    unsigned int distnce;   //total distance traveled by free falling object
    
    //Input  
    cout<<"Enter a number of seconds: "<<endl;
    cin>>nSec;
   
    //Calculate the total
    distnce= 0.5f*GRAVITY*nSec*nSec;
    
    //Output the results
    
    cout<<"Distance traveled by a free falling object without resistance or friction: "<<endl;
    cout<<distnce;
    
    return 0;
}
   
    