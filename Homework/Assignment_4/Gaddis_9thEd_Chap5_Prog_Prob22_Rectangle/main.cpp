/* 
 * File:   main.cpp
 * Author: Roberto Ventura
 * Created on January 18, 2019
 * Purpose:  Make Rectangle with dimensions set by user
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
    int n;
    char l;
    
    //Initialize or input i.e. set variable values
    cin>>n>>l;
    
    //Map inputs -> outputs
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<l;    
        }
        if(i<n-1){
            cout<<endl;   
        }
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}