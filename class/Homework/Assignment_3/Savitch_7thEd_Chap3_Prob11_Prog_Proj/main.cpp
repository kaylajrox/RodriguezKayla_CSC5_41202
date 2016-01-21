/* 
 * Author: Kayla Rodriguez
 * Created on January 5, 2016, 9:20 PM
 * Purpose: Quadratic formula 
 */
 
//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
//User Libraries
 
//Global Constant

 
//Function Prototypes
 
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float a;      //coefficient of quadratic variable
    float b;      //coefficient of linear variable
    float c;      //constant in function
    float root1;  //root 1 in real 
    float root2;  //root 2 in imaginary 
    float detmin; //determinant
    float root1C; //first complex root
    float root2C; //second complex root
    float detminC;//complex determinant 
    char choice;
    do {
        //Input data
        cout<<"Given the formula ax^2+bx+c=0, we want to know the roots of ";
        cout<<"a quadratic equation given in that form."<<endl;
        cout<<"Please input a value "<<endl;
        cin>>a;
        cout<<"Please input b value "<<endl;
        cin>>b;
        cout<<"Please input c value "<<endl;
        cin>>c;
        
        //Calculation
        root1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
        root2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
        detmin=(pow(b,2))-4*a*c;
        detminC=-((pow(b,2))-4*a*c);
        root1C=(-b+sqrt(detminC))/(2*a);
        root2C=(-b-sqrt(detminC))/(2*a);
        
        //Output outcomes
        cout<<fixed<<setprecision(3);
        if (detmin==0){
            cout<<"There is one real root and the root is ";
            cout<<root1<<endl<<endl;
        }else if (detmin>0){
            cout<<"There are two real roots and the roots are ";
            cout<<root1<<" and ";
            cout<<root2<<endl<<endl;
        }else{
            cout<<"There are two complex roots and the roots are ";
            cout<<"("<<-b<<"+";
            cout<<sqrt(detminC)<<"*i)";
            cout<<"/"<<2*a<<" and"<<endl;
            cout<<"("<<-b<<"-";
            cout<<sqrt(detminC)<<"*i)";
            cout<<"/"<<2*a<<endl<<endl; 
        }
        cout<<"Would you like to repeat the program? "<<endl;
        cout<<"y=yes anything else to exit"<<endl;
        cin>>choice;
    }while(choice=='y');

    //Exit stage right
    return 0;
}