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
            cout<<"Type 7 to Display Savitch 7thEd Chap3 Prob16 "<<endl;
            cout<<"Type anything else to exit "<<endl;
            cin>>nSoltn;
            //Solutions to all the problems
            switch (nSoltn){
                case 1:{
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
                    cout<<endl<<"Solution to Savitch 7thEd Chap3 Prob2 "<<endl<<endl;
                    
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

                    break;
                }
                case 5:{
                    cout<<endl<<"Solution to Savitch 7thEd Chap3 Prob15 "<<endl;
                    cout<<"Bouyancy"<<endl<<endl;
                    
                    //Declare and initialize variables
                    float Fb; //buoyant force
                    float v;  //volume
                    float y;  //specific weight of the of the object
                    float r; //radius

                    //Input data
                    cout<<"This program tells you whether a spheric object will sink or float."<<endl;
                    cout<<"Please input the weight of the object in lbs."<<endl;
                    cin>>y;
                    cout<<"Please input the radius of the sphere in ft."<<endl;
                    cin>>r;

                    //Calculation
                    v=4/3*PI*pow(r,3);
                    Fb=v*y;

                    //Output
                    cout<<"The volume is "<<v<<endl;
                    cout<<"The bouyant force is "<<Fb<<endl;
                    if (Fb>=y)
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
                default:{
                    cout<<"Exiting the Program"<<endl;
                    reDsply=false;
                }
            }
        }while(reDsply);

    //Exit stage right
    return 0;
}