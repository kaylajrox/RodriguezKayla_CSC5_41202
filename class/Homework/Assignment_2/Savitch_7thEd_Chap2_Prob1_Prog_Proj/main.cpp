/* 
 * Author: Kayla Rodriguez
 * Created on January 5, 2016, 9:20 PM
 * Purpose: Conversion from Ounces to Metric Tons of Cereal Boxes
 */
 
//System Libraries
#include <iostream>
using namespace std;
 
//User Libraries
 
//Global Constant
float CNVOTM=35273.92f;  //Conversion from ounces to metric tons
 
//Function Prototypes
 
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float wghtBox;     //weight of one box in ounces
    float metrcTn;     //a metric ton
    unsigned int nBox;          //Number of boxes needed to make one metric ton
    float wghtMT;       //Weight of one box in metric tons
    char choice;
    do {
            //Input data
       cout<<"What is the weight of a box of cereal in ounces? ";
       cin>>wghtBox;

        //Calculate
        wghtMT=wghtBox/CNVOTM;
        nBox=CNVOTM/wghtBox;

        //Output

        cout<<"The weight of one cereal box in metric tons is: "<<wghtMT<<endl;
        cout<<"The number of boxes needed to needed to yield one metric ton is: "<<nBox<<endl;
        cout<<"You will need "<<nBox<<" boxes to have one metric ton of cereal boxes."<<endl;
        
        cout<<"Would you like to repeat the program? "<<endl;
        cout<<"y=yes anything else to exit"<<endl;
        cin>>choice;
    }while(choice=='y');
    

    
    
    //Exit stage right
    return 0;
}