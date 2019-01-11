/* 
 * Author: Roberto Ventura
 * Created on January 10, 2019
 * Purpose:  Take a an angle in degrees output sin,cos,tan of angle 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
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
    float rad;
    int x;
    //Initialize or input i.e. set variable values
    cout<<"Calculate trig functions\n";
    cout<<"Input the angle in degrees.\n";
    cin>>x;
    
    //Map inputs -> outputs
    rad = x*M_PI/180.0f;
    
    //Display the outputs
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"sin("<<x<<") = "<<sin(rad)<<endl;
    cout<<"cos("<<x<<") = "<<cos(rad)<<endl;
    cout<<"tan("<<x<<") = "<<tan(rad);
    //Exit stage right or left!
    return 0;
}