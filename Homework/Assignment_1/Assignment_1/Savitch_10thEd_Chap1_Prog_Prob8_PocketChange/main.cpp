/* 
 * Author:  Roberto Ventura
 * Date:    1/7/19
 * Purpose: To figure out the total cents when given a specific number of quarters, dimes and nickels
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
    int quarters = 25, dimes = 10, nickels = 5;
    int x,y,z;
    int total;
    
    //Input or initialize values Here
    cout<<"Enter the number of Quarters, Dimes and Nickels\n";
    cin>>x>>y>>z;
    
    //Process/Calculations Here
    total = (x * 25) + (y * 10) + (z * 5); 
    
    //Output Located Here
    cout<<endl;
    cout<<x<<" Quarters + "<<y<< " Dimes + "<<z<< " Nickels = "<< total <<" cents!";
    
    //Exit
    return 0;
}