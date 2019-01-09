/* 
 * Author:  Roberto Ventura
 * Date:    1/8/19
 * Purpose: solve for MPG given both miles and gallons
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
    float gallons;
    float miles;
    float MPG;
    
    //Input or initialize values Here
    cout<<"Input number of gallons and distance traveled."<<endl;
    cin>>gallons>>miles;
    
    //Process/Calculations Here
    MPG = miles/gallons;
    
    //Output Located Here
    cout<< "Your MPG is "<<MPG;
    
    //Exit
    return 0;
}