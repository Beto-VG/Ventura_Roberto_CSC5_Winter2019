/* 
 * File:   main.cpp
 * Author: Roberto Ventura
 * Created on January 27, 2019 12:37 AM
 * Purpose:  Histogram
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    string input;
    char a,b,c,d;
    
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin>>input;

    //Histogram Here
    if(input.length()==4)
    {
        a=input.at(0);
        b=input.at(1);
        c=input.at(2);
        d=input.at(3);
    }
    
    cout<<d<<" ";
    //0-9 is 48-57 on ascii table
    if(d>=48  && d<=57)
    {
        d=static_cast<int>(d-48);
        for(int i=0;i<d;i++){
            cout<<"*";
        }
    }
    else{
        cout<<"?";
    }
    cout<<endl;
    cout<<c<<" ";
    if(c>=48  && c<=57)
    {
        c=static_cast<int>(c-48);
        for(int i=0;i<c;i++){
            cout<<"*";
        }
    }
    else{
        cout<<"?";
    }
    cout<<endl;
    cout<<b<<" ";
    if(b>=48  && b<=57)
    {
        b=static_cast<int>(b-48);
        for(int i=0;i<b;i++){
            cout<<"*";
        }
    }
    else{
        cout<<"?";
    }
    cout<<endl;
    cout<<a<<" ";
    if(a>=48  && a<=57)
    {
        a=static_cast<int>(a-48);
        for(int i=0;i<a;i++){
            cout<<"*";
        }
    }
    else{
        cout<<"?";
    }
    cout<<endl;
    
    //Exit
    return 0;
}