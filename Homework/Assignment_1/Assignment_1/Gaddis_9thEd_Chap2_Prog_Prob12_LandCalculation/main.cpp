/* 
 * Author:  Roberto Ventura
 * Date:    1/8/19
 * Purpose: Convert square feet to acres given any amount of square feet
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
    float acres;
    
    //Input or initialize values Here
    cout<< "Input the number of square feet."<<endl;
    cin>>x;
    
    //Process/Calculations Here
    acres = x/43560;
    
    //Output Located Here
    cout<<"The number of acres is "<<acres; 
    
    //Exit
    return 0;
}