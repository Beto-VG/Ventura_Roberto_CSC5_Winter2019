/* 
 * Author: Roberto Ventura
 * Created on January 23, 2019
 * Purpose: Write a function that sets min and max
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void minmax(int,int,int,int&,int&);//Function to find the min and max

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int a,b,c,min,max;
    
    //Initialize Variables
    cout<<"Input 3 numbers\n";
    cin>>a>>b>>c;
    
    //Process/Map inputs to outputs
    minmax(a,b,c,min,max);
    
    //Output data
    cout<<"Min = "<<min<<endl;
    cout<<"Max = "<<max;
    
    //Exit stage right!
    return 0;
}

void minmax(int x,int y,int z,int &mi,int &ma){
    if(x>=y && x>=z)
    {
        ma=x;
    }
    else if(y>=x && y>=z)
    {
        ma=y;
    }
    else if(z>=x && z>=y)
    {
        ma=z;
    }
    
    if(x<=y && x<=z)
    {
        mi=x;
    }
    else if(y<=x && y<=z)
    {
        mi=y;
    }
    else if(z<=x && z<=y)
    {
        mi=z;
    }
}