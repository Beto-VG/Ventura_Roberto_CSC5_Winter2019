/* 
 * File:   main.cpp
 * Author: Roberto Ventura
 * Created on January 27, 2019 1
 * Purpose:  ISP charges
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float calcPkA(unsigned short); 
float calcPkB(unsigned short);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char package;
    unsigned short hours;
    float price;
    char newPkg;
    float save;
    
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    
    //Basic Charges
    if(package=='a' || package=='A')
    {
        price=calcPkA(hours);
        if(hours<21)
        {
            newPkg='A';
            save=0.00;
        }
        else if(hours>=21 && hours<35)
        {
            newPkg='B';
            save=price-calcPkB(hours);
        }
        else if(hours){
            newPkg='C';
            save=price-36.99;
        }
    }
    else if(package=='b' || package=='B')
    {
        price=calcPkB(hours);
        if(hours<21)
        {
            newPkg='A';
            save=price-calcPkA(hours);
        }
        else if(hours>=21 && hours<35)
        {
            newPkg='B';
            save=0.00;
        }
        else if(hours){
            newPkg='C';
            save=price-36.99;
        }
    }
    else if(package=='c' || package=='C')
    {
        price=36.99;
        if(hours<21)
        {
            newPkg='A';
            save=36.99-calcPkA(hours);
        }
        else if(hours>=21 && hours<35)
        {
            newPkg='B';
            save=36.99-calcPkB(hours);
        }
        else if(hours>=35)
        {
            newPkg='C';
            save=0.00;
        }
    }
    
    //Output the Charge
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"$"<<price;
    cout<<" "<<newPkg<<" $"<<save<<endl;

    //Output the cheapest package and the savings
    
    
    //Exit
    return 0;
}

float calcPkA(unsigned short hrs)
{
    if(hrs<=10)
    {
        return 16.99;
    }
    else if(hrs>10 && hrs<=20){
        hrs=hrs-10;
        return 16.99+(hrs*.95);
    }
    else if(hrs>20)
    {
        hrs=hrs-20;
        return 16.99+(10*.95)+(hrs*.85);
    }
}

float calcPkB(unsigned short hrs)
{
    if(hrs<=20)
    {
        return 26.99;
    }
    else if(hrs>20 && hrs<=30){
        hrs=hrs-20;
        return 26.99+(hrs*.74);
    }
    else if(hrs>30)
    {
        hrs=hrs-30;
        return 26.99+(10*.74)+(hrs*.64);
    }
}