/* 
    File:   main.cpp
    Author: Kayla Rodriguez
    Created on January 19, 2016, 8:35 PM
    Purpose: Midterm
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short nSoltn;//Problem Solution to display
    bool reDsply=true;    //Exit program when false
    
    //Menu to Display Solution
    do{
        //Input problem to display, i.e. Menu
        cout<<"Midterm Problem Set"<<endl;
        cout<<"Type 1 to Display Midterm Problem 1"<<endl;
        cout<<"Type 2 to Display Midterm Problem 2"<<endl;
        cout<<"Type 3 to Display Midterm Problem 3"<<endl;
        cout<<"Type 4 to Display Midterm Problem 4"<<endl;
        cout<<"Type 5 to Display Midterm Problem 5"<<endl;
        cout<<"Type 6 to Display Midterm Problem 6"<<endl;
        cout<<"Type anything else to exit "<<endl<<endl;
        cin>>nSoltn;
        //Solutions to all the problems
        switch(nSoltn){
            case 1:{
                //The problem to solve
                cout<<endl<<"Solution to Midterm Problem 1"<<endl;
                cout<<endl<<"Big Decrementing X."<<endl<<endl;
                    //Declare and initialize variables
            unsigned int num;//number to be inputted

            //Input the value 
            cout<<"Input positive integer number to create a decrementing X. ";
            cin>>num;

            //Output of Big X
            for(int n=1;n<=num;n++){
                for(int s=1;s<=num;s++){
                    if(n==s ){
                        cout<<(num-s)+1;
                    }else if ( n==(num+1)-s){
                        cout<<(num-s)+1;
                    }
                    else 
                        cout<<" ";
                    }
                cout<<endl;
                    }
                break;
            }
            case 2:{
                //The problem to solve
                cout<<endl<<"Solution to Midterm Problem 2"<<endl;
                cout<<endl<<"Conversion of Numbers to Stars "<<endl<<endl;
                //Declare and initialize variables
                char digit1;
                char digit2;
                char digit3;
                char digit4;
                    //Input data
                    cout<<"Enter a four digit number to convert to star characters in the "<<endl;
                    cout<<"reverse order of the number."<<endl;
                    cout<<"If you enter more than four digits, the program will only read up"<<endl;
                    cout<<"to the fourth digit."<<endl;
                    cout<<"Input a four digit number and press enter. ";
                    cin>>digit1;
                    cin>>digit2;
                    cin>>digit3;
                    cin>>digit4;
                    //Output
   
                    //Output the 1's
                    switch(digit4){
                        case 57:  cout<<"9 *********"<<endl;break;
                        case 56:  cout<<"8 ********"<<endl;break;
                        case 55:  cout<<"7 *******"<<endl;break;
                        case 54:  cout<<"6 ******"<<endl;break;
                        case 53:  cout<<"5 *****"<<endl;break;
                        case 52:  cout<<"4 ****"<<endl;break;
                        case 51:  cout<<"3 ***"<<endl;break;
                        case 50:  cout<<"2 **"<<endl;break;
                        case 49:  cout<<"1 *"<<endl;break;
                        case 48:  cout<<"0 "<<endl;break;
                        default: cout<<digit4<<" ? "<<endl;break;
                    }

                    //Output the 10's
                    switch(digit3){
                        case 57:  cout<<"9 *********"<<endl;break;
                        case 56:  cout<<"8 ********"<<endl;break;
                        case 55:  cout<<"7 *******"<<endl;break;
                        case 54:  cout<<"6 ******"<<endl;break;
                        case 53:  cout<<"5 *****"<<endl;break;
                        case 52:  cout<<"4 ****"<<endl;break;
                        case 51:  cout<<"3 ***"<<endl;break;
                        case 50:  cout<<"2 **"<<endl;break;
                        case 49:  cout<<"1 *"<<endl;break;
                        case 48:  cout<<"0 "<<endl;break;
                        default: cout<<digit3<<" ? "<<endl;break;
                    }

                      //Output the 100's
                    switch(digit2){
                        case 57:  cout<<"9 *********"<<endl;break;
                        case 56:  cout<<"8 ********"<<endl;break;
                        case 55:  cout<<"7 *******"<<endl;break;
                        case 54:  cout<<"6 ******"<<endl;break;
                        case 53:  cout<<"5 *****"<<endl;break;
                        case 52:  cout<<"4 ****"<<endl;break;
                        case 51:  cout<<"3 ***"<<endl;break;
                        case 50:  cout<<"2 **"<<endl;break;
                        case 49:  cout<<"1 *"<<endl;break;
                        case 48:  cout<<"0 "<<endl;break;
                        default: cout<<digit2<<" ? "<<endl;break;
                    }
                    //Output the 1000's
                    switch(digit1){
                        case 57:  cout<<"9 *********"<<endl;break;
                        case 56:  cout<<"8 ********"<<endl;break;
                        case 55:  cout<<"7 *******"<<endl;break;
                        case 54:  cout<<"6 ******"<<endl;break;
                        case 53:  cout<<"5 *****"<<endl;break;
                        case 52:  cout<<"4 ****"<<endl;break;
                        case 51:  cout<<"3 ***"<<endl;break;
                        case 50:  cout<<"2 **"<<endl;break;
                        case 49:  cout<<"1 *"<<endl;break;
                        case 48:  cout<<"0 "<<endl;break;
                        default: cout<<digit1<<" ? "<<endl;break;  
                    }
                break;
            }
            case 3:{
                //The problem to solve
                cout<<endl<<"Solution to Midterm Problem 3"<<endl;
                cout<<endl<<"Writing a Check"<<endl<<endl;
                
                //Declare and initialize variables
                string date;                        //date implemented as a string
                string payee;                       //person money will be going to
                unsigned int amount;                //amount transacted
                string acHolr;                      //name of account holder
                string reason;                      //reason for transaction
                unsigned char n1000s,n100s,n10s,n1s;//Number of 10^x's
                string payee2;                      //person money will be going to last name

                //Input data
                cout<<fixed<<setprecision(2);
                cout<<"This is a check problem, input the following information ";
                cout<<"to see your check."<<endl;
                cout<<"Please input the date in the form dd/mm/yy. "<<endl;
                cin>>date;
                cout<<"Please input the payee's first name. "<<endl;
                cin>>payee;
                cout<<"Please input the payee's last name. "<<endl;
                cin>>payee2;
                cout<<"Please input the amount. ";
                cout<<"Do not include cents, and amount has to be between 1-1000"<<endl;
                cin>>amount;
                cin.ignore(1000,'\n');
                cout<<"Please input the account holder. "<<endl;
                getline(cin,acHolr);
                cout<<"Please input the reason for transaction. "<<endl;
                getline(cin,reason);

                //Output the results
                cout<<"    "<<endl;
                cout<<acHolr<<endl;
                cout<<"STREET ADDRESS"<<endl;
                cout<<"CITY, STATE   ZIP                               Date: "<<date<<endl;
                cout<<"Pay to the Order of: "<<payee<<" "<<payee2<<"              ";
                cout<<"             $ "<<static_cast<float>(amount)<<endl<<endl;
                //Amount Conversion
                //Calculate the number of 1000's,100's,10's,1's
                n1000s=(amount-amount%1000)/1000;//Number of 1000's
                amount=(amount-n1000s*1000);     //Subtract off 1000's
                n100s =(amount-amount%100)/100;  //Number of 100's
                amount=(amount-n100s*100);       //Subtract off 100's
                n10s  =(amount-amount%10)/10;    //Number of 10's
                n1s   =(amount-n10s*10);         //Subtract off 10's to get 1's

                //Output the 100's
                switch(n100s){
                    case 9:  cout<<"Nine Hundred ";break; 
                    case 8:  cout<<"Eight Hundred ";break;
                    case 7:  cout<<"Seven Hundred ";break;
                    case 6:  cout<<"Six Hundred ";break;
                    case 5:  cout<<"Five Hundred ";break;
                    case 4:  cout<<"Four Hundred ";break;
                    case 3:  cout<<"Three Hundred ";break;
                    case 2:  cout<<"Two Hundred ";break;
                    case 1:  cout<<"One Hundred ";break;
                }

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
                }
                cout<<"and no/100s Dollars";

                cout<<"\n\nBANK OF CSC5 "<<endl<<endl;
                cout<<"FOR: "<<reason<<"                         ";
                cout<<"        "<<acHolr<<endl<<endl;
    
                break;
            }
            case 4:{
                //The problem to solve
                cout<<endl<<"Solution to Midterm Problem 4"<<endl;
                cout<<endl<<"ISP Packages"<<endl<<endl;
                //Declare and initialize variables
                char package;      //package a,b, or c
                float monBill;     //Current monthly bill   
                unsigned int nHrs; //number of hours used

                //Input
                cout<<"An ISP has 3 different subscription packages. "<<endl;
                cout<<"Package A is $16.85 per month,and 5 hours access."<<endl;
                cout<<"Additional hours are $0.80 up to 20 hours then $1 for ";
                cout<<"all additional hours."<<endl;
                cout<<"Package B is  $23.85 per month, 15 hours access."<<endl;
                cout<<"Additional hours are $0.65 up to 25 hours then $0.70 for ";
                cout<<"each hour above this limit."<<endl;
                cout<<"Package C $29.55 per month unlimited access. "<<endl;
                cout<<"Which of these packages do you have? a, b, or c? "<<endl;
                cin>>package;
                package=toupper(package);
                //Output 
                //Precision to only two decimal places
                cout<<fixed<<setprecision(2);
                //Loop to only choose A,B, or C
                if (!(package=='A'||package=='B'||package=='C')){   
                    do{
                        cout<<"You must type a, b, or c to continue. "<<endl;
                        cin>>package;
                        package=toupper(package);
                    }while(!(package=='A'||package=='B'||package=='C'));
                }
                //Output - Monthly Bill Calculation
                if (package=='A'){
                        cout<<"How many hours have you used? ";
                        cin>>nHrs;
                        //nHrs Decision
                        if (nHrs<=5){
                            //Calculation
                            monBill=16.85f;
                            //Output for hour usage less than or equal to five
                            cout<<"Your monthly bill is $"<<monBill<<endl;
                        }else if (nHrs>5&&nHrs<=20){
                            //Calculation of monthly bill when hours are between [5,20]
                            monBill=16.85f+ 0.80f*(nHrs-5);
                            //Output
                            cout<<"Your monthly bill is $"<<monBill<<endl;
                        }else{
                            //Calculation of monthly bill when hours are between [5,20]
                            monBill=16.85f+ 0.80f*15+1.0f*(nHrs-20);
                            //Output
                            cout<<"Your monthly bill is $"<<monBill<<endl;
                        }
                }else if (package=='B'){
                        cout<<"How many hours have you used? ";
                        cin>>nHrs;
                        //nHrs Decision
                        if (nHrs<=15){
                            //Calculation
                            monBill=23.85f;
                            //Output for hour usage less than or equal to five
                            cout<<"Your monthly bill is $"<<monBill<<endl;
                        }else if (nHrs>15&&nHrs<=25){
                            //Calculation of monthly bill when hours are between [5,20]
                            monBill=23.85f+ 0.65f*(nHrs-15);
                            //Output
                            cout<<"Your monthly bill is $"<<monBill<<endl;
                        }else{
                            //Calculation of monthly bill when hours are between [5,20]
                            monBill=23.85f+ 0.65f*10+0.70f*(nHrs-25);
                            //Output
                            cout<<"Your monthly bill is $"<<monBill<<endl;
                        }
                }else{
                        cout<<"How many hours have you used? ";
                        cin>>nHrs;
                        monBill=29.55f;
                        cout<<"Package c has unlimited access."<<endl;
                        cout<<"Your monthly bill is a constant $"<<monBill<< " per month. ";
                        cout<<endl;
                }
                //Package Recommendation
                //Switching to package A
                if (package=='B'&&nHrs<=13){
                    cout<<"With this amount of hours, if you switched to package A, ";
                    cout<<"then you would save $"<<(monBill-(16.85f+ 0.80f*(nHrs-5)))<<"."
                        <<endl;
                }else if (package=='C'&&nHrs<=13){
                    cout<<"With this amount of hours, if you switched to package A, ";
                    cout<<"then you would save $"<<(monBill-(16.85f+ 0.80f*(nHrs-5)))<<"."
                        <<endl;
                //Switching to package B
                }else if (package=='A'&&(nHrs>=13&&nHrs<=23)){
                    cout<<"With this amount of hours, if you switched to package B, ";
                    cout<<"then you would save $"<<(monBill-(23.85f+ 0.65f*(nHrs-15)))<<"."
                        <<endl;
                }else if (package=='C'&&(nHrs>=13&&nHrs<=23)){
                    cout<<"With this amount of hours, if you switched to package B, ";
                    cout<<"then you would save $"<<(monBill-(23.85f+ 0.65f*(nHrs-15)))<<"."
                        <<endl;
                //Switching to package C
                }else if (package=='A'&&nHrs>23){
                    cout<<"With this amount of hours, if you switched to package C, ";
                    cout<<"then you would save $"<<(monBill-29.55f)<<"."<<endl;
                }else if (package=='B'&&nHrs>23){
                    cout<<"With this amount of hours, if you switched to package C, ";
                    cout<<"then you would save $"<<(monBill-29.55f)<<"."<<endl;
                }else{
                    cout<<"You are saving money with this package, you should continue ";
                    cout<<"with this package."<<endl;
                }

                break;
            }
            case 5:{
                //The problem to solve
                cout<<endl<<"Solution to Midterm Problem 5"<<endl;
                cout<<endl<<"Gross Pay"<<endl<<endl;
                //Declare and initialize variables
                unsigned int nHrs;     //Number of hours worked per week
                float wage;            //hourly wage
                float totPayG;         //gross total pay

                //Input
                cout<<"What is your hourly wage? ";
                cin>>wage;
                cout<<"How many hours did you work this week? ";
                cin>>nHrs;
                //Output 
                cout<<fixed<<setprecision(2);
                if (nHrs<=20){
                    //Calculate
                    totPayG=nHrs*wage;
                    //Output
                    cout<<"Your Gross pay is "<<"$"<<totPayG<<endl;
                }else if (nHrs>20&&nHrs<40){
                    //Calculate
                    totPayG=20*wage+(wage*1.5f)*(nHrs-20);
                    //Output
                    cout<<"Your Gross pay is "<<"$"<<totPayG<<endl;
                }else{
                    //Calculate
                    totPayG=20*wage+(wage*1.5f)*20+(wage*2.0f)*(nHrs-40);
                    //Output
                    cout<<"Your Gross pay is "<<"$"<<totPayG<<endl;
                }
                break;
            }
            case 6:{
                //The problem to solve
                cout<<endl<<"Solution to Midterm Problem 6"<<endl;
                cout<<endl<<"The Sum of a Sequence"<<endl<<endl;
                //Declare and initialize variables
                unsigned int nTerms;//number of terms in the sequence
                int x;//number to be inputted
                float sum=0;

                //Input the value x
                cout<<"This program outputs the sum of a sequence with given x ";
                cout<<"and number of terms. "<<endl;
                cout<<"Input an integer value (x). "<<endl;
                cin>>x;
                cout<<"How many terms are in this sequence? ";
                cin>>nTerms;

                //Calculation of sum
                for(int n=1;n<=nTerms;n++){   
                    for(int i=n-1;i<n;i++){
                        sum=((n-i)/pow(x,i))+sum; 
                    }
                }
                 cout<<"The sum of the sequence is "<<sum<<endl<<endl;


                break;
            }
            default:{
                cout<<"Exiting the Program"<<endl;
                reDsply=false;
            }
        }
    }while(reDsply);

    //Exit stage right
    return 0;
}