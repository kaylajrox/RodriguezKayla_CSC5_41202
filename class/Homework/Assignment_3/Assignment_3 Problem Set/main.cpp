/* Author: Kayla Rodriguez
 * Created on January 19, 2016, 8:22 AM
 * Purpose Assignment 3 Problem Set
 */
 
//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;
 
//User Libraries
 
//Global Constant
const char CNVPERC=100;
float PI=atan(1)*4;
//Function Prototypes
 
//Execution Begins Here
int main(int argc, char** argv) {
        //Declare and initialize variables
        unsigned short nSoltn; //Problem Solution to display
        bool reDsply=true;//Exit program when false
    
       //Menu to Display Solution
        do{
            //Input problem to display, i.e. Menu
            cout<<"\nAssignment 3 Problem Set"<<endl;
            cout<<"Type 1 to Display Savitch 8thEd Chap3 Prob10"<<endl;
            cout<<"Type 2 to Display Savitch 8thEd Chap3 Prob11"<<endl;
            cout<<"Type 3 to Display Savitch 7thEd Chap3 Prob2 "<<endl;
            cout<<"Type 4 to Display Savitch 7thEd Chap3 Prob6 "<<endl;
            cout<<"Type 5 to Display Savitch 7thEd Chap3 Prob15 "<<endl;
            cout<<"Type 6 to Display Savitch 7thEd Chap3 Prob16 "<<endl;
            cout<<"Type 7 to Display Savitch 7thEd Chap3 Prob1 "<<endl;
            cout<<"Type 8 to Display Savitch 7thEd Chap3 Prob5 "<<endl;
            cout<<"Type 9 to Display Savitch 9thEd Chap3 Prob3 "<<endl;
            cout<<"Type 10 to Display Gaddis 8thEd Chap4 Prob8"<<endl;
            cout<<"Type anything else to exit "<<endl;
            cin>>nSoltn;
            //Solutions to all the problems
            switch (nSoltn){
                case 1:{
                cout<<endl<<"Solution to Savitch 8thEd Chap3 Prob10 "<<endl;
                cout<<"Green Crud Population and Fibbonacci Sequence "<<endl<<endl;
                    
                //Declare Variables
                    unsigned int fi,fim1,fim2;//Designations in the sequence
                    unsigned short nTerms;    //Number of terms in the sequence
                    unsigned short counter;   //Current position in the sequence
                    const char DREPRO=5;      //Days to Reproduce
                    float crudWt;             //Weight of the Crud
                    unsigned int nDays;       //Number of says to grow Crud
                //Initialize the sequence 
                    fim2=fim1=1;              //Start the sequence
                    counter=2;                //Initialize the counter
                //Input the number of terms in the sequence
                    cout<<"Input the initial weight of the Crud in pounds"<<endl;
                    cin>>crudWt;
                    cout<<"How many days will the crud be allowed to grow"<<endl;
                    cin>>nDays;
                   //Calculate the number of terms
                    nTerms=nDays/DREPRO+1;
                    //Output or calculate the output required
                    if(nTerms==1){
                       cout<<"After "<<nDays<<" days the crud weighs "<<fim2*crudWt<<"(lbs)"<<endl<<endl;
                    }else if(nTerms==2){
                      cout<<"After "<<nDays<<" days the crud weighs "<<fim1*crudWt<<"(lbs)"<<endl<<endl;
                    }else{
                        do{
                            fi=fim1+fim2;
                            counter++;
                            fim2=fim1;
                            fim1=fi;
                        }while(counter<nTerms);
                        cout<<"Term "<<nTerms<<" in the sequence = "
                        <<fi<<endl<<endl; 
                    }
                    //The crud result is
                    cout<<"After "<<nDays<<" days the crud weighs "<<fi*crudWt<<"(lbs)"<<endl<<endl;
                    break;
                }
                case 2:{
                    cout<<endl<<"Solution to Savitch 8thEd Chap3 Prob11 "<<endl;
                    cout<<"e^x Calculation"<<endl<<endl;
                    
                    //Declare and initialize variables
                    const unsigned char nTerms=13;
                    float etox=1,x;//e^x

                    //Input the value x
                    cout<<"Input x of e^x computation"<<endl;
                    cin>>x;

                    //Calculate e^x
                    for(int n=1;n<=nTerms;n++){
                        //Declare and Initialize variables
                        unsigned int factN=1;//N and N

                        //Calculate the factorial
                        for(int i=1;i<=n;i++){
                            factN*=i;   
                        }

                        //Calculate e^x with the above factorial
                        etox+=pow(x,n)/factN;
                    }

                    //Output
                    cout<<"The exact value of e^"<<x<<"="<<exp(x)<<endl;
                    cout<<"The approx value of e^"<<x<<"="<<etox<<endl<<endl;


                    break;
                }
                case 3:{
                    cout<<endl<<"Solution to Savitch 7thEd Chap3 Prob2 "<<endl;
                    cout<<"Revolving Credit"<<endl<<endl;
                    
                    //Declare and initialize variables
                    float accBal;
                    float payI;  //interest rate on first 1000
                    float payII; //interest rate after 1000
                    float perc10;//minimum payment calculation for between 10 and 1000
                    float int1;
                    float int2;
                    float totAmtI;
                    float amtOwe;
                    float total;
                    char choice;
                    do {
                        //Input data
                        cout<<fixed<<setprecision(2);
                        cout<<"What is the account balance? ";
                        cin>>accBal;

                        //Output
                        if (accBal<=10){
                            payI=(1.5f/static_cast<float>(CNVPERC))*accBal;
                            cout<<"Your interest is "<<payI<<"."<<endl;
                            cout<<"There is no minimum payment. ";
                            amtOwe=accBal+payI;
                            cout<<"The total amount due is "<<amtOwe<<endl<<endl;
                        }else if (accBal>10&&accBal<1000){
                            payI=(1.5f/static_cast<float>(CNVPERC))*accBal; 
                            totAmtI=(accBal+payI);
                            perc10=totAmtI*10/static_cast<float>(CNVPERC);
                            cout<<"Interest due is "<<payI<<endl; 
                            cout<<"Your minimum payment is "<<perc10<<endl;
                            cout<<"The total amount due is "<<totAmtI<<endl<<endl;
                        }else if (accBal==1000){
                            payI=(1.5f/static_cast<float>(CNVPERC))*accBal; 
                            int1=(payI+accBal)*10/static_cast<float>(CNVPERC);            
                            cout<<"Interest due is "<<payI<<endl; 
                            cout<<"Your minimum payment is "<<int1<<endl;
                            totAmtI=(accBal+payI);
                            cout<<"The total amount due is "<<totAmtI<<endl<<endl;
                        }else if (accBal>1000){
                            payI=(1.5f/static_cast<float>(CNVPERC))*1000;
                            payII=(1.0f/static_cast<float>(CNVPERC))*(accBal-1000);
                            total=payI+payII+accBal;
                            int2=total*10/static_cast<float>(CNVPERC);
                            cout<<"Interest due is "<<payI+payII<<endl;
                            cout<<"Your minimum payment is "<<int2<<endl;
                            cout<<"The total amount due is "<<total;
                            cout<<endl<<endl;
                        } 
                        //Repeat
                        cout<<"Would you like to repeat the program? "<<endl;
                        cout<<"y=yes anything else to exit"<<endl;
                        cin>>choice;
                    }while(choice=='y');
                    break;
                }
                case 4:{
                    cout<<endl<<"Solution to Savitch 7thEd Chap3 Prob6 "<<endl;
                    cout<<"The Quadratic Formula "<<endl<<endl;
                    
                    //Declare and initialize variables
                    float a;      //coefficient of quadratic variable
                    float b;      //coefficient of linear variable
                    float c;      //constant in function
                    float root1;  //root 1 in real 
                    float root2;  //root 2 in imaginary 
                    float detmin; //determinant  
                    float detminC;//complex determinant 
                    char choice;
                    do {
                        //Input data
                        cout<<"Given the formula ax^2+bx+c=0, we want to know the roots of ";
                        cout<<"a quadratic equation given in that form."<<endl;
                        cout<<"Please input the coefficient a value "<<endl;
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
                        
                        //Output outcomes
                        if (a==0){
                            cout<<"undefined"<<endl;
                        }
                        else if (detmin==0){
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

                    break;
                }
                case 5:{
                    cout<<endl<<"Solution to Savitch 7thEd Chap3 Prob15 "<<endl;
                    cout<<"Bouyancy"<<endl<<endl;
                    
                    //Declare and initialize variables
                    float Fb;       //buoyant force
                    float v;        //volume
                    float Y=62.4f;  //specific weight of the of the object
                    float r;        //radius
                    float wgt;     //weight of object

                    //Input data
                    cout<<"This program tells you whether a spherical object will sink or float."<<endl;
                    cout<<"Please input the weight of the object in lbs."<<endl;
                    cin>>wgt;
                    cout<<"Please input the radius of the sphere in ft."<<endl;
                    cin>>r;

                    //Calculation
                    v=4/3*PI*pow(r,3);
                    Fb=v*Y;

                    //Output
                    cout<<"The volume is "<<v<<"ft^3"<<endl;
                    cout<<"The bouyant force is "<<Fb<<"lbs"<<endl;
                    if (Fb>=wgt)
                        cout<<"The sphere will float. "<<endl<<endl;
                    else 
                        cout<<"The sphere will sink."<<endl<<endl;
                    break;
                }
                case 6:{
                cout<<endl<<"Solution to Savitch 7thEd Chap3 Prob16 "<<endl;
                cout<<"Equal Temperatures"<<endl<<endl;
                //Declare and initialize variables
                int tempC=100; //temperature in Celsius 
                int tempF;//temperature in Fahrenheit

                    //Input data
                cout<<"This program tells you at what temperature degrees Fahrenheit and "<<endl;
                cout<<"degrees Celsius are the same. "<<endl;

                    //Output
                while(tempC!=tempF){
                    tempC--;
                    tempF=((9*tempC)/5)+32;
                }
                cout<<"Temperatures are the same at "<<tempF<<" degrees Fahrenheit and"<<endl;
                cout<<"degrees Celsius."<<endl;
                    break;
                }
                case 7:{
                    //The Problem to solve
                    cout<<endl<<"Solution to Savitch 7thEd Chap3 Prob1"<<endl;
                    cout<<endl<<"Rock-Paper-Scissors Games"<<endl<<endl;

                   //Set the random number seed
                    srand(static_cast<unsigned int>(time(0)));

                   //Declare and initialize variables
                    char player2; //The computers play
                    char player1;  //the players move
                    bool result;  //True is a win, False is a tie
                    char choice;
                    do {
                        //Input the player1's turn
                        do{
                          cout<<"Player 1, What is your move P,R,S?"<<endl;
                          cin>>player1;
                          player1=toupper(player1);
                        }while(!(player1=='P'||player1=='R'||player1=='S'));

                         //Input the player2's turn
                        do{
                          cout<<"Player 2, What is your move P,R,S?"<<endl;
                          cin>>player2;
                          player2=toupper(player2);
                        }while(!(player2=='P'||player2=='R'||player2=='S'));

                        //Output the moves by the computer and player
                        cout<<"Player 1's move  "<<player1<<endl;
                        cout<<"Player 2's move  "<<player2<<endl;

                        //Determine the result
                        if(player1==player2){
                            cout<<"The result is a Tie"<<endl;
                        }else if(player1=='P'&&player2=='R'){
                            cout<<"Player 1 wins!"<<endl;
                        }else if(player1=='R'&&player2=='S'){
                            cout<<"Player 1 wins!"<<endl;   
                        }else if(player1=='S'&&player2=='P'){
                            cout<<"Player 1 wins!"<<endl;    
                        }else if(player2=='P'&&player1=='R'){
                            cout<<"Player 2 wins!"<<endl;
                        }else if(player2=='R'&&player1=='S'){
                            cout<<"Player 2 wins!"<<endl;
                        }else if(player2=='S'&&player1=='P'){
                            cout<<"Player 2 wins!"<<endl;    
                        }else{
                            cout<<"Player 2 loses"<<endl;
                        }

                        //Repeat program?
                        cout<<"Would you like to play again? "<<endl;
                        cout<<"y=yes anything else to exit"<<endl<<endl;
                        cin>>choice;
                    }while(choice=='y');
                    break;
                }
                case 8:{
                    cout<<endl<<"Solution to Savitch 7thEd Chap3 Prob5 "<<endl;
                    cout<<"Call Rates"<<endl<<endl;

                     //Declare and initialize variables
                    int hr;      //hour of the day
                    char letr;   //letter representation of am or pm
                    char choice; //choice between yes or no
                    float nMin;  //duration of the call in minutes
                    float cost;  //cost of the call in dollars
                    int min;     //minutes in the day
                    int num;     //choice between before or after 6PM
                    char repeat; //repeat program if necessary
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

                    break;
                }
                case 9:{
                    //The problem to solve
                cout<<endl<<"Solution to Savitch 9thEd Chap3 Prob3"<<endl;
                cout<<endl<<"The Roman Numeral Conversion Program"<<endl<<endl;

                //Declare and initialize
                unsigned char  n1000s,n100s,n10s,n1s;//Number of 10^x's
                unsigned int number;                 //Arabic number, regular year
                char choice;
                do {
                    //Input
                    cout<<"Enter a four digit year to convert to Roman Numerals "<<endl;
                    cin>>number;


                    //Calculate the number of 1000's,100's,10's,1's
                    n1000s=(number-number%1000)/1000;//Number of 1000's
                    number=(number-n1000s*1000);     //Subtract off 1000's
                    n100s =(number-number%100)/100;  //Number of 100's
                    number=(number-n100s*100);       //Subtract off 100's
                    n10s  =(number-number%10)/10;    //Number of 10's
                    n1s   =(number-n10s*10);         //Subtract off 10's to get 1's

                    //Output the number and it's components
                    cout<<"The number of 1000's  = "<<static_cast<int>(n1000s)<<endl;
                    cout<<"The number of 100's   = "<<static_cast<int>(n100s)<<endl;
                    cout<<"The number of 10's    = "<<static_cast<int>(n10s)<<endl;
                    cout<<"The number of 1's     = "<<static_cast<int>(n1s)<<endl;

                    //Output the results
                    cout<<"The Roman Numeral equivalent = ";

                    //Output the 1000's
                    switch(n1000s){
                        case 3:  cout<<"M";
                        case 2:  cout<<"M";
                        case 1:  cout<<"M";
                    }

                    //Output the 100's
                    switch(n100s){
                        case 9:  cout<<"CM";break;
                        case 8:  cout<<"DCCC";break;
                        case 7:  cout<<"DCC";break;
                        case 6:  cout<<"DC";break;
                        case 5:  cout<<"D";break;
                        case 4:  cout<<"CD";break;
                        case 3:  cout<<"C";
                        case 2:  cout<<"C";
                        case 1:  cout<<"C";
                    }

                    //Output the 10's
                    switch(n10s){
                        case 9:  cout<<"XC";break;
                        case 8:  cout<<"LXXX";break;
                        case 7:  cout<<"LXX";break;
                        case 6:  cout<<"LX";break;
                        case 5:  cout<<"L";break;
                        case 4:  cout<<"XL";break;
                        case 3:  cout<<"X";
                        case 2:  cout<<"X";
                        case 1:  cout<<"X";
                    }

                    //Output the 1's
                    switch(n1s){
                        case 9:  cout<<"IX";break;
                        case 8:  cout<<"VIII";break;
                        case 7:  cout<<"VII";break;
                        case 6:  cout<<"VI";break;
                        case 5:  cout<<"V";break;
                        case 4:  cout<<"IV";break;
                        case 3:  cout<<"I";
                        case 2:  cout<<"I";
                        case 1:  cout<<"I";
                    }
                        //Repeat
                        cout<<"\nWould you like to repeat the program? "<<endl;
                        cout<<"y=yes anything else to exit"<<endl;
                        cin>>choice;
                }while(choice=='y');

                    break;
                }
                case 10:{
                    cout<<endl<<"Solution to Gaddis 8thEd Chap4 Prob8"<<endl;
                    cout<<endl<<"Mixing Primary Colors!"<<endl<<endl;
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