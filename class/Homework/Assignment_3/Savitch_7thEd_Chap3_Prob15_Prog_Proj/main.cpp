/* 
 * Author: Kayla Rodriguez
 * Created on January 5, 2016, 9:20 PM
 * Purpose: Buoyancy
 */
 
//System Libraries
#include <iostream>
#include <cmath>
using namespace std;
 
//User Libraries
 
//Global Constant
float PI=atan(1)*4;
 
//Function Prototypes
 
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float Fb; //buoyant force
    float v;  //volume
    float y;  //specific weight of the of the object
    float r; //radius
   
    //Input data
    cout<<"This program tells you whether a spheric object will sink or float."<<endl;
    cout<<"Please input the weight of the object in lbs."<<endl;
    cin>>y;
    cout<<"Please input the radius of the sphere in ft."<<endl;
    cin>>r;
    
    //Calculation
    v=4/3*PI*pow(r,3);
    Fb=v*y;
    
    //Output
    cout<<"The volume is "<<v<<endl;
    cout<<"The bouyant force is "<<Fb<<endl;
    if (Fb>=y)
        cout<<"The sphere will float. ";
    else 
        cout<<"The sphere will sink.  ";
    
    //Exit stage right
    return 0;
}