/* 
 * File:   main.cpp
 * Author: Roberto Ventura
 * Created on January 21, 2019
 * Purpose:  Turn Assignment 4 Into 1 Program With Menu (Lab Assignment 6)
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int wchProb;//Choose which problem
    
    //Loop Menu until exit
    do
    {

        //Initialize or input i.e. set variable values
        cout<<"Menu Program"<<endl;
        cout<<"Type 1 for Problem 1 Min and Max"<<endl;
        cout<<"Type 2 for Problem 2 Sum up to N"<<endl;
        cout<<"Type 3 for Problem 3 Rectangle Shape"<<endl;
        cout<<"Type 4 for Problem 4 Inc/Dec Pattern"<<endl;
        cout<<"Type 5 for Problem 5 Pay in Pennies"<<endl;
        cout<<"Type anything else to exit"<<endl;
        cin>>wchProb;

        //Solve Problems
        switch(wchProb)
        {
            case 1:
            {
                problem1();
                break;
            }
            case 2:
            {
                problem2();
                break;
            }
            case 3:
            {
                problem3();
                break;
            }
            case 4:
            {
                problem4();
                break;
            }
            case 5:
            {
                problem5();
                break;
            }
            default:
            {
                cout<<"Exiting Menu, no problem selected"<<endl;
            }
        }
    
    //End of Menu/problems
    }while(wchProb>=1 && wchProb<=5);

    //Exit stage right or left!
    return 0;
}

//Find the smallest and largest numbers in a set
void problem1()
{
    //Declare Variables
    int n;      //n is number user inputs, integer range 
    int large=0,small=1000; //large is the biggest of numbers user entered
                            //small is the smallest of numbers user entered
    
    //Initialize or input i.e. set variable values
    //Let user enter numbers until they enter -99
    cout<<endl;
    cout<<"Enter integers or enter -99 to stop\n";
    do
    {
        cin>>n;
        //if number user entered is larger than the largest, largest is now that number
        if(n>large)
        {
            large=n;
        }
        //if number user entered is smaller than the smallest, smallest is now that number
        if(n<small && n!= -99)
        {
            small=n;
        }
    }while(n!=-99);
    
    //Display the outputs
    cout<<"Smallest number in the series is "<<small<<endl;
    cout<<"Largest  number in the series is "<<large<<endl;
    cout<<endl;
}

//Adding Every Number Until N or Number User Wants
void problem2()
{
    //Declare Variables
    int n, total=0; //Total is sum of all numbers up to integer n
    
    //Initialize or input i.e. set variable values
    cout<<endl;
    cout<<"Enter a positive integer for sum up to that number\n";
    cin>>n;
    
    //Map inputs -> outputs
    //As long as user entered number that is positive integer
    if(n>0)
    {
        //loop through from 1 to N and add each to the total
        for(int i=0;i<=n;i++)
        {
            total=total+i;
        }
    }
    else
    {
        cout<<"Positive Numbers Only!\n";    
    }
    
    //Display the outputs
    if(total>0)
    {
        cout<<"Sum = "<<total<<endl;
    }
    cout<<endl;
}

// Make Rectangle with dimensions set by user
void problem3()
{
    //Declare Variables
    int n;  //size of rectangle will have dimension n by n
    char l; //the character to use to make rectangle
    
    //Initialize or input i.e. set variable values
    cout<<endl;
    cout<<"Enter positive number for size of rectangle & a character \n";
    cin>>n>>l;
    
    //Map inputs -> outputs
    //loop however many rows are in the rectangle (n)
    for(int i=0;i<n;i++)
    {
        //in a row loop however many columns there are (n)
        for(int j=0;j<n;j++)
        {
            cout<<l;    
        }
        
        cout<<endl;   
        
    }
    cout<<endl;
}

//Make a pattern with size input from user
void problem4()
{
    //Declare Variables
    int input;  //Size entered by user which is integer size, hw program was 10
    int x=1;    //The amount of '+' needed to output in a row
                //starts at 1 and increments in for loop up to size
    int y;      //The amount of '+' needed to output in a row,equal
                //will start at input size and go down to 1
    
    //Initialize or input i.e. set variable values
    cout<<endl;
    cout<<"Enter positive number for size\n";
    cin>>input;
    
    //Map inputs -> outputs
    y=input;
    
    //First Half where amount of '+' increases from 1 - input
    //amount of rows equals input
    for(int i=0;i<input;i++)
    {
        //as long as x hasnt gone over size
        if(x<=input)
        {
            //loop through however many '+' need to be shown in row
            for(int j=0;j<x;j++){
                cout<<"+";
            }
            cout<<endl<<endl;   //end current line and free one more
            x++;    //increment x (how many '+' get shown)
        }
        
    }
    
    //Second Half where amount of + decreases from input - 1
    //amount of rows equals input
    for(int i=0;i<input;i++)
    {
        //as long as y hasnt gone down to 0
        if(y>0)
        {
            //loop through however many '+' need to be shown in row
            for(int j=0;j<y;j++)
            {
                cout<<"+";
            }
        
            //end 2 lines to match expected output
            cout<<endl<<endl;
            y--;    //decrease y (how many '+' get shown
        }
    }
}

//Calculate Pay with Double the pennies a day
void problem5()
{
    //Declare Variables
    unsigned int days;  //days for pennies to be doubled, integer range
    float totPay,pay;   //pay for a day, and total pay is sum of all days
    
    //Prompt For Data
    cout<<endl;
    cout<<"Enter a positive amount of days time pennies should be doubled\n";
    cin>>days;
    
    //Input Validation
    if(days<0)
    {
        cout<<"Days Must Be Positive"<<endl;
    }
    
    pay=1;
    
    //Set Loop
    cout<<fixed<<setprecision(2)<<showpoint;
    for(int i=1;i<=days;i++)
    {
        totPay += pay;
        pay += pay;
    }
    
    
    //Display total earnings in dollar amount
    //Calculate amount in pennies
    //Output amount
    //account for inaccuracy in larger amount 
    if(totPay/100.00>10000000)
    {
        cout<<"Pay = $"<<(totPay/100.00)-0.01<<endl;   
    }
    else
    {
        cout<<"Pay = $"<<totPay/100.00<<endl;
    }
    cout<<endl;
}