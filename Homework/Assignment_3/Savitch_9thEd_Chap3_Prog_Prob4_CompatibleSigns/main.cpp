/* 
 * File:   main.cpp
 * Author: Roberto Ventura 
 * Created on January 14, 2019
 * Purpose: Match horoscope signs based on their elements
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
    string sign1,sign2;
    //Initialize or input i.e. set variable values
    cout<<"Horoscope Program which examines compatible signs.\n";
    cout<<"Input 2 signs.\n";
    cin>>sign1>>sign2;
    
    //Map inputs -> outputs
    if (sign1 == "Aries" || sign1 == "Leo" || sign1 == "Sagittarius")
    {
        if(sign2 =="Aries" || sign2 == "Leo" || sign2 == "Sagittarius" )
        {
            //Compatible
            cout<<sign1<<" and "<<sign2<<" are compatible Fire signs.";
        }
        else
        {
            // Not compatible
             cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
        }
    }
    else if (sign1 == "Taurus" || sign1 == "Virgo" || sign1 == "Capricorn" )
    {
        if (sign2 == "Taurus" || sign2 == "Virgo" || sign2 == "Capricorn" )
        {
            //Compatible
             cout<<sign1<<" and "<<sign2<<" are compatible Earth signs.";
        }
        else
        {
            //Not compatible
            cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
        }    
    }
    else if (sign1 == "Gemini" || sign1 == "Libra" || sign1 == "Aquarius")
    {
        if (sign2 == "Gemini" || sign2 == "Libra" || sign2 == "Aquarius")
        {
           //Compatible 
            cout<<sign1<<" and "<<sign2<<" are compatible Air signs.";
        }
        else
        {
            //Not Compatible
             cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
        }
    }
    else if (sign1 == "Cancer" || sign1 == "Scorpio" || sign1 == "Pisces")
    {
        if (sign2 == "Cancer" || sign2 == "Scorpio" || sign2 == "Pisces")
        {
            //Compatible
             cout<<sign1<<" and "<<sign2<<" are compatible Water signs.";
        }
        else
        {
            //Not compatible
             cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
        }
    }
        
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}