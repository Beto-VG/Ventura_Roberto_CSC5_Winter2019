/* 
 * Author: Roberto Ventura
 * Created on January 10, 2019
 * Purpose:  Calculate whether room size is in violation of fire safety codes
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
    int maxCap,ppl;
    
    //Initialize or input i.e. set variable values
    cout<<"Input the maximum room capacity and the number of people\n";
    cin>>maxCap>>ppl;
    
    //Map inputs -> outputs
    
    //Display the outputs
    if(ppl>maxCap){
        cout<<"Meeting cannot be held.\n";
        cout<<"Reduce number of people by "<<ppl-maxCap<<" to avoid fire violation.";
    }
    else{
        cout<<"Meeting can be held.\n";
        cout<<"Increase number of people by "<<maxCap-ppl<<" will be allowed without violation.";
    }
    
    //Exit stage right or left!
    return 0;
}