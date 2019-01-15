/* 
 * File:   main.cpp
 * Author: Roberto Ventura
 * Created on January 13, 2019
 * Purpose:  calculate points for customers
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
    int books;
    //Initialize or input i.e. set variable values
    cout<<"Book Worm Points\n";
    cout<<"Input the number of books purchased this month.\n";
    cin>>books;
    
    //Map inputs -> outputs
    if (books == 0)
    {
        cout<< "Books purchased =  "<<books<<"\nPoints earned   = 0";
    }
    else if (books == 1)
    {
        cout<<"Books purchased =  "<<books<<"\nPoints earned   = 5";
    }
    else if (books == 2){
        cout<< "Books purchased =  "<<books<<"\nPoints earned   = 15";
    }
    else if (books == 3){
        cout<<"Books purchased =  "<<books<<"\nPoints earned   = 30";
    }
    else if (books>= 4){
        cout<<"Books purchased =  "<<books<<"\nPoints earned   = 60";
    }
    else{
        cout<<"Error!"<<endl;
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
