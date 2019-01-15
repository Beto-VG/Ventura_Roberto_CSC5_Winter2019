/* 
 * File:   main.cpp
 * Author: Roberto Ventura
 * Created on January 14, 2019, 7:53 PM
 * Purpose:  Arabic year to Roman 
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
    int year;
    int n1,n10,n100,n1000;
    int temp;
    string roman;
    
    //Initialize or input i.e. set variable values
    cout<<"Arabic to Roman numeral conversion.\n";
    cout<<"Input the integer to convert.\n";
    cin>>year;
    
    //Map inputs -> outputs
    n1=(year)%10;
    n10=(year/10)%10;
    n100=(year/100)%10;
    n1000=(year/1000)%10;
    
    if(year>=1000 && year<=3000){
        //Thousands
        if(n1000==3)    //3000
        {
            roman="MMM";
        }
        else if(n1000==2)   //2000
        {
            roman="MM";
        }
        else if(n1000==1)   //1000
        {
            roman="M";
        }
        
        //Hundreds
        if(n100==5) 
        {
            roman=roman+"D";
        }
        else if(n100>5)
        {
            if(n100==9)
            {
                roman=roman+"CM";
            }
            else{
                temp=n100-5;
            
                roman=roman+"D";
                for(int i=0;i<temp;i++)
                {
                    roman=roman+"C";
                }   
            }
            
        }
        else if(n100<5)
        {
            if(n100==4){
                roman=roman+"CD";
            }
            else
            {
                for(int i=0;i<n100;i++)
                {
                    roman=roman+"C";
                }
            }
            
        }
        
        //Tens
        if(n10==5) 
        {
            roman=roman+"L";
        }
        else if(n10>5)
        {
            temp=n10-5;
            
            roman=roman+"L";
            for(int i=0;i<temp;i++)
            {
                roman=roman+"X";
            }
            
        }
        else if(n10<5)
        {
            if(n10==4)
            {
                roman=roman+"XL";
            }
            else
            {
                for(int i=0;i<n10;i++)
                {
                    roman=roman+"X";
                }   
            }
        }
        
        //Ones
        if(n1==1 || n1==2 || n1==3)
        {
            for(int i=0;i<n1;i++)
            {
                roman=roman+"I";
            }
        }
        else if(n1==4)
        {
            roman=roman+"IV";
        }
        else if(n1==5)
        {
            roman=roman+"V";
        }
        else if(n1>5)
        {
            temp=n1-5;
            roman=roman+"V";
            for(int i=0;i<temp;i++)
            {
                roman=roman+"I";
            }
        }
    }
    else
    {
        cout<<year<<" is Out of Range!";
        return 0;
    }


    //Display Output
    cout<<year<<" is equal to "<<roman;
    //Exit stage right or left!
    return 0;
}

