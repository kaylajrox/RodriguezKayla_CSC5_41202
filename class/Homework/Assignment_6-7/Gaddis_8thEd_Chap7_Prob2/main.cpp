/* 
 * File:   main.cpp
 * Author: Kayla Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose: Rainfall
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
int SIZE=12;
//Function prototypes
void filRain(float[],int);
void PrtRain(float[], int);
void hLrnfal(float[], int);
void calRain(float[], int);
void avgRain(float[], int);
//Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize variables
    int SIZE=12;
    float rnfall[SIZE];
    cout<<fixed<<setprecision(2);
    filRain(rnfall,SIZE);
    PrtRain(rnfall,SIZE);
    hLrnfal(rnfall,SIZE);
    calRain(rnfall,SIZE);
    avgRain(rnfall,SIZE);
    //Exit stage right
    return 0;
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                            Highest/Lowest rainfall amounts                 */
/******************************************************************************/
void hLrnfal(float rnfall[],int SIZE){ 
    int count;
    float highest;
    float lowest;
    highest = rnfall[0];
    for (count = 1; count < SIZE; count++){
        if (rnfall[count] > highest){
            highest = rnfall[count];
        }
    }
    if (highest==rnfall[0]){
        cout<<"January had the highest rainfall amount with "<<highest<<endl;
    }
    if (highest==rnfall[1]){
        cout<<"February had the highest rainfall amount with "<<highest<<endl;
    }
    if (highest==rnfall[2]){
        cout<<"March had the highest rainfall amount with "<<highest<<endl;
    }
    if (highest==rnfall[3]){
        cout<<"April had the highest rainfall amount with "<<highest<<endl;
    }
    if (highest==rnfall[4]){
        cout<<"May had the highest rainfall amount with "<<highest<<endl;
    }
    if (highest==rnfall[5]){
        cout<<"June had the highest rainfall amount with "<<highest<<endl;
    }
    if (highest==rnfall[6]){
        cout<<"July had the highest rainfall amount with "<<highest<<endl;
    }
    if (highest==rnfall[7]){
        cout<<"August had the highest rainfall amount with "<<highest<<endl;
    }
    if (highest==rnfall[8]){
        cout<<"September had the highest rainfall amount with "<<highest<<endl;
    }
    if (highest==rnfall[9]){
        cout<<"October had the highest rainfall amount with "<<highest<<endl;
    }
    if (highest==rnfall[10]){
        cout<<"November had the highest rainfall amount with "<<highest<<endl;
    }
    if (highest==rnfall[11]){
        cout<<"December had the highest rainfall amount with "<<highest<<endl;
    }
    lowest = rnfall[0];
    for (count = 1; count < SIZE; count++){
        if (rnfall[count] < lowest){
            lowest = rnfall[count];
        }
     } 
    if (lowest==rnfall[0]){
    cout<<"January had the lowest rainfall amount with "<<lowest<<endl;
    }
    if (lowest==rnfall[1]){
        cout<<"February had the lowest rainfall amount with "<<lowest<<endl;
    }
    if (lowest==rnfall[2]){
        cout<<"March had the lowest rainfall amount with "<<lowest<<endl;
    }
    if (lowest==rnfall[3]){
        cout<<"April had the lowest rainfall amount with "<<lowest<<endl;
    }
    if (lowest==rnfall[4]){
        cout<<"May had the lowest rainfall amount with "<<lowest<<endl;
    }
    if (lowest==rnfall[5]){
        cout<<"June had the lowest rainfall amount with "<<lowest<<endl;
    }
    if (lowest==rnfall[6]){
        cout<<"July had the lowest rainfall amount with "<<lowest<<endl;
    }
    if (lowest==rnfall[7]){
        cout<<"August had the lowest rainfall amount with "<<lowest<<endl;
    }
    if (lowest==rnfall[8]){
        cout<<"September had the lowest rainfall amount with "<<lowest<<endl;
    }
    if (lowest==rnfall[9]){
        cout<<"October had the lowest rainfall amount with "<<lowest<<endl;
    }
    if (lowest==rnfall[10]){
        cout<<"November had the lowest rainfall amount with "<<lowest<<endl;
    }
    if (lowest==rnfall[11]){
        cout<<"December had the lowest rainfall amount with "<<lowest<<endl;
    }
}

//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                            Fill Rainfall Array                             */
/******************************************************************************/
void filRain(float rnfall[],int SIZE){ 

    for(int i=0;i<SIZE;i++){
        do{
        cout<<"Enter rainfall amount for month "<<(i+1)<<": ";
        cin>>rnfall[i];
        }while(rnfall[i]<0);
    }
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                       Print Rainfall Array                                 */
/******************************************************************************/
void PrtRain(float rnfall[], int SIZE){
    cout<<"Rainfall amounts for this year: "<<endl;
      for(int i=0;i<SIZE;i++){
        cout<<rnfall[i]<<endl; 
    } 
      cout<<endl;
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                       Print Rainfall Array                                 */
/******************************************************************************/
void calRain(float rnfall[], int SIZE){
    float sum=0;
      for(int a=0;a<SIZE;a++){
        sum+=rnfall[a]; 
    } 
    cout<<"The total rainfall this year is "<<sum<<endl;
    cout<<endl;
}
void avgRain(float rnfall[], int SIZE){
    cout<<fixed<<setprecision(2);
    float sum=0;
      for(int a=0;a<SIZE;a++){
        sum+=rnfall[a]; 
    } 
    cout<<"The average rainfall this year is "<<(sum/12)<<endl;
    cout<<endl;
}