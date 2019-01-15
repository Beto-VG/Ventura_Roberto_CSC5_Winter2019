/* 
 * Author: Roberto Ventura
 * Created on January 14, 2019
 * Purpose:  output first, second, third in a race
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string runA, runB, runC,first,second,third;
    float timA, timB, timC, f,s,t;
    
    //Initialize or input i.e. set variable values
    cout<<"Race Ranking Program\n";
    cout<<"Input 3 Runners\n";
    cout<<"Their names, then their times\n";
    cin>>runA>>timA>>runB>>timB>>runC>>timC;
   
    //Map inputs -> outputs
    if (timA<timB && timA<timC)
    {
        f=timA;
        first=runA;
        
        if(timB<timC)
        {
            s=timB;
            second=runB;
            t=timC;
            third=runC;
        }
        else
        {
            s=timC;
            second=runC;
            t=timB;
            third=runB;
        }
    }
    else if (timB<timA && timB<timC)
    {
        f=timB;
        first=runB;
        
        if(timA<timC)
        {
            s=timA;
            second=runA;
            t=timC;
            third=runC;
        }
        else if (timC<timA)
        {
            s=timC;
            second=runC;
            t=timA;
            third=runA;
        }
    }
    else if (timC<timA && timC<timB)
    {
        f=timC;
        first=runC;
        
        if(timA<timB)
        {
            s=timA;
            second=runA;
            t=timB;
            third=runB;
        }
        else if(timB<timA)
        {
            s=timB;
            second=runB;
            t=timA;
            third=runA;
        }
    
    }
    
    //Display the outputs
    cout<<first<<"\t "<<f<<endl;
    if(s<100.00){
        cout<<second<<"\t "<<s<<endl;
    }
    else{
        cout<<second<<"\t"<<s<<endl;
    }
    cout<<third<<"\t"<<t;
    
    //Exit stage right or left!
    return 0;
}