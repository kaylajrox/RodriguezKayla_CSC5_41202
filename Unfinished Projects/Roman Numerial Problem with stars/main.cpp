/* 
 * File:   main.cpp
 * Author: Kayla Rodriguez
 * Created on January 4, 2016, 10:18 AM
 * Purpose:  Check out IDE
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
  
//Declare and initialize variables
    
    unsigned char  n1000s,n100s,n10s,n1s;//Number of 10^x's
    unsigned int number;
    char choice;
    do{
        //Input data
        cout<<"Enter a four digit year to convert to star characters "<<endl;
        cin>>number;
          
        //Calculate the number of 1000's,100's,10's,1's
        n1000s=(number-number%1000)/1000;//Number of 1000's
        number=(number-n1000s*1000);     //Subtract off 1000's
        n100s =(number-number%100)/100;  //Number of 100's
        number=(number-n100s*100);       //Subtract off 100's
        n10s  =(number-number%10)/10;    //Number of 10's
        n1s   =(number-n10s*10);         //Subtract off 10's to get 1's

        //Output the results
        cout<<"The Star equivalent:"<<endl;

        //Output the 1000's
        switch(n1000s){
            case 9:  cout<<"*********"<<endl;break;
            case 8:  cout<<"********"<<endl;break;
            case 7:  cout<<"*******"<<endl;break;
            case 6:  cout<<"******"<<endl;break;
            case 5:  cout<<"*****"<<endl;break;
            case 4:  cout<<"****"<<endl;break;
            case 3:  cout<<"***"<<endl;break;
            case 2:  cout<<"**"<<endl;break;
            case 1:  cout<<"*"<<endl;break;
            case 0:  cout<<" "<<endl;break;
        }

        //Output the 100's
        switch(n100s){
            case 9:  cout<<"*********"<<endl;break;
            case 8:  cout<<"********"<<endl;break;
            case 7:  cout<<"*******"<<endl;break;
            case 6:  cout<<"******"<<endl;break;
            case 5:  cout<<"*****"<<endl;break;
            case 4:  cout<<"****"<<endl;break;
            case 3:  cout<<"***"<<endl;break;
            case 2:  cout<<"**"<<endl;break;
            case 1:  cout<<"*"<<endl;break;
            case 0:  cout<<" "<<endl;break;
        }

        //Output the 10's
        switch(n10s){
            case 9:  cout<<"*********"<<endl;break;
            case 8:  cout<<"********"<<endl;break;
            case 7:  cout<<"*******"<<endl;break;
            case 6:  cout<<"******"<<endl;break;
            case 5:  cout<<"*****"<<endl;break;
            case 4:  cout<<"****"<<endl;break;
            case 3:  cout<<"***"<<endl;break;
            case 2:  cout<<"**"<<endl;break;
            case 1:  cout<<"*"<<endl;break;
            case 0:  cout<<" "<<endl;break;
        }

        //Output the 1's
        switch(n1s){
            case 9:  cout<<"*********"<<endl;break;
            case 8:  cout<<"********"<<endl;break;
            case 7:  cout<<"*******"<<endl;break;
            case 6:  cout<<"******"<<endl;break;
            case 5:  cout<<"*****"<<endl;break;
            case 4:  cout<<"****"<<endl;break;
            case 3:  cout<<"***"<<endl;break;
            case 2:  cout<<"**"<<endl;break;
            case 1:  cout<<"*"<<endl;break;
            case 0:  cout<<" "<<endl;break;
        }
        
        //Repeat
        cout<<"\nWould you like to repeat the program? "<<endl;
        cout<<"y=yes anything else to exit"<<endl;
        cin>>choice;
    }while (choice=='y');
        
    
    //Exit stage right
    return 0;
}

/*cout<<" "<<num<<" "<<endl;
        cout<<"  "<<num<<"   "<<endl;
        cout<<" "<<num<<endl;
        cout<<"   "<<num<<endl;*/