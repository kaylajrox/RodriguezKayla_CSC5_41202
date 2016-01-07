/* 
 * Author: Kayla Rodriguez
 * Created on January 7, 2016, 10:46 AM
 * Purpose: How far does it drop?
 */

//System Libraries
#include <iostream>//I/O Library
#include <cstdlib> //Random function location
#include <cmath>   //Math functions
#include <ctime>   //Time to set randome seed
#include <iomanip> //Format Library
#include <fstream> //Reading/Writing to a file

using namespace std;

//User Libraries

//Global Constant
const float  GRAVITY=32.174f;//Sea Level Earth Acceleration Constant ft/sec^2


//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    ofstream out;//Declare a file stream object called out
    float drpTime,distance; //Time in sec and Distance in feet
    
    //Inputting the time with a random number
    drpTime=rand()%11+10;  //[10,20]secs
    const int SIZE=21;
    char fileNam[SIZE]="DropDistance.dat";
    out.open(fileNam);
    
    //Calculate  
    distance=0.5f*GRAVITY*pow(drpTime,2);
    
    //Output the results
    cout<<"Drop Time = "<<drpTime<<" (sec)"<<endl;
    cout<<fixed<<setprecision(3)<<showpoint;//Format the distance to 3 decimals
    cout<<"Free Fall Distance x2 ="<<setw(9)<<distance<<"(ft)"<<endl;
    
    //Output the results to a file
    out<<fixed<<setprecision(3)<<showpoint;//Format the Distance to 3 decimals
    out<<"Free Fall Distance exp(log)="<<setw(10)<<distance<<"(ft)"<<endl;
    
    //Exit stage right and make sure to close files
    out.close();
    return 0;
}