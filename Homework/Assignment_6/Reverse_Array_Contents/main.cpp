/* 
 * File:   main.cpp
 * Author: Roberto Ventura
 * Created: February 1, 2019 11:03 AM
 * Purpose:  Reverse the Array
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

//Function Prototypes
void  init(int [],int);//Initialize the array
void  print(int [],int,int);//Print the array
void  revrse(int [],int);;//Reverse the array


//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=50;
    int test[SIZE];
    
    //Initialize or input i.e. set variable values
    init(test,SIZE);
    
    //Display the outputs
    //print(test,SIZE,10);
    
    //Reverse the Values
    revrse(test,SIZE);
    
    //Display the outputs
    print(test,SIZE,10);

    //Exit stage right or left!
    return 0;
}

void init(int a[], int b)
{
    for(int i=0;i<b;i++)
    {
        cin>>a[i];
    }
}

void print(int a[],int b,int c)
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

void revrse(int a[],int b){
    int arr[b];
    
    for(int i=0;i<b;i++)
    {
        arr[i]=a[i];
    }
    
    int x=49;
    for(int j=0;j<b;j++)
    {
        a[j]=arr[x];
        x--;
    }
}