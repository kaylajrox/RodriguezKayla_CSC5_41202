/* 
 * Author: Kayla Rodriguez
 * Created on January 11, 2016, 8:59 AM
 * Purpose: Truth Table
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
   
    
    //Create Heading
    cout<< "X Y !X !Y  X&&Y  X||Y  X^Y  (X^Y)^Y  (X^Y)^X  !(X&&Y)  !X||!Y  !(X||Y)  !X&&!Y"<<endl;
    
    //First Row
    
    //Declare Variables
    bool x=true, y=false;
    
    //Output
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  "; 
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<((x^y)^y?'T':'F')<<"        ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"        ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"     "<<endl;
     
    
    //Second Row
    x=true;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<((x^y)^y?'T':'F')<<"        ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"        ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"     "<<endl;
     
    //Third Row
    x=false; y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<((x^y)^y?'T':'F')<<"        ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"        ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"     "<<endl;
     
      
    //Fourth Row
    x=false; y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<((x^y)^y?'T':'F')<<"        ";
    cout<<((x^y)^x?'T':'F')<<"        ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"        ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"     "<<endl;
    
    
    //Swap Using Temp
    
    //Swap using exclusive or operator 
   
    
    //Exit Stage Right
            
    
    }
