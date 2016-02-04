/* 
 * File:   main.cpp
 * Author: Kayla Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose:  Check out IDE
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes
void sNum(unsigned int,unsigned int,int);
void sNum2(unsigned int,unsigned int,int);
//Execution Begins Here
int main(int argc, char** argv) {
//The problem to solve
cout<<endl<<"Solution to Savitch 7thEd Chap4 Prob13"<<endl;
cout<<endl<<"The Roman Numeral Conversion Program"<<endl<<endl;
    
//Declare and initialize variables
unsigned int n10s,n1s;//Number of 10^x's
int number;           //number for input in between [0,99]
//Input
do{
cout<<"Input a number between 0-99 to see the lyrics of 'Ninety-Nine Bottles of";
cout<<"Beer on the Wall.' ";
cin>>number;
}while(!(number>=0));
//Output
for (int n=1;n<=number;number--){
   
    sNum(n10s,n1s,number);
    cout<<"bottles of beer on the wall, "<<endl;
    sNum(n10s,n1s,number);
    cout<<"bottles of beer, "<<endl;
    cout<<"Take one down, pass it around,"<<endl;
    sNum2(n10s,n1s,number);
    cout<<"bottles of beer on the wall."<<endl;
}
    //Exit stage right
    return 0;
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                        String Written Number Function                      */
/******************************************************************************/
void sNum(unsigned int n10s,unsigned int n1s,int number){ 
//Calculate the number of 1000's,100's,10's,1's
n10s  =(number-number%10)/10;    //Number of 10's
n1s   =(number-n10s*10);         //Subtract off 10's to get 1's

//Output the 10's
switch(n10s){
    case 9:  cout<<"Ninety ";break;
    case 8:  cout<<"Eighty ";break;
    case 7:  cout<<"Seventy ";break;
    case 6:  cout<<"Sixty ";break;
    case 5:  cout<<"Fifty ";break;
    case 4:  cout<<"Forty ";break;
    case 3:  cout<<"Thirty ";break;
    case 2:  cout<<"Twenty ";break;
    case 1:  cout<<"Ten ";break; 
    default:break;
}

//Output the 1's
switch(n1s){
    case 9:  cout<<"Nine ";break;
    case 8:  cout<<"Eight ";break;
    case 7:  cout<<"Seven ";break;
    case 6:  cout<<"Six ";break;
    case 5:  cout<<"Five ";break;
    case 4:  cout<<"Four ";break;
    case 3:  cout<<"Three ";break;
    case 2:  cout<<"Two ";break;
    case 1:  cout<<"One ";break; 
    default:break;
    }
    
}
   

//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                        String Written Number Function 2                    */
/******************************************************************************/
void sNum2(unsigned int n10s,unsigned int n1s,int number){ 
//Calculate the number of 1000's,100's,10's,1's
n10s  =((number-number%10)/10)-1;    //Number of 10's
n1s   =((number-n10s*10))-1;         //Subtract off 10's to get 1's

//Output the 10's
switch(n10s){
    case 9:  cout<<"Ninety ";break;
    case 8:  cout<<"Eighty ";break;
    case 7:  cout<<"Seventy ";break;
    case 6:  cout<<"Sixty ";break;
    case 5:  cout<<"Fifty ";break;
    case 4:  cout<<"Forty ";break;
    case 3:  cout<<"Thirty ";break;
    case 2:  cout<<"Twenty ";break;
    case 1:  cout<<"Ten ";break; 
    default:break;
}

//Output the 1's
switch(n1s){
    case 9:  cout<<"Nine ";break;
    case 8:  cout<<"Eight ";break;
    case 7:  cout<<"Seven ";break;
    case 6:  cout<<"Six ";break;
    case 5:  cout<<"Five ";break;
    case 4:  cout<<"Four ";break;
    case 3:  cout<<"Three ";break;
    case 2:  cout<<"Two ";break;
    case 1:  cout<<"One ";break;
    default:break;
    }
   if ((number-1)==0){ 
    cout<<"Zero ";   
    }
}

