/* 
 * Author: Roberto Ventura
 * Created on January 14, 2019
 * Purpose: Calculate ISP bill given hours and package type 
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char x;
    float hours,total;

    //Initialize or input i.e. set variable values
    cout<<"ISP Bill\n";
    cout<<"Input Package and Hours\n";
    cin>>x>>hours;
    
    //Map inputs -> outputs
    if(hours>0 && hours<=744)
    { 
        if (x=='A' && hours>10.0)
        {
            total = 9.95f + ((hours-10.0f) * 2.00f);
        }
        else if (x=='A' && hours<10.0)
        {
            total = 9.95f;
        }
        else if (x=='B' && hours>20.0)
        {
            total = 14.95f + ((hours-20.0f) * 1.00);
        }
        else if(x=='B' && hours<20.0)
        {
            total = 14.95f;
        }
        else if (x=='C')
        {
            total = 19.95f;
        }    
        else{
            cout<<"Error no such package"<<endl;
            return 0;
        }
    }
    else{
        cout<<"Not valid amount of hours"<<endl;
        return 0;
    }
    
    //Display the output
    cout<<"Bill = $ "<<total;
    
    //Exit stage right or left!
    return 0;
}