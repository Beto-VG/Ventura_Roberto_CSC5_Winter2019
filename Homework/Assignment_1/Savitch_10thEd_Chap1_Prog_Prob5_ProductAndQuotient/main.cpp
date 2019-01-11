/* 
 * Author:  Roberto Ventura
 * Date:    1/7/19
 * Purpose: Display product and quotient of two integers which user inputs
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Constants like PI, e, Gravity, Conversions, 2D array size only!

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number Seed Here
    
    //Declare all Variables Here
    int x,y,product,quotient;
    
    //Input or initialize values Here
    cout<<"Input 2 integer numbers.\n";
    cin>>x>>y;
    
    //Process/Calculations Here
    product = x * y;
    quotient = y/x;
    
    //Output Located Here
    cout<<endl;
    cout<<"The product of "<<x<<"*"<<y<<" = "<<product<<endl;
    cout<<endl;
    cout<<"The quotient of "<<y<<"/"<<x<<" = "<<quotient;
    //Exit
    return 0;
}