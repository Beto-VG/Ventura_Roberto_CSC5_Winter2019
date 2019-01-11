/* 
 * Author: Roberto Ventura
 * Created on January 10, 2019
 * Purpose:  Calculates insurance needs based on replacement cost
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
    float rc,ins;
    
    //Initialize or input i.e. set variable values
    cout<<"Insurance Calculator\n";
    cout<<"How much is your house worth?\n";
    cin>>rc;
    
    //Map inputs -> outputs
    ins = rc*.80;
    
    //Display the outputs
    cout<<"You need $"<<ins<<" of insurance.";
    
    //Exit stage right or left!
    return 0;
}