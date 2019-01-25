/*
 * File: main.cpp
 * Author: Roberto Ventura
 * Created on January 24, 2019
 * Purpose: Find amount needed to deposit to reach 10,000
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//Function Prototypes
float psntVal(float,float,int);

int main(int argc, char** argv){
    //Declare Variables
    float futVal, intst;
    int years;
    
    cout<<"This is a Present Value Computation\n";
    cout<<"Input the Future Value in Dollars\n";
    cin>>futVal;
    cout<<"Input the Number of Years\n";
    cin>>years;
    cout<<"Input the Interest Rate %/yr\n";
    cin>>intst;
    
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Present Value = $"<<psntVal(futVal,intst,years);
    
    return 0;
}

float psntVal(float f,float r,int n)
{
    r=(r/100)+1.00;             // set r = (1+r) but make it a percentage first to plug in pow function
    float bottom= pow(r,n);   //bottom of equation = (1+r)^n r= rate
    float p = f/bottom;         // present value equals future value divided by bottom equation f/(1+r)^n
    
    return p;
}