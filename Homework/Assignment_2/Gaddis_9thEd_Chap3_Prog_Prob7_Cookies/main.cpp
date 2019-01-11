/* 
 * Author: Roberto Ventura
 * Created on January 10, 2019
 * Purpose:  Report how many calories have been consumed given amount of cookies
 *           
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
    int cal,cookies;
    
    //Initialize or input i.e. set variable values
    cout<<"Calorie Counter"<<endl;
    cout<< "How many cookies did you eat?\n";
    cin>>cookies;
    
    //Map inputs -> outputs
    cal = cookies*75;
    //Display the outputs
    cout<< "You consumed "<<cal<< " calories.";
    
    //Exit stage right or left!
    return 0;
}