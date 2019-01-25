/* 
 * File: main.cpp
 * Author: Roberto Ventura
 * Created on January 24, 2019
 * Purpose: Calculate avg of test scores with 1 of 5 being dropped
 */
 
#include <iostream>
#include <iomanip>
using namespace std;
 
 //Function Prototypes
 void getScre(int &,int &, int &, int &,int &);
 float calcAvg(int,int,int,int,int);
 int fndLwst(int,int,int,int,int);
 
int main(int argc,char **argv){
    //Declare Variables
    int a,b,c,d,e;
    
    getScre(a,b,c,d,e);
    
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"The average test score = "<<calcAvg(a,b,c,d,e);
    
    return 0;
}
 
void getScre(int &one,int &two,int &three,int &four,int &five)
{
    cout<<"Find the Average of Test Scores\n";
    cout<<"by removing the lowest value.\n";
    cout<<"Input the 5 test scores.\n";
    cin>>one;
    while(one<1 || one>100){
        cin>>one;
    }
    cin>>two;
    while(two<1 || two>100){
        cin>>two;
    }
    cin>>three;
    while(three<1 || three>100){
        cin>>three;
    }
    cin>>four;
    while(four<1 || four>100){
        cin>>four;
    }
    cin>>five;
    while(five<1 || five>100){
        cin>>five;
    }
}
 
float calcAvg(int one,int two,int three,int four, int five)
{
    int total=0;
    int lowest=fndLwst(one,two,three,four,five);
    float avg;
    
    if(lowest==one)
    {
        total=two+three+four+five;
    }
    else if(lowest==two)
    {
        total=one+three+four+five;
    }
    else if(lowest==three)
    {
        total=one+two+four+five;
    }
    else if(lowest==four)
    {
        total=one+two+three+five;
    }
    else if(lowest==five){
        total=one+two+three+four;
    }
    
    avg=total/4.0;
    
    return avg;
}

int fndLwst(int one,int two,int three, int four,int five)
{
    if(one <= two && one <= three && one <= four && one <= five)
    {
        return one;
    }
    else if(two <= one && two <= three && two <= four && two <= five)
    {
        return two;
    }
    else if(three <= two && three <= one && three <= four && three <= five)
    {
        return three;
    }
    else if(four <= two && four <= one && four <= three && four <= five)
    {
        return four;
    }
    else if(five <= two && five <= one && five <= four && five <= three)
    {
        return five;
    }
}