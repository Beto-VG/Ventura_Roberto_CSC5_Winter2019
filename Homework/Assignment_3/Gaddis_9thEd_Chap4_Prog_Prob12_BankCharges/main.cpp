/* 
 * Author: Roberto Ventura
 * Created on January 13, 2019, 12:36 PM
 * Purpose:  Calculate remaining balance, check fees for the month
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float balance, totalBal, checkfee, fees, monthlyfee = 10.0f;
    int checks;
    
    //Initialize or input i.e. set variable values
    cout<<"Monthly Bank Fees\n";
    cout<<"Input Current Bank Balance and Number of Checks\n";
    cin>>balance>>checks;
    
    //Map inputs -> outputs
    if (checks>0 && balance>0)
    {
        if(balance<400.00)
        {
            fees=15.0f;
        }
        else{
            fees=0.0f;
        }
        
        if (checks<20)
        {
            checkfee = (.10f * checks); 
            totalBal = balance-(fees + monthlyfee + checkfee);    
        }
        else if (checks>=20 && checks<39)
        {
            checkfee = (.08 * checks);
            totalBal = balance-(fees + monthlyfee + checkfee);
        }
        else if (checks>=40 && checks<59)
        {
            checkfee = (.06 * checks);
            totalBal = balance-(fees + monthlyfee + checkfee);
        }
        else if (checks>=60)
        {
            checkfee = (.04 * checks);
            totalBal = balance-(fees + monthlyfee + checkfee);
        }
    }
    else if (balance<0)
    {
        cout<<"The account is overdrawn";
    }
   
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Balance     $"<<"   "<<balance<<endl;
    cout<<"Check Fee   $"<<"     "<<checkfee<<endl;
    cout<<"Monthly Fee $"<<"    "<<monthlyfee<<endl;
    if(fees<10.00)
    {
        cout<<"Low Balance $"<<"     "<<fees<<endl;
    }
    else{
        cout<<"Low Balance $"<<"    "<<fees<<endl;
    }
    
    if(totalBal<100.00){
        cout<<"New Balance $"<<"    "<<totalBal;
    }
    else{
        cout<<"New Balance $"<<"   "<<totalBal;
    }
    
    //Exit stage right or left!
    return 0;
}