/* 
    File:   main.cpp
    Author: Kayla Rodriguez
    Created on February 3, 2016, 8:35 PM
    Purpose:  Assignment 7 Menu
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

//User Libraries

//Global Constants
const float PI=4*atan(1);//Universal Constant 3.1415 etc

//Function prototypes
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
int acclist(int[],int,int);
int schList(int[],int,int);
int bSearch(int[], int, int);
void selSort(int[],const int);
void sSort(int[],const int);
int aclistB(int[],const int,int);
void filRain(float[],int);
void PrtRain1(float[], int);
void PrtRain2(float[], int,string[]);
void hLrnfal(float[], int,string[]);
void calRain(float[], int);
void avgRain(float[], int);
void sortRain(float[], int);
void selectS(string[],int);
void shArray(string[],int);
int binaryS(string[],int,string);


//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short nSoltn;//Problem Solution to display
    bool reDsply=true;    //Exit program when false
    
    //Menu to Display Solution
    do{
        //Input problem to display, i.e. Menu
        cout<<"Assignment 5 Problem Set"<<endl;
        cout<<"Type 1 to Display Gaddis 8thEd Chap8 Prob1"<<endl;
        cout<<"Type 2 to Display Gaddis 8thEd Chap8 Prob2"<<endl;
        cout<<"Type 3 to Display Gaddis 8thEd Chap8 Prob3"<<endl;
        cout<<"Type 4 to Display Gaddis 8thEd Chap8 Prob4"<<endl;
        cout<<"Type 5 to Display Gaddis 8thEd Chap8 Prob5"<<endl;
        cout<<"Type 6 to Display Gaddis 8thEd Chap8 Prob6"<<endl;
        cout<<"Type 7 to Display Gaddis 8thEd Chap8 Prob7"<<endl;
        cout<<"Type anything else to exit "<<endl<<endl;
        cin>>nSoltn;
        //Solutions to all the problems
        switch(nSoltn){
            case 1:{problem1();break;}
            case 2:{problem2();break;}
            case 3:{problem3();break;}
            case 4:{problem4();break;}
            case 5:{problem5();break;}
            case 6:{problem6();break;}
            case 7:{problem7();break;}
            default:{
                cout<<"Exiting the Program"<<endl;
                reDsply=false;
            }
        }
    }while(reDsply);

    //Exit stage right
    return 0;
}
/******************************************************************************/
/************************** Problem 1 *****************************************/
/******************************************************************************/
void problem1(){
    cout<<endl<<"Solution to Gaddis 8thEd Chap8 Prob1"<<endl;
    cout<<endl<<"Account Validation"<<endl<<endl;
    //Declare variables
    const int SIZEA=18;
    //Account validation
    int accVal[SIZEA] = {5658845,4520125,7895122,8777541,8451277,1302850,8080152,
    4562555,5552012,5050552,7825877,1250255,1005231,6545231,3852085,7576651,
                                                               7881200,4581002};
    int accNum;
    int search;
   
    //Input
    cout<<"Enter a seven digit charge account number ";
    cin>>accNum;
    //Searching Array
    search=acclist(accVal,SIZEA,accNum);
    if (search == -1)
        cout << "Number invalid.\n";
    else{
        cout << "The number is valid: ";
        cout << accVal[search] << endl;
    }  
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Linear Search
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
int acclist(int accVal[], int SIZEA, int accNum){
    int i = 0;			
    int pos = -1; //Records position of search value		
    bool found = false;		
    while (i < SIZEA && !found){
        if (accVal[i] == accNum){
            found = true;
            pos = i;		  			
        }
        i++;					
    }
    return pos;				
}
/******************************************************************************/
/************************** Problem 2 *****************************************/
/******************************************************************************/
void problem2(){
    //The problem to solve
    cout<<endl<<"Solution to Gaddis 8thEd Chap8 Prob2"<<endl;
    cout<<endl<<"Lottery Numbers"<<endl<<endl;
    //Declare variables
    const int SIZE=10;
    int list[SIZE] = {13579,26791,26792,33445,55555,62483,77777,79422,
                                                            85647,93121};
    int lotWin;
    int search;
   
    //Input
    cout<<"Enter this weeks winning numbers: ";
    cin>>lotWin;
    //Searching Array
    search=schList(list,SIZE,lotWin);
    if (search == -1)
        cout << "You did not win this week.\n";
    else{
        cout << "You have the winning lottery ticket! ";
        cout << list[search] << endl;
    } 
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Linear Search
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
int schList(int list[], int SIZE, int lotWin){
    int i = 0;			
    int pos = -1; //Records position of search value		
    bool found = false;		
    while (i < SIZE && !found){
        if (list[i] == lotWin){
            found = true;
            pos = i;		  			
        }
        i++;					
    }
    return pos;				
}
/******************************************************************************/
/************************** Problem 3 *****************************************/
/******************************************************************************/
void problem3(){
    //The problem to solve
    cout<<endl<<"Solution to Gaddis 8thEd Chap8 Prob3"<<endl;
    cout<<endl<<"Lottery modification"<<endl<<endl;
    //Declare variables
    const int SIZE=10;
    int list[SIZE] = {13579,26791,26792,33445,55555,62483,77777,79422,
                                                            85647,93121};
    int lotWin;
    int search;
   
    //Input
    cout<<"Enter this weeks winning numbers: ";
    cin>>lotWin;
    //Sorting
    selSort(list,SIZE);
    //Searching Array
    search=bSearch(list,SIZE,lotWin);
    if (search == -1)
        cout << "You did not win this week.\n";
    else{
        cout << "You have the winning lottery ticket! ";
        cout << list[search] << endl;
    }   
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Binary Search
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
int bSearch(int list[], const int SIZE, int lotWin){
    int pos = -1,first = 0,last = (SIZE -1);
    int middle;                       
    bool found = false;    // Flag

    while (!found && first <= last){
        middle = (first + last) / 2; // Calculate midpoint
        if (list[middle] == lotWin){ // If value is found at mid
            pos = middle;
            found = true;            
        }
        else if (list[middle] > lotWin){ // If value is in lower half
            last = middle - 1;
        }
        else{
            first = middle + 1; // If value is in upper half
        }
    }
    return pos;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Selection Sort Search
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
void selSort(int list[],const int SIZE){
    //Declare Variables
    int strScan, mini, minval;
    for (strScan=0;strScan < (SIZE-1); strScan++){
        mini=strScan;
        minval = list[strScan];
        for (int i=strScan+1;i<SIZE;i++){
            if (list[i]<minval){
                minval=list[i];
                mini=i;
            }
        }
        list[mini]=list[strScan];
        list[strScan]=minval;
    }
} 
 
/******************************************************************************/
/************************** Problem 4 *****************************************/
/******************************************************************************/
void problem4(){
   cout<<endl<<"Solution to Gaddis 8thEd Chap8 Prob4"<<endl;
   cout<<endl<<"Account Validation Modification"<<endl<<endl;
    //Declare variables
    const int SIZEA=18;
    //Account validation
    int accVal[SIZEA] = {5658845,4520125,7895122,8777541,8451277,1302850,8080152,
    4562555,5552012,5050552,7825877,1250255,1005231,6545231,3852085,7576651,
                                                               7881200,4581002};
    int accNum;
    int search;
   
    //Input
    cout<<"Enter a seven digit charge account number ";
    cin>>accNum;
    //Sort Array
    sSort(accVal,SIZEA);
    //Search Array
    search=aclistB(accVal,SIZEA,accNum);
    if (search == -1)
        cout << "Number invalid.\n";
    else{
        cout << "The number is valid. ";
    } 
    
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Binary Search
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
int aclistB(int accVal[],const int SIZEA, int accNum){
    int pos = -1,first = 0,last = (SIZEA-1);
    int middle;                       
    bool found = false;    // Flag

    while (!found && first <= last){
        middle = (first + last) / 2; // Calculate midpoint
        if (accVal[middle] == accNum){ // If value is found at mid
            pos = middle;
            found = true;            
        }
        else if (accVal[middle] > accNum){ // If value is in lower half
            last = middle - 1;
        }
        else{
            first = middle + 1; // If value is in upper half
        }
    }
    return pos;
} 
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Selection Sort Search
//Inputs:
//  a->Array or List
//  n->Size of List
//  strt->Starting Position
//  val->Value to find
//Outputs:
//  pos->Index where value is found
//******************************************************************************
void sSort(int accVal[],const int SIZEA){
    //Declare Variables
    int strScan, mini, minval;
    for (strScan=0;strScan < (SIZEA-1); strScan++){
        mini=strScan;
        minval = accVal[strScan];
        for (int i=strScan+1;i<SIZEA;i++){
            if (accVal[i]<minval){
                minval=accVal[i];
                mini=i;
            }
        }
        accVal[mini]=accVal[strScan];
        accVal[strScan]=minval;
    }
} 
/******************************************************************************/
/************************** Problem 5 *****************************************/
/******************************************************************************/
void problem5(){
    cout<<endl<<"Solution to Gaddis 8thEd Chap8 Prob5"<<endl;
    cout<<endl<<"Rainfall Modification"<<endl<<endl; 
    //Declare and initialize variables
    int SIZERN=12;
    float rnfall[SIZERN];
    string months[12]={"January","February","March","April","May","June","July",
    "August","September","October","November","December"};
   
    //Precision
    cout<<fixed<<setprecision(2);
    //Function output
    filRain(rnfall,SIZERN);
    hLrnfal(rnfall,SIZERN,months);
    calRain(rnfall,SIZERN);
    avgRain(rnfall,SIZERN);
    PrtRain2(rnfall,SIZERN,months);
    sortRain(rnfall,SIZERN);
    PrtRain1(rnfall,SIZERN);
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                            Highest/Lowest rainfall amounts                 */
/******************************************************************************/
void hLrnfal(float rnfall[],int SIZERN,string months[]){
    int count;
    float highest;
    float lowest;
    highest = rnfall[0];
    for (count = 1; count < SIZERN; count++){
        if (rnfall[count] > highest){
            highest = rnfall[count];
            cout<<months[count]<<" had the most rain: "<<highest<<endl;
        }
    }
    lowest = rnfall[0];
    for (count = 1; count < SIZERN; count++){
        if (rnfall[count] < lowest){
            lowest = rnfall[count];
            cout<<months[count]<<" had the least rain: "<<lowest<<endl;
        }
    } 
}    
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                            Fill Rainfall Array                             */
/******************************************************************************/
void filRain(float rnfall[],int SIZERN){ 

    for(int i=0;i<SIZERN;i++){
        do{
        cout<<"Enter rainfall amount for month "<<(i+1)<<": ";
        cin>>rnfall[i];
        }while(rnfall[i]<0);
    }
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                       Print Rainfall Array(sorted)                         */
/******************************************************************************/
void PrtRain1(float rnfall[], int SIZERN){
    cout<<"Rainfall amounts from Highest to lowest: "<<endl;
      for(int i=0;i<SIZERN;i++){
        cout<<rnfall[i]<<endl; 
    } 
      cout<<endl;
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                       Calculate Rainfall Array                             */
/******************************************************************************/
void calRain(float rnfall[], int SIZERN){
    float sum=0;
      for(int a=0;a<SIZERN;a++){
        sum+=rnfall[a]; 
    } 
    cout<<"The total rainfall this year is "<<sum<<endl;
    cout<<endl;
}
//000000001111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                       Average Rainfall Array                               */
/******************************************************************************/
void avgRain(float rnfall[], int SIZERN){
    float sum=0;
      for(int a=0;a<SIZERN;a++){
        sum+=rnfall[a]; 
    } 
    cout<<"The average rainfall this year is "<<(sum/12)<<endl;
    cout<<endl;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                      Mark Sort
//Inputs:
//  a->Array or List
//  n->Size of List
//Outputs:
//  a->Sorted Array
//******************************************************************************
void sortRain(float rnfall[],int SIZERN){
    //Find smallest in each successive list
    //From the beginning of the list to the end
    //Outside Element of the list
    for(int i=0;i<(SIZERN-1);i++){
        //Inside List above the Element
        for(int j=i+1;j<SIZERN;j++){
            //Swap
            if(rnfall[i]<rnfall[j]){
                int temp =rnfall[j];
                rnfall[j]=rnfall[i];
                rnfall[i]=temp;//Exclusive or XOR a=b
            }
        }
    }
}
void PrtRain2(float rnfall[], int SIZERN,string months[]){
     cout<<"Rainfall amounts this Year: "<<endl;
      for(int i=0;i<SIZERN;i++){
        cout<<months[i]<<": "<<rnfall[i]<<endl; 
    } 
      cout<<endl;
}
/******************************************************************************/
/************************** Problem 6 *****************************************/
/******************************************************************************/
void problem6(){
    cout<<endl<<"Solution to Gaddis 8thEd Chap8 Prob6"<<endl;
    cout<<endl<<"Example Modification"<<endl<<endl; 
    //Define an array with unsorted values
    const int NAMES=20;
    string names[NAMES]={"Collins, Bill","Smith, Bart","Allen, Jim",
    "Griffin, Jim","Stamey, Marty","Rose, Geri","Taylor, Terri","Johnson, Jill",
    "Allison, Jeff","Looney, Joe","Wolfe, Bill","James, Jean","Weaver, Jim,",
    "Pore, Bob","Rutherford, Greg","Javens, Renee","Harrison, Rose","Setzer, Cathy",
    "Pike, Gordon","Holland, Beth" };
    
    //Display the values
    cout<<"The unsorted values are: "<<endl;
    shArray(names,NAMES);
    
    //Sort the values
    selectS(names,NAMES);
    
    //Display the values again
    cout<<"The sorted values are: "<<endl;
    shArray(names,NAMES);
}
//******************************************************************************
//Definition of Selection Sort
//
//
//******************************************************************************
void selectS(string names[],int NAMES){
    //Declare Variables
    int strScan, mini; 
    string minval;
    for (strScan=0;strScan < (NAMES-1); strScan++){
        mini=strScan;
        minval = names[mini];
        for (int i=strScan+1;i<NAMES;i++){
            if (names[i]<minval){
                minval=names[i];
                mini=i;
            }
        }
        string temp=names[strScan];
        names[strScan]=minval;
        names[mini]=temp;
    }
    cout<<endl;
}
//******************************************************************************
//Definition of function show Array
//shArray
//
//******************************************************************************
void shArray(string names[],int NAMES){
    for(int count=0;count<NAMES;count++){
        cout<<names[count]<<" ";
        cout<<endl;
    }
}
void problem7(){
    cout<<endl<<"Solution to Gaddis 8thEd Chap8 Prob7"<<endl;
    cout<<endl<<"Example Modification Search"<<endl<<endl; 
    //Define an array with unsorted values
    const int NAMES=20;
    string names[NAMES]={"Collins,Bill","Smith,Bart","Allen,Jim",
    "Griffin,Jim","Stamey Marty","Rose,Geri","Taylor,Terri","Johnson,Jill",
    "Allison,Jeff","Looney,Joe","Wolfe,Bill","James,Jean","Weaver,Jim,",
    "Pore,Bob","Rutherford,Greg","Javens,Renee","Harrison,Rose","Setzer,Cathy",
    "Pike,Gordon","Holland,Beth" };
    string sNames; 
    int search;
    
    //Display the values
     //Display the values 
    cout<<"Which student would you like to find in the class? "<<endl;
    cout<<"Enter in form: LastName,FirstName."<<endl;
    cin>>sNames;
    //Sort the values
    selectS(names,NAMES);
    search=binaryS(names,NAMES,sNames);
    if (search == -1)
        cout << "Student not in class. \n";
    else{
        cout << "Student in class."<<endl;
    } 
}

//******************************************************************************
//Definition of function Binary Sort
//shArray
//
//******************************************************************************
int binaryS(string names[],int NAMES,string sNames){
    int pos = -1,first = 0,last = (NAMES-1);
    int middle;                       
    bool found = false;    // Flag

    while (!found && first <= last){
        middle = (first + last) / 2; // Calculate midpoint
        if (names[middle] == sNames){ // If value is found at mid
            pos = middle;
            found = true;            
        }
        else if (names[middle] > sNames){ // If value is in lower half
            last = middle - 1;
        }
        else{
            first = middle + 1; // If value is in upper half
        }
    }
    return pos;
} 