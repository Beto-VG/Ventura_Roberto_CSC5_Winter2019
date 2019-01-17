/*
 * File:   main.cpp
 * Author: Roberto Ventura
 * Purpose: Compare profits from gasoline to taxes per gallon
 * Created on January 12, 2019, 10:25 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) 
{
    float excTax = 0.39f, salTax = .08f, traFee = 0.10f, fedTax = 0.184f, ppgal, totTax, oilProf; 
    float tPer,cPer;
    
    cout<<"Enter the price you paid for a gallon of gas\n";
    cin>>ppgal;
    
    totTax = (ppgal * salTax) + excTax + traFee + fedTax;
    oilProf = ppgal * .065;
    tPer=(totTax/ppgal)*100.0f;
    cPer=(oilProf/ppgal)*100.0f;
            
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"Taxes per Gallon = "<<totTax<<endl;
    cout<<"Company Profit = "<<oilProf<<endl;
    cout<<"Percent Taxes Makes up = "<<tPer<<"%"<<endl;
    cout<<"Percent Profit Makes up = "<<cPer<<"%"<<endl;
    return 0;
}


