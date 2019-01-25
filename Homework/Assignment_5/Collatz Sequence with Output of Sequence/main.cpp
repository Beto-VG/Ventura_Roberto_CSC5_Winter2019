/* 
 * Author: Roberto Ventura
 * Created on January 23, 2019
 * Purpose:  Find how many steps it took for number to reach 1 with collatz sequence and list sequence
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
    int n,ns;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    ns=collatz(n);
    
    //Output data
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            ns<<" steps";
    
    //Exit stage right!
    return 0;
}

int collatz(int x){
    int count=1;
    
    //as long as number hasnt reached 1
    while(x!=1)
    {
        cout<<x<<", ";
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
    
    //this is gonna be 1 and endline
    cout<<x<<endl;
    
    //return number of steps
    return count;
}