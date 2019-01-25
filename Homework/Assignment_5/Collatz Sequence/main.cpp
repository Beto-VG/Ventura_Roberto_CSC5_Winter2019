/* 
 * Author: Roberto Ventura
 * Created on January 23, 2019
 * Purpose:  Find how many steps it took for number to reach 1 with collatz sequence
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int collatz(int);//3n+1 sequence

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            collatz(n)<<" steps";
    
    //Output data
    
    //Exit stage right!
    return 0;
}

int collatz(int x){
    int count=1;
    
    //as long as number hasnt reached 1
    while(x!=1)
    {
        
        //if number is even
        if(x%2==0){
            x=x/2.0f;
        }
        //if number is odd
        else{
            x=(3*x)+1;
        }
        //increment steps count
        count++;
    }
    
    //return number of steps
    return count;
}