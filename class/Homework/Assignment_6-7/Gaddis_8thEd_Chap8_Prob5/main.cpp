/* 
 * File:   main.cpp
 * Author: Kayla Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose: Rainfall Modification
 * Gaddis 8thEd Chap8 Prob5
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void filRain(float[],int);
void PrtRain1(float[], int);
void PrtRain2(float[], int,string[]);
void hLrnfal(float[], int,string[]);
void calRain(float[], int);
void avgRain(float[], int);
void sortRain(float[], int);
//Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize variables
    int SIZERN=12;
    float rnfall[SIZERN];
    string months[12]={"January","February","March","April","May","June","July",
    "August","September","October","November","December"};
   
    //Precision
    cout<<fixed<<setprecision(2);
    //Function output
    filRain(rnfall,SIZERN);
    hLrnfal(rnfall,SIZERN,months);
    calRain(rnfall,SIZERN);
    avgRain(rnfall,SIZERN);
    PrtRain2(rnfall,SIZERN,months);
    sortRain(rnfall,SIZERN);
    PrtRain1(rnfall,SIZERN);

    //Exit stage right
    return 0;
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                            Highest/Lowest rainfall amounts                 */
/******************************************************************************/
void hLrnfal(float rnfall[],int SIZERN,string months[]){
    int count;
    float highest;
    float lowest;
    highest = rnfall[0];
    for (count = 1; count < SIZERN; count++){
        if (rnfall[count] > highest){
            highest = rnfall[count];
            cout<<months[count]<<" had the most rain: "<<highest<<endl;
        }
    }
    lowest = rnfall[0];
    for (count = 1; count < SIZERN; count++){
        if (rnfall[count] < lowest){
            lowest = rnfall[count];
            cout<<months[count]<<" had the least rain: "<<lowest<<endl;
        }
    } 
}    
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                            Fill Rainfall Array                             */
/******************************************************************************/
void filRain(float rnfall[],int SIZERN){ 

    for(int i=0;i<SIZERN;i++){
        do{
        cout<<"Enter rainfall amount for month "<<(i+1)<<": ";
        cin>>rnfall[i];
        }while(rnfall[i]<0);
    }
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                       Print Rainfall Array(sorted)                         */
/******************************************************************************/
void PrtRain1(float rnfall[], int SIZERN){
    cout<<"Rainfall amounts from Highest to lowest: "<<endl;
      for(int i=0;i<SIZERN;i++){
        cout<<rnfall[i]<<endl; 
    } 
      cout<<endl;
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                       Calculate Rainfall Array                             */
/******************************************************************************/
void calRain(float rnfall[], int SIZERN){
    float sum=0;
      for(int a=0;a<SIZERN;a++){
        sum+=rnfall[a]; 
    } 
    cout<<"The total rainfall this year is "<<sum<<endl;
    cout<<endl;
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                       Average Rainfall Array                               */
/******************************************************************************/
void avgRain(float rnfall[], int SIZERN){
    float sum=0;
      for(int a=0;a<SIZERN;a++){
        sum+=rnfall[a]; 
    } 
    cout<<"The average rainfall this year is "<<(sum/12)<<endl;
    cout<<endl;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Mark Sort
//Inputs:
//  a->Array or List
//  n->Size of List
//Outputs:
//  a->Sorted Array
//******************************************************************************
void sortRain(float rnfall[],int SIZERN){
    //Find smallest in each successive list
    //From the beginning of the list to the end
    //Outside Element of the list
    for(int i=0;i<(SIZERN-1);i++){
        //Inside List above the Element
        for(int j=i+1;j<SIZERN;j++){
            //Swap
            if(rnfall[i]<rnfall[j]){
                int temp =rnfall[j];
                rnfall[j]=rnfall[i];
                rnfall[i]=temp;//Exclusive or XOR a=b
            }
        }
    }
}
void PrtRain2(float rnfall[], int SIZERN,string months[]){
     cout<<"Rainfall amounts this Year: "<<endl;
      for(int i=0;i<SIZERN;i++){
        cout<<months[i]<<": "<<rnfall[i]<<endl; 
    } 
      cout<<endl;
}
