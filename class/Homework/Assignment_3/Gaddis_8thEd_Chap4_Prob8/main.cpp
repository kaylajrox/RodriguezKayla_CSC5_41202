/* 
 * Author: Kayla Rodriguez
 * Created on January 5, 2016, 9:20 PM
 * Purpose: 
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
    char color1; //first primary color choice 
    char color2; //second primary color choice
    char choice;
    do {
        //Input data
        cout<<"Enter two primary colors (red, yellow, blue) ";
        cout<<"press b for blue, r for red, and y for yellow"<<endl;
        cin>>color1;
        cin>>color2;
        if (color1=='r'&&color2=='b'){
            cout<<"These two colors mix to create purple. "<<endl<<endl;
        }else if (color1=='r'&&color2=='y'){
            cout<<"These two colors mix to create orange. "<<endl<<endl;
        }else if(color1=='y'&&color2=='b'){
            cout<<"These two colors mix to create green. "<<endl<<endl;
        }else {
            cout<<"ERROR! Not one of choices"<<endl<<endl;
        }
            

        cout<<"Would you like to repeat the program? "<<endl;
        cout<<"y=yes anything else to exit"<<endl;
        cin>>choice;
    }while(choice=='y');
    

    
    
    //Exit stage right
    return 0;
}
