/* 
 * Author: Roberto Ventura
 * Created on January 10, 2019
 * Purpose: Calculate Retroactive Pay, New Annual Pay and New Monthly Pay based on fixed 6 month rate
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
    float payInc=0.076f,newAnn,newMon,retro,lastPay;
    
    //Initialize or input i.e. set variable values
    cout<<"Input previous annual salary.\n";
    cin>>lastPay;
    
    //Map inputs -> outputs
    retro=(lastPay/2.0f)*payInc;
    newAnn=(lastPay*payInc)+lastPay;
    newMon=newAnn/12.0f;
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Retroactive pay    = $  "<<retro<<endl;
    cout<<"New annual salary  = $"<<newAnn<<endl;
    //If Number is bigger than 100 Use 1 space
    if(newMon>=100.00){
        cout<<"New monthly salary = $ "<<newMon;
    }
    //If Number is less than 100 Use 2 spaces for compiler not to mark problem wrong
    else{
        cout<<"New monthly salary = $  "<<newMon;
    }

    //Exit stage right or left!
    return 0;
}