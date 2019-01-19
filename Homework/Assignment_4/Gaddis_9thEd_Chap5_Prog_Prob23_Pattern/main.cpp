/* 
 * File:   main.cpp
 * Author: Roberto Ventura
 * Created on January 18, 2019
 * Purpose:  make a pattern with input of user
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
    int input;
    int x=1;
    int y;
    //Initialize or input i.e. set variable values
    cin>>input;
    
    
    //Map inputs -> outputs
    y=input;
    //First Half where amount of + increases from 1 - input
    for(int i=0;i<input;i++)
    {
        if(x<=input)
        {
            for(int j=0;j<x;j++){
                cout<<"+";
            }
            cout<<endl<<endl;
            x++;
        }
        
    }
    
    //Second Half where amount of + decreases from input - 1
    for(int i=0;i<input;i++)
    {
        if(y>0)
        {
            for(int j=0;j<y;j++)
            {
                cout<<"+";
            }
        
            if(y!=1)
            {
                cout<<endl<<endl;
            }
            y--;
        }
    }
    //Display the outputs
    

    //Exit stage right or left!
    return 0;
}