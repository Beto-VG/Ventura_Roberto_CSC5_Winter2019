/* 
 * Author: Roberto Ventura
 * Created on January 13, 2019
 * Purpose:  sort 3 names
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string a,b,c;
    string first,middle,last;
    //Initialize or input i.e. set variable values
    cout<<"Sorting Names\n";
    cout<< "Input 3 names\n";
    cin>>a>>b>>c;
    
    //Map inputs -> outputs
    if (a>b && a>c)
    {
        last=a;
        if(b>c)
        {
            middle=b;
            first=c;
        }
        else{
            middle=c;
            first=b;
        }
    }
    else if(b>a && b>c){
        last=b;
        if(a>c){
            middle=a;
            first=c;
        }
        else{
            middle=c;
            first=a;
        }
    }
    else if(c>a && c>b){
        last=c;
        if(a>b){
            middle=a;
            first=b;
        }
        else{
            middle=b;
            first=a;
        }
    }
    else{
        cout<<"Error Happened"<<endl;
    }
    
    
    //Display the outputs
    cout<<first<<endl;
    cout<<middle<<endl;
    cout<<last;

    //Exit stage right or left!
    return 0;
}