/* 
 * Author: Roberto Ventura
 * Created on January 10, 2019
 * Purpose: Calculate how many sodas person can drink before dying proportionate to mouse quantities
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
    const float sweet=0.001f;
    float mWght=35.0f,mSwt=5.0f,pSwt,pWght;
    float sodaPop;
    
    //Initialize or input i.e. set variable values
    cout<<"Program to calculate the limit of Soda Pop Consumption.\n";
    cout<<"Input the desired dieters weight in lbs.\n";
    cin>>pWght;
    
    //Map inputs -> outputs
    pWght=pWght*453.592;
    pSwt=(mSwt*pWght)/mWght;
    sodaPop=pSwt/(350.0f*sweet);
    
    //Display the outputs
    cout<<"The maximum number of soda pop cans\nwhich can be consumed is "<<static_cast<int>(sodaPop)<<" cans";

    //Exit stage right or left!
    return 0;
}