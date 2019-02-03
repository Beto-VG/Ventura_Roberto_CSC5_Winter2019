/* 
 * File:   main.cpp
 * Author: Roberto Ventura
 * Created on: February 2, 2019 8:20 PM 
 * Purpose: Compare the answer sheet to the key
 *          and grade
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <fstream>   //File I/O
#include <string.h>    //String Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void print(char []);
void read(char [],int);
int compare(char [],char [], char [],int );

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables 
    const int SIZE=20;
    char key[SIZE]={'A','B','C','D','A','B','C','D','A','B','C','C','A','B','C','D','A','B','C','D' };
    char answers[SIZE]={'A','A','C','A','A','B','C','D','A','B','C','D','A','B','B','D','A','B','C','D'};
    char score[SIZE]={'A','A','C','A','A','B','C','D','A','B','C','D','A','B','B','D','A','B','C','D'};
    int pRight;
    char one[23];
    char two[27];
    int n;
    
    //Initialize or input i.e. set variable values
    read(one,23);
    read(two,27);
    
    //Score the exam
    n=compare(key,answers,score,pRight);
    
    //Display the outputs
    //cout<<"Key   ";print(key);
    //cout<<"Answers   ";print(answers);
    cout<<"C/W     ";print(score);
    cout<<"Percentage Correct = "<<(n/20.0)*100<<"%"<<endl;
    
    ///Exit stage right or left!
    return 0;
}

void read(char a[],int b)
{
    for(int i=0;i<b;i++)
    {
        cin>>a[i];
    }
}

void print(char a[])
{
    for(int i=0;i<20;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int compare(char a[],char b[], char c[],int d)
{
    d=0;
    
    for(int i=0;i<20;i++)
    {
        if(a[i]==b[i])
        {
            c[i]='C';
            d++;
        }
        else
        {
            c[i]='W';
        }
    }
    
    return d;
}