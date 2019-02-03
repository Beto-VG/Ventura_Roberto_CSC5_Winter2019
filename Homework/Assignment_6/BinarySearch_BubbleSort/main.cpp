/* 
 * File:   main.cpp
 * Author: Roberto Ventura
 * Created on: February 2, 2019 8:03 PM
 * Purpose:  Binary Search w/ Bubble Sort
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
void bublSrt(int [],int);
bool binSrch(int [],int,int,int&);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val;
    
    //Initialize or input i.e. set variable values
    fillAry(array,SIZE);

    //Sorted List
    bublSrt(array,SIZE);
    
    //Display the outputs
    prntAry(array,SIZE,10);
    cout<<"Input the value to find in the array"<<endl;
    cin>>val;
    if(binSrch(array,SIZE,val,indx))
        cout<<val<<" was found at indx = "<<indx<<endl;

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

void prntAry(int a[],int b,int c)
{
    for(int i=0;i<b;i++)
    {
        cout<<a[i]<<" ";
        if(i==9 || i==19 || i==29 || i==39 || i==49 || i==59 || i==69 || i==79 || i==89 || i==99)
        {
            cout<<endl;
        }
    }
    cout<<endl;
}

void bublSrt(int a[] ,int b){
    int temp;
    
    for(int i=0; i<b-1;i++)
    {
        for(int j=i+1;j<b;j++)
        {
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            
            }
        }
    }
}


bool binSrch(int a[],int b,int c,int &d)
{
    int min=0,max=b-1;
    int index;
    bool found=false;
    do
    {
        index = (max - min)/2.0 + min;
        if(a[index]>c)
        {
            max=index;
        }
        else if(a[index]<c)
        {
            min=index;
        }
        else if(a[index] == c)
        {
            d=index;
            return true;
        }   
    }while(max>min && !found);
    
    return false;
}