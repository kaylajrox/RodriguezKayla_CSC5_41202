/* Author: Kayla Rodriguez
 * Created on January 19, 2016, 8:22 AM
 * Purpose Assignment 3 Problem Set
 */
 
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
 
//User Libraries
 
//Global Constant

//Function Prototypes
 
//Execution Begins Here
int main(int argc, char** argv) {
        //Declare and initialize variables
        unsigned short nSoltn; //Problem Solution to display
        bool reDsply=true;//Exit program when false
    
       //Menu to Display Solution
        do{
            //Input problem to display, i.e. Menu
            cout<<"Assignment 3 Problem Set"<<endl;
            cout<<"Type 1 to Display Savitch 8thEd Chap3 Prob10"<<endl;
            cout<<"Type 2 to Display Problem 2"<<endl;
            cout<<"Type 3 to Display Problem 3"<<endl;
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
                    cout<<endl<<"Solution to Problem 2"<<endl<<endl;
                    break;
                }
                case 3:{
                    cout<<endl<<"Solution to Problem 3"<<endl<<endl;
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