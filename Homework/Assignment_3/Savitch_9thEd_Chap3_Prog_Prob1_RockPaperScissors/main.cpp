/* 
 * File:   main.cpp
 * Author: Roberto Ventura
 * Created on January 14, 2019
 * Purpose: Simulate a round of paper-rocks-scissor game
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
    char pOne,pTwo;
    
    //Initialize or input i.e. set variable values
    cout<<"Rock Paper Scissors Game\n";
    cout<<"Input Player 1 and Player 2 Choices\n";
    cin>>pOne>>pTwo;
    
    //Map inputs -> outputs
    if (pOne=='R' || pOne=='r')
    {
        if(pTwo=='R' || pTwo=='r')
        {
            // TIE
            cout<<"Nobody Wins.";
        }
        else if(pTwo=='P' || pTwo=='p')
        {
            // Player Two Wins
            cout<<"Paper covers rock.";
        }
        else if(pTwo=='S' || pTwo=='s')
        {
            // Player One Wins
            cout<<"Rock breaks scissors.";
        }
        else{
            cout<<"Error! Not a valid option\n";
            return 0;
        }
    }
    else if(pOne=='P' || pOne=='p')
    {
        if(pTwo=='R' || pTwo=='r')
        {
            // Player One Wins
            cout<<"Paper covers rock.";
        }
        else if(pTwo=='P' || pTwo=='p')
        {
            // TIE
            cout<<"Nobody Wins.";
        }
        else if(pTwo=='S' || pTwo=='s')
        {
            // Player Two Wins
            cout<<"Scissors cuts paper.";
        }
        else{
            cout<<"Error! Not a valid option\n";
            return 0;
        }
    }
    else if(pOne=='S' || pOne=='s')
    {
        if(pTwo=='R' || pTwo=='r')
        {
            // Player Two Wins
            cout<<"Rock breaks scissors.";
        }
        else if(pTwo=='P' || pTwo=='p')
        {
            // Player One Wins
            cout<<"Scissors cuts paper.";
        }
        else if(pTwo=='S' || pTwo=='s')
        {
            // TIE
            cout<<"Nobody Wins.";
        }
        else{
            cout<<"Error! Not a valid option\n";
            return 0;
        }
    }
    else{
        cout<<"Error! Not a valid option\n";
        return 0;
    }

    //Exit stage right or left!
    return 0;
}