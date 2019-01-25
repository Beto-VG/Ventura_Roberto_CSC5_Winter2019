/* 
 * Author: Roberto Ventura 
 * Created on January 23, 2019 
 * Purpose:  Check if a number is prime with a function
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
bool isPrime(int);//Determine if the input number is prime.

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n;
    
    //Initialize Variables
    cout<<"Input a number to test if Prime.\n";
    cin>>n;
    
    //Process/Map inputs to outputs
    
    //Output data
    if(isPrime(n)==true){
        cout<<n<<" is prime.";
    }
    else{
        cout<<n<<" is not prime.";
    }
    
    //Exit stage right!
    return 0;
}

bool isPrime(int x){
    if(x==1){
        return true;
    }
    else if(x==2){
        return true;
    }
    else if(x==3){
        return true;
    }
    else if(x%2==0){
        return false;
    }
    else if(x%3==0){
        return false;
    }
    else{ 
        return true;
    }
}