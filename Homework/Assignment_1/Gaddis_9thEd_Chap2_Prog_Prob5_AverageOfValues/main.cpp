/* 
 * Author:  Roberto Ventura
 * Date:    1/8/19
 * Purpose: Display the average of five numbers given by the user
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
    float x;
    float y;
    float z;
    float h;
    float g;
    float sum;
    float avg;
    
    //Input or initialize values Here
    cout<< "Input 5 numbers."<<endl;
    cin>>x>>y>>z>>h>>g;
    
    //Process/Calculations Here
    sum = x + y + z + h + g;
    avg = (x + y + z + h + g)/5;
    
    //Output Located Here
    cout<< "The average is " << avg;
    
    //Exit
    return 0;
}