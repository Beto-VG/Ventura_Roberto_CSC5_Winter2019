/* 
 * File:   main.cpp
 * Author: Roberto Ventura
 * Created on January 18, 2019
 * Purpose:  Find the smallest and largest numbers in a set
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
    int large=0,small=1000;
    
    //Initialize or input i.e. set variable values
    do
    {
        cin>>n;
        if(n>large)
        {
            large=n;
        }
        
        if(n<small && n!= -99)
        {
            small=n;
        }
    }while(n!=-99);
    
    //Display the outputs
    cout<<"Smallest number in the series is "<<small<<endl;
    cout<<"Largest  number in the series is "<<large;

    //Exit stage right or left!
    return 0;
}