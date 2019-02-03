/* 
 * File:   main.cpp
 * Author: Roberto Ventura
 * Created on: February 1, 2019 12:06 PM
 * Purpose: Calculate Standard Deviation
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time to set random number seed
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float MAXRAND=pow(2,31)-1;

//Function Prototypes
void  init(float [],int);//Initialize the array
void  print(float [],int,int);//Print the array
float avgX(float [],int);//Calculate the Average
float stdX(float [],int);//Calculate the standard deviation

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=20;
    float test[SIZE];
    
    //Initialize or input i.e. set variable values
    init(test,SIZE);
    
    //Display the outputs
    //print(test,SIZE,5);
    cout<<fixed<<setprecision(7)<<showpoint;
    cout<<"The average            = "<<avgX(test,SIZE)<<endl;
    cout<<"The standard deviation = "<<stdX(test,SIZE)<<endl;

    //Exit stage right or left!
    return 0;
}

void init(float a[],int b)
{
    for(int i=0;i<b;i++)
    {
        cin>>a[i];
    }
}

void print(float a[],int b,int c)
{
    for(int i=0;i<b;i++)
    {
        cout<<a[i]<<" ";
        if(i==c-1 || i==(c*2)-1 || i==(c*3)-1 || i==(c*4)-1 || i==(c*5)-1)
        {
            cout<<endl;
        }
    }
}


float avgX(float a[],int b)
{
    float total=0.0;
    float avg;
    for(int i=0;i<b;i++)
    {
        total += a[i];
    }
    avg=total/b;
    
    return avg;
}

float stdX(float a[], int b)
{
    float arrAvg=avgX(a,b);
    float sum=0.0;      //sum of differnces to avg
    float n;        //temp variable to hold the the substraction of a[i] and avg
    float x;        //standard deviation
    float form;     //formula before sqrt
    for(int i=0;i<b;i++)
    {
        n=a[i]-arrAvg;
        n=pow(n,2);
        
        //add onto sum
        sum+=n;
    }
    
    form=sum/(b-1);
    x=sqrt(form);
    
    return x;
}