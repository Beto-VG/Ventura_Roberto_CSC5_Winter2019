/* 
 * Author: Roberto Ventura
 * Created on January 10, 2019
 * Purpose:  Calculate Positive Sum, Negative Sum, and Total Sum from 10 integers
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int posSum=0,negSum=0,totSum=0,a;
    int x=0;
    
    //Initialize or input i.e. set variable values
    cout<<"Input 10 numbers, any order, positive or negative\n";
    while(x<10){
        cin>>a;
        
        if(a>0){
            posSum=posSum+a;
        }
        else{
            negSum=negSum+a;
        }
        
        totSum=totSum+a;
        
        x++;
    }

    //Map inputs -> outputs
    
    //Display the outputs
    if(posSum<10){
        cout<<"Negative sum =  "<<negSum<<endl;
        cout<<"Positive sum =   "<<posSum<<endl;
        cout<<"Total sum    =   "<<totSum;
    }
    else{
        cout<<"Negative sum = "<<negSum<<endl;
        cout<<"Positive sum =  "<<posSum<<endl;
        cout<<"Total sum    =   "<<totSum;
    }
    

    //Exit stage right or left!
    return 0;
}