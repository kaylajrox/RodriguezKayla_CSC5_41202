/* 
 * Author: Kayla Rodriguez
 * Created on January 5, 2016, 9:20 PM
 * Purpose: 
 */
 
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
 
//User Libraries
 
//Global Constant

//Function Prototypes
 
//Execution Begins Here
int main(int argc, char** argv) 
{
    //Declare and initialize variables
    char day;
    int hr;
    char letr;
    char choice;
    float nMin;
    float cost;
    int min;
    int num;
    char repeat;
    do {
        cout<<fixed<<setprecision(2);
        //Input
        cout<<"Did you make your call on a weekday (Monday-Friday)?"<<endl;
        do 
        { 
            cout<<"Enter y for yes, and n for no "<<endl;
            cin>>choice;
            if (choice=='y')
            {
                do{
                    cout<<"Did you make your call before noon (am) or did you make it after noon (pm)? "<<endl;
                    cout<<"Press a for am and p for pm ";
                    cin>>letr;
                    letr=toupper(letr);
                }while(!(letr=='P'||letr=='A'));
                cout<<"Did you make your call after 6PM? "<<endl;
                do{
                    cout<<"Press 1 for before and 2 for after ";
                    cin>>num;
                    if (num==1){
                        cout<<"What was the duration of your call? Enter number of minutes. "<<endl;
                        cin>>nMin;
                        cost=nMin*0.40f;
                        cout<<"Your call cost $"<<cost<<endl;
                        cout<<"What time did your call start? (using 24 hour system)"<<endl;
                        cout<<"Enter hours ";
                        cin>>hr;
                        cout<<"Enter minutes ";
                        cin>>min;
                        cout<<"Your call started at "<<hr<<":"<<min<<endl;
                    }else 
                    {
                        cout<<"What was the duration of your call? Enter number of minutes. "<<endl;
                        cin>>nMin;
                        cost=nMin*0.25f;
                        cout<<"The cost of your call was $"<<cost<<endl;
                        cout<<"What time did your call start? (using 24 hour system)"<<endl;
                        cout<<"Enter hours ";
                        cin>>hr;
                        cout<<"Enter minutes ";
                        cin>>min;
                        cout<<"Your call started at "<<hr<<":"<<min<<"."<<endl;
                    }
                }while(!(num==1||num==2)); 
            }else if (choice=='n') 
                {
                cout<<"Your call was made on either a Saturday or Sunday which ";
                cout<<"means your call was charged at $0.15 a minute."<<endl;
                cout<<"What time did your call start? (using 24 hour system)"<<endl;
                cout<<"Enter hours ";
                cin>>hr;
                cout<<"Enter minutes ";
                cin>>min;
                cout<<"Your call was made at "<<hr<<":"<<min<<"."<<endl;
                cout<<"What was the duration of your call in minutes? "<<endl;
                //Calculation 
                cin>>nMin;
                cost=nMin*0.15f;
                cout<<"Your call cost "<<cost<<endl;     
                }
        
        }while((letr=='y'||letr=='n'));
        cout<<"Would you like to play again? "<<endl;
        cout<<"r= repeat anything else to exit"<<endl<<endl;
        cin>>repeat;
    }while(repeat=='r');

    //Exit stage right
    return 0;
    
}

