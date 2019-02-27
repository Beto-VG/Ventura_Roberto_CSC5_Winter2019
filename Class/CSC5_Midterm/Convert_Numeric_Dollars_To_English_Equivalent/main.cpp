/* 
 * File:   main.cpp
 * Author: Roberto Ventura
 * Created on January 27, 2019 11:19 AM
 * Purpose:  Convert a number to English check amount
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short number;
    int n1000s,n100s,n10s,n1s;
    string words;
    
    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    
    //Calculate the 1000's, 100's, 10's and 1's
    n1000s=number/1000;  //Determine # 1000'S
    number-=n1000s*1000; //Subtract from the Original number
    n100s=number/100;    //Repeat process for all digits
    number-=n100s*100;
    n10s=number/10;    //Repeat process for all digits
    number-=n10s*10;
    n1s=number;
    
    //Build String 
    switch(n1000s)
    {
        case 0:
        {
            words = "";
            break;
        }
        case 1:
        {
            words = "One Thousand ";
            break;
        }
        case 2:
        {
            words = "Two Thousand ";
            break;
        }
        case 3: 
        {
            words = "Three Thousand ";
            break;
        }
    }
    
    switch(n100s)
    {
        case 1:
        {
            words += "One Hundred ";
            break;
        }
        case 2: 
        {
            words += "Two Hundred ";
            break;
        }
        case 3:
        {
            words += "Three Hundred ";
            break;
        }
         case 4:
        {
            words += "Four Hundred ";
            break;
        }
        case 5: 
        {
            words += "Five Hundred ";
            break;
        }
        case 6:
        {
            words += "Six Hundred ";
            break;
        }
         case 7:
        {
            words += "Seven Hundred ";
            break;
        }
        case 8: 
        {
            words += "Eight Hundred ";
            break;
        }
        case 9:
        {
            words += "Nine Hundred ";
            break;
        }
    }
    
    switch (n10s)
    {
        //if there is a 1 in 10s spot check what number is 
        case 1:
        {
            if(n1s==0)
            {
                words += "Ten ";
            }
            else if(n1s==1)
            {
                words += "Eleven ";
            }
            else if(n1s==2)
            {
                words += "Twelve ";
            }
            else if(n1s==3)
            {
                words += "Thirteen ";
            }
            else if(n1s==4)
            {
                words += "Fourteen ";
            }
            else if(n1s==5)
            {
                words += "Fifteen ";
            }
            else if(n1s==6)
            {
                words += "Sixteen ";
            }
            else if(n1s==7)
            {
                words += "Seventeen ";
            }
            else if(n1s==8)
            {
                words += "Eighteen ";
            }
            else if(n1s==9)
            {
                words += "Nineteen ";
            }
            break;
        }
        case 2: 
        {
            words += "Twenty ";
            break;
        }
        case 3:
        {
            words += "Thirty ";
            break;
        }
         case 4:
        {
            words += "Forty ";
            break;
        }
        case 5: 
        {
            words += "Fifty ";
            break;
        }
        case 6:
        {
            words += "Sixty ";
            break;
        }
         case 7:
        {
            words += "Seventy ";
            break;
        }
        case 8: 
        {
            words += "Eighty ";
            break;
        }
        case 9:
        {
            words += "Ninety ";
            break;
        }
    }
    
    //only run if n10s was greater than because if it was 1 then it was handled in case 1 of n10s for teen numbers
    if(n10s>1 || n10s==0){
        switch (n1s)
        {
            case 1:
            {
                words += "One ";
                break;
            }
            case 2: 
            {
                words += "Two ";
                break;
            }
            case 3:
            {
                words += "Three ";
                break;
            }
            case 4:
            {
                words += "Four ";
                break;
            }
            case 5: 
            {
                words += "Five ";
                break;
            }
            case 6:
            {
                words += "Six ";
                break;
            }
            case 7:
            {
                words += "Seven ";
                break;
            }
            case 8: 
            {
                words += "Eight ";
                break;
            }
            case 9:
            {
                words += "Nine ";
                break;
            }
        }
    }
    
    
    //Output the check value
    //cout<<n1000s<<" "<<n100s<<" "<<n10s<<" "<<n1s<<endl;
    cout<<words<<"and no/100's Dollars"<<endl;
    
    //Exit
    return 0;
}