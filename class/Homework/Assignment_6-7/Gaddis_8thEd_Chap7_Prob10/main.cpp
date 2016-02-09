/* 
 * File:   main.cpp
 * Author: Kayla Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose: Driver's License Exam
 * Gaddis 8thEd Chap7 Prob10
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void correct(char[], char[]);
//Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize variables
    //correct answers
    char answers[20]={'A','D','B','B','C',
                      'B','A','B','C','D',
                      'A','C','D','B','D',
                      'C','C','A','D','B'};
    char stuAns[20]; //Student answers
    //Input
    cout<<"Enter the student's answers for the 20 multiple choice questions."<<endl;
    for(int i=0;i<20;i++){
        do{
        cout<<"Answer to problem number "<<i+1<<" : ";
        cin>>stuAns[i];
        stuAns[i]=toupper(stuAns[i]);
        }while(!(stuAns[i]=='A'||stuAns[i]=='B'||stuAns[i]=='C'||stuAns[i]=='D'));
    }
    
    //Output the results
    correct(stuAns,answers);
    //Exit stage right
    return 0;
}
void correct(char stuAns[], char answers[]){
    int sum=0;
    for(int i=0;i<20;i++){
        if(stuAns[i]==answers[i]){
            sum++;     
        }
    }
    for (int i=0;i<20;i++){
        cout<<stuAns[i]<<" "<<endl;
    }
    if(sum>=15){
        cout<<"You passed the written portion of your exam."<<endl;
        cout<<"You answered "<<sum<<" correctly."<<endl;
    }else{
        cout<<"You failed the written portion of your exam."<<endl;
        cout<<"You answered "<<20-sum<<" incorrectly."<<endl;
    }
    cout<<"The ones you got wrong: "<<endl;
    if(20-sum==0){
        cout<<"perfect score!"<<endl;
    }
    for(int i=0;i<20;i++){
       if(!(stuAns[i]==answers[i])){
           cout<<"Number "<<i+1<<endl;
       } 
    } 
    
}