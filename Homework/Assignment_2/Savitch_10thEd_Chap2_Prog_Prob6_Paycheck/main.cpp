/* 
 * Author: Roberto Ventura
 * Created on January 10, 2019
 * Purpose:  Calculate Paycheck based on pay rate and hours worked
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
    float payRate,hours,pay,ot;
    
    //Initialize or input i.e. set variable values
    cout<<"This program calculates the gross paycheck.\n";
    cout<<"Input the pay rate in $'s/hr and the number of hours.\n";
    cin>>payRate>>hours;
    
    //Map inputs -> outputs
    if(hours>40){
        ot=hours-40;
        hours=40;
    }
    else{
        ot=0;
    }
    
    pay=(payRate*hours)+(ot*(payRate*2.0f));
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    if(pay>=1000.00){
        cout<<"Paycheck = $"<<pay;
    }
    else{
        cout<<"Paycheck = $ "<<pay;
    }
    
    
    //Exit stage right or left!
    return 0;
}