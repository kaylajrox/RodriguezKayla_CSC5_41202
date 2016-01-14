/* 
 * Author: Kayla Rodriguez
 * Created on January 5, 2016, 9:20 PM
 * Purpose: Addition
 */
 
//System Libraries
#include <iostream>
using namespace std;
 
//User Libraries
 
//Global Constant

//Function Prototypes
 
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    int n6;
    int n7;
    int n8;
    int n9;
    int n10;
        //Input data
        cout<<"Enter in 10 whole numbers(positive and negative)"<<endl;
        cin>>n1;
        cin>>n2;
        cin>>n3;
        cin>>n4;
        cin>>n5;
        cin>>n6;
        cin>>n7;
        cin>>n8;
        cin>>n9;
        cin>>n10;
        int sumTot=0;
        unsigned int sumTotP=0;
        int sumTotN=0;
        
        //Calculate n1
        if (n1>0){
            sumTot += n1;
            sumTotP += n1;
        }   
        else
        {
            sumTot += n1;
            sumTotN += n1;
        }
        //calculate n2
        if (n2>0){
            sumTot += n2;
            sumTotP += n2;
        }   
        else
        {
            sumTot += n2;
            sumTotN += n2;
        }
        //calculate n3
        if (n3>0){
            sumTot += n3;
            sumTotP += n3;
        }   
        else
        {
            sumTot += n3;
            sumTotN += n3;
        }
        //calculate n4
        if (n4>0){
            sumTot += n4;
            sumTotP += n4;
        }   
        else
        {
            sumTot += n4;
            sumTotN += n4;
        }
        //calculate n5
        if (n5>0){
            sumTot += n5;
            sumTotP += n5;
        }   
        else
        {
            sumTot += n5;
            sumTotN += n5;
        }
        //calculate n6
        if (n6>0){
            sumTot += n6;
            sumTotP += n6;
        }   
        else
        {
            sumTot += n6;
            sumTotN += n6;
        }
        //calculate n7
        if (n7>0){
            sumTot += n7;
            sumTotP += n7;
        }   
        else
        {
            sumTot += n7;
            sumTotN += n7;
        }
        //calculate n8
        if (n8>0){
            sumTot += n8;
            sumTotP += n8;
        }   
        else
        {
            sumTot += n8;
            sumTotN += n8;
        }
        //calculate n9
        if (n9>0){
            sumTot += n9;
            sumTotP += n9;
        }   
        else
        {
            sumTot += n9;
            sumTotN += n9;
        }
        //calculate n10
        if (n10>0){
            sumTot += n10;
            sumTotP += n10;
        }   
        else
        {
            sumTot += n10;
            sumTotN += n10;
        }
        
        //Output
        cout<<"The sum of all the numbers total is "<<sumTot<<endl;
        cout<<"The sum of all the numbers greater than zero is "<<sumTotP<<endl;
        cout<<"The sum of all the numbers less than zero is "<<sumTotN<<endl;
      
    //Exit stage right
    return 0;
}