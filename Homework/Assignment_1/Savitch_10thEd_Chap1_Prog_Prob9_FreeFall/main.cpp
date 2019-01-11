/* 
 * Author:  Roberto Ventura
 * Date: 1/7/19
 * Purpose: Calculate distance from free fall given distance and time
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Constants like PI, e, Gravity, Conversions, 2D array size only!

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number Seed Here
    
    //Declare all Variables Here
    float acceleration = 32.0f;
    float time;
    float distance;
    
    //Input or initialize values Here
    cout<<"Input the time in free-fall"<<endl;
    cin>>time;
    
    //Process/Calculations Here
    distance= 0.5f*(acceleration * pow(time,2) );
    
    //Output Located Here
    cout<<endl;
    cout<<"The distance = "<< distance <<" feet";
    
    //Exit
    return 0;
}