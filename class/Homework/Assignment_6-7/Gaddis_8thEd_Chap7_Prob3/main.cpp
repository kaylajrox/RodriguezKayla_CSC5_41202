/* 
 * File:   main.cpp
 * Author: Kayla Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose:  Chips and Salsa
 * Gaddis 8thEd Chap7 Prob3
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void PrtSlsa(string[],int[],int);//print report
void hLSlsa(string[],int[],int); //Highest/lowest sales 
void calSlsa(string[],int,int[]);//calculate sales total

//Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize variables
    int JARS=5;
    string salsa[JARS]={"Mild","Medium","Sweet","Hot","Zesty"};
    int num[JARS];
    //Input
    cout<<"Enter the number of jars sold for each type of salsa "<<endl;
    for(int i=0;i<JARS;i++){
        do{
        cout<<salsa[i]<<":"<<endl;
        if (num<0){
            cout<<"No negative numbers."<<endl;
        }
        cin>>num[i];
        }while(num<0);
    }    

    //Output the results
    PrtSlsa(salsa,num,JARS);
    calSlsa(salsa,JARS,num);
    hLSlsa(salsa,num,JARS);
    

    //Exit stage right
    return 0;
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                            Highest/Lowest Sales                            */
/******************************************************************************/
void hLSlsa(string salsa[],int num[],int JARS){ 
    int count;
    int highest;
    int lowest;
    highest = num[0];
    for (count = 1; count < JARS; count++){
        if (num[count] > highest){
            highest = num[count];
        }
    }
    for(int i=0;i<5;i++){
        if(highest==num[i]){
            cout<<salsa[i]<<" sold the most jars: "<<num[i]<<endl;
        }
    }
    lowest = num[0];
    for (count = 1; count < JARS; count++){
        if (num[count] < lowest){
            lowest = num[count];
            cout<<salsa[count]<<" sold the most jars: "<<num[count]<<endl;
        }
    } 
     for(int i=0;i<5;i++){
        if(lowest==num[i]){
            cout<<salsa[i]<<" sold the least jars: "<<num[i]<<endl;
        }
    }
    
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                           Sum Salsa                                        */
/******************************************************************************/
void calSlsa(string salsa[],int JARS,int num[]){ 
    int sum=0;
    for(int i=0;i<JARS;i++){
        sum+=num[i];
    } 
    cout<<"Salsa Report"<<endl;
    cout<<"The total number of jars sold this month was "<<sum<<" jars."<<endl;  
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                            Print Salsa                                     */
/******************************************************************************/
void PrtSlsa(string salsa[],int num[],int JARS){ 
    for(int i=0;i<JARS;i++){
        cout<<salsa[i]<<" sold "<<num[i]<<" jars."<<endl;
    }
}