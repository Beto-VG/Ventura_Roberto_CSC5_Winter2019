/* 
 * Author: Roberto Ventura
 * Created on January 23, 2019
 * Purpose:  Calculate Factorial of a Number with a Function
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int fctrl(int);//Function to write for this problem

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int fact;           //Integer to caclculate factorial,
    
    //Initialize Variables
    cout<<"This program calculates the factorial using a function prototype found in the template for this problem.\n";
    cout<<"Input the number for the function.\n";
    cin>>fact;
    
    //Process/Map inputs to outputs
    
    //Output data
    //Ouput number and its factorial
    cout<<fact<<"! = "<<fctrl(fact);
    
    //Exit stage right!
    return 0;
}

int fctrl(int x){
    //Start total at 1 so the first time for loop runs the total = 1 * whatever x gets passed in 
    //(factorial starting point)
    int total=1;
    
    //loop through multiplying from x until 1 and set total to hold answer
    //starts at x and ends at 1
    for(int i=x;i>=1;i--){
        total=total *i;
    }
    
    return total;
}