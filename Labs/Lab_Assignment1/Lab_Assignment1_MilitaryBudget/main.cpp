/*
 * Author:  Roberto Ventura 
 * Date:    1/8/19
 * Purpose: Calculate the percent that military budget makes up in federal budget 
*/

//System Libraries Here
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    
//Declaration of variables
float milBdgt = 7.0e11f;    //Military Budget = 700 Billion   
float fedBdgt = 4.1e12f;    //Federal Budget  = 4.1 Trillion
float mlPrcnt;

//Calculations Needed
mlPrcnt = (milBdgt/fedBdgt)*100.0f;  

//Output Here
cout<<"The military budget as a percentage of federal budget is "<<mlPrcnt<<"%";         

//Exit
return 0;
}

