/* 
 * File:   main.cpp
 * Author: Roberto Ventura
 * Created on January 27, 2019 
 * Purpose:  Infinite Series
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float num=1;
    float sum=0.0f;
    int nTerms;
    float x;
    int sign=-1; 
    int denom=1;            //Denominator
    float top;              //Top portion of equation
    float eqtn;         
    
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nTerms;
    
    nTerms=nTerms-1;              //Subtract 1 from n to start at zero

    for(int i=0;i<=nTerms;i++){ 
        num=((2*i)+1);   //Number that will become the factorial   
        top=pow(x,num);       //The numerator 

    
        for(int j=1;j<=num;j++)   //Get factorial
        { 
            denom=denom*j;     //Create the factorial 
            sign=(pow(-1.0,i));  //Alternate Signs 
            eqtn=((top*sign)/denom) ;  
        }

        denom=1;           //Erase the value of denominator to start loop again
        sum=sum+eqtn;      //Add the results 
    }
    
    //Output the result here
    cout<<fixed<<setprecision(6)<<showpoint;
    cout<<sum<<endl;   
    
    
    
    //Exit
    return 0;
}
