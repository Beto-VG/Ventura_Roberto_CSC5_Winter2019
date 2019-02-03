/* 
 * File:   main.cpp
 * Author: Roberto Ventura
 * Created on: February 1, 2019 2:26 PM
 * Purpose:  Linear Search
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
bool linSrch(int [],int,int,int&);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val;
    
    //Initialize or input i.e. set variable values
    val=50;
    fillAry(array,SIZE);
    
    //Display the outputs
    //prntAry(array,SIZE,10);
    if(linSrch(array,SIZE,val,indx))
    {
        cout<<val<<" was found at indx = "<<indx<<endl;
    }
    //Exit stage right or left!
    return 0;
}

void fillAry(int a[],int b)
{
    for(int i=0;i<b;i++)
    {
        cin>>a[i];
    }
}

void prntAry(int a[],int b, int c)
{
    for(int i=0;i<b;i++)
    {
        cout<<a[i]<<" ";
    }
}

bool linSrch(int a[],int b,int c,int &d)
{
    for(int i=0;i<b;i++)
    {
        if(a[i]==c)
        {
            d=i;
            return true;
        }
        
    }
    
    return false;
}