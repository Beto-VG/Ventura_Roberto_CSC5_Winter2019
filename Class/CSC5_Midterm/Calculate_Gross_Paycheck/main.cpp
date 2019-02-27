/* 
 * File:   main.cpp
 * Author: Roberto Ventura 
 * Created on January 27, 2019 2:05 PM
 * Purpose:  Overtime
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float payRate;
    unsigned short hrsWrkd,otHrs,dtHrs;
    float totPay;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Calculate Paycheck
    if(hrsWrkd>=0 && hrsWrkd<=20)
    {
        totPay=payRate*hrsWrkd;
    }
    else if(hrsWrkd>20 && hrsWrkd<=40)
    {
        otHrs=hrsWrkd-20;
        totPay=(20*payRate)+(otHrs*(1.5*payRate));
    }
    else if(hrsWrkd>40){
        dtHrs=hrsWrkd-40;
        totPay=(20*payRate)+((1.5*payRate)*20)+((2.0*payRate)*dtHrs);
    }
    
    //Output the check
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"$"<<totPay<<endl;
    
    //Exit
    return 0;
}