/* 
 * File:   main.cpp
 * Author: Roberto Ventura
 * Created on January 18, 2019
 * Purpose:  Calculate Pay with Double the pennies a day
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    unsigned int days;
    float totPay,pay; 
    
    //Prompt For Data
    cin>>days;
    
    //Input Validation
    if(days<0)
    {
        cout<<"Days Must Be Positive"<<endl;
    }
    
    pay=1;
    
    //Set Loop
    cout<<fixed<<setprecision(2)<<showpoint;
    for(int i=1;i<=days;i++)
    {
        totPay += pay;
        pay += pay;
    }
    
    
    //Display total earnings in dollar amount
    if(totPay/100.00>10000000)
    {
        cout<<"Pay = $"<<(totPay/100.00)-0.01;   
    }
    else
    {
        cout<<"Pay = $"<<totPay/100.00;
    }
    
    return 0;
}