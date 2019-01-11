/* 
 * Author:  Roberto Ventura 
 * Date:    1/7/19
 * Purpose: Solve for total sales tax given stale sales tax and country sales tax 
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
    float stateTax = .04f;
    float fedTax = .02f;
    int amt;
    float total;
    
    //Input or initialize values Here
    cout<<"Input price of purchase"<<endl;
    cin>>amt;
    
    //Process/Calculations Here
    total = (amt*stateTax) + (amt*fedTax);
    
    //Output Located Here
    cout<<"The total sales tax is "<<total;
    
    //Exit
    return 0;
}