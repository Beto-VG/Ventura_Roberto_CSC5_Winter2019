/* 
 * Author:  Roberto Ventura
 * Date:    1/7/19
 * Purpose: Construct Large "C" with letter user inputs
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
    char letter;
    
    //Input or initialize values Here
    cout<<"Input the character to make the Big C!\n";
    cin>>letter;
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<endl;
    cout<<"    "<<letter<<" "<<letter<<" "<<letter<<"\n";
    cout<<"   "<<letter<<"     "<<letter<<"\n";
    cout<<"  "<<letter<<endl;
    cout<<"  "<<letter<<endl;
    cout<<"  "<<letter<<endl;
    cout<<"  "<<letter<<endl;
    cout<<"  "<<letter<<endl;
    cout<<"   "<<letter<<"     "<<letter<<"\n";
    cout<<"    "<<letter<<" "<<letter<<" "<<letter<<"\n";
    
    //Exit
    return 0;
}