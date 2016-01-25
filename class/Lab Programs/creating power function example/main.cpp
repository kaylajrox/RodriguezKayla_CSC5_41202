/* 
 * File:   main.cpp
 * Author: Kayla Rodriguez
 * Created on January 25, 2016, 10:18 AM
 * Purpose:  Check out IDE
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
int pow(int,int);
//Execution Begins Here
int main(int argc, char** argv) {
//Variables to be using in timing 
  int begi,endi,begd,endd, loop=100000000;//Begining and ending of the integer vs. double functions   
//Declare and initialize variables
    int x;//base of the problem
    int y;//exponent of the problem
    int z; //the result of a^b
    
    //Input data
    cout<<"Input a and b i.e for a^b?"<<endl;
    cin>>x>>y;
    
    //Calculate or map inputs to outputs
    begi=static_cast<unsigned int>(time(0));
    for(int i=0;i<=loop;i++)z=pow(x,y);
    endi=static_cast<unsigned int>(time(0));
    
    //Output the results
    cout<<"Our function result"<<x<<"^"<<y<<" = "<<z<<endl;
    cout<<"Total time taken = "<<endi-begi<<"(secs)"<<endl;
    
    //compare out function with the cmath library
    double dx=x;//copy into a double
    double dy=y;//copy into a double
    double dz;
    
    //Call to math library function
    begd=static_cast<unsigned int>(time(0));
    for(int i=0;i<=loop;i++)dz=pow(dx,dy);
    endd=static_cast<unsigned int>(time(0));
    
    //Output the results
    cout<<"Library Function Result"<<dx<<"^"<<dy<<" = "<<dz<<endl;
    cout<<"Total time taken = "<<endd-begd<<"(secs)"<<endl;
    cout<<"Same as z=exp(y*loge(x))-->"<<exp(dy*log(dx))<<endl;
    //Exit stage right
    return 0;
}
int pow(int a, int b){
    if (b<=0)return 1;
    if (b==1)return a;
    int abd2=pow(a,b/2);
    if(b%2)return abd2*abd2;
    return abd2*abd2;
}


