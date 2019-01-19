/* 
 * File:   main.cpp
 * Author: Roberto Ventura
 * Created on January 18, 2019
 * Purpose:  Adding Every Number Until N or Number User Wants
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
    int n, total=0;
    
    //Initialize or input i.e. set variable values
    cin>>n;
    
    //Map inputs -> outputs
    if(n>0)
    {
        for(int i=0;i<=n;i++)
        {
            total=total+i;
        }
    }
    else
    {
        cout<<"Positive Numbers Only!\n";    
    }
    
    
    
    //Display the outputs
    if(total>0)
    {
        cout<<"Sum = "<<total;
    }

    //Exit stage right or left!
    return 0;
}