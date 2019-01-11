/* 
 * Author: Roberto Ventura
 * Created on January 10, 2019
 * Purpose: Convert celcius temperatures to fahrenheit temperatures 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed

    //Declare Variables
    float c, f;
    
    //Initialize or input i.e. set variable values
    cout<<"Temperature Converter\n";
    cout<<"Input Degrees Fahrenheit\n";
    cin>>f;
    
    //Map inputs -> outputs
    c = 5.0/9.0 * (f-32);    
   
    //Display the outputs
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<f<<" Degrees Fahrenheit = "<< c <<" Degrees Centigrade";
    
    //Exit stage right or left!
    return 0;
}