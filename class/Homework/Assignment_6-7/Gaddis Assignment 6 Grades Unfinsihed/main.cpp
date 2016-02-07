/* 
 * File:   main.cpp
 * Author: Kayla Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose: Students grades
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants
const int COLS=5;
const int ROWS=4;
//Function prototypes
void names(string[]);
void namesP(string[]);
void filScor(string[],int);
void PrntSco(string[], int);


//Execution Begins Here
int main(int argc, char** argv) {
//Declare and initialize variables
    int scores[ROWS][COLS];
    string student[COLS];
    
    names(student);
    for(int i=0;i<ROWS;i++){
       cout<<"Enter scores for "<<(student[i])<<":"<<endl;
       for(int j=0;j<COLS;j++){
            cin>>scores[i][j];
       }
       cout<<endl;
    }
     for(int i=0;i<COLS;i++){
        cout<<endl<<(student[i])<<"'s scores: ";
        for(int j=0;j<ROWS;j++){
            cout<<scores[i][j]<<" ";
        }
        cout<<endl;
    }  
    //names(student);
    //namesP(student);
   // filScor(student, scores);
    //PrntSco(student, scores);
    //filScor(student,scores);
   // PrntSco(student,scores);
    
    //Exit stage right
    return 0;
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                            Names of Students                               */
/******************************************************************************/
void names(string student[COLS]){ 
    for(int n=0;n<COLS;n++){
       cout<<"Enter a student name "<<(n+1)<<endl;
       cin>>student[n];
   } 
}

//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                            Print Array                                     */
/******************************************************************************/
void filScor(string student[COLS],int scores[ROWS][COLS]){ 
    for(int i=0;i<ROWS;i++){
       cout<<"Enter scores for "<<(student[i])<<":"<<endl;
       for(int j=0;j<COLS;j++){
            cin>>scores[i][j];
       }
       cout<<endl;
   }
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                       Print Array                                          */
/******************************************************************************/
void PrntSco(string student[COLS], int scores[ROWS][COLS]){
    for(int i=0;i<COLS;i++){
        //cout<<endl<<"Student "(student[i])<<" scores: ";
        for(int j=0;j<ROWS;j++){
            cout<<scores[j][i]<<" ";
        }
        cout<<endl;
    }   
}

void namesP(string student[COLS]){ 
    cout<<"The student's names are: "<<endl;
    for(int n=0;n<COLS;n++){
       cout<<student[n]<<endl; 
   } 
}
