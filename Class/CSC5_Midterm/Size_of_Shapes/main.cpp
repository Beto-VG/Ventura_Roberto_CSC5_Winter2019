/* 
 * File:   main.cpp
 * Author: Roberto Ventura
 * Created on January 26, 2019 11:30 
 * Purpose:  Cross one-side or the other
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void createX(int);
void createB(int);
void createF(int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short x;
    char shape;       //f-> forward b->backward x->cross
    
    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>x>>shape;
    
    //cout<<x<<shape<<endl;
    //Draw the shape
    if(shape=='x' || shape=='X')
    {
        createX(x);
    }
    else if(shape=='b' || shape=='B')
    {
        createB(x);
    }
    else if(shape=='f' || shape=='F')
    {
        createF(x);
    }
    else
    {
        cout<<"Not a valid shape!\n";
    }
    
    //Exit
    return 0;
}

void createX(int y)
{
    if(y%2==0)
    {
        for(int i=1;i<=y;i++)
        {
            for(int j=1;j<=y;j++)
            {
                if(i==j || j==(y+1)-i)
                { 
                    cout<<j;
                }
                else
                { 
                    cout<< " ";
                }
            }
            cout<<endl;
        }
    }
    else{
        for(int i=y;i>=1;i--)
        {
            for(int j=y;j>=1;j--)
            {
                if(i==j || j==(y+1)-i)
                { 
                    cout<<j;
                    
                }
                else
                { 
                    cout<< " ";
                }
            }
            cout<<endl;
        }
    }
    
}

void createB(int y)
{
    int size=y;
    int lSps=0;
    int rSps=y-1;
    
    for(int i=0;i<y;i++)
    {
        for(int j=0;j<lSps;j++)
        {
            cout<<" ";
        }
        cout<<size;
        for(int v=0;v<rSps;v++)
        {
            cout<<" ";
        }
        cout<<endl;
        size--;
        lSps++;
        rSps--;
    }
}

void createF(int y)
{
    int size=y;
    int lSps=y-1;
    int rSps=0;
    
     for(int i=0;i<y;i++)
    {
        for(int j=0;j<lSps;j++)
        {
            cout<<" ";
        }
        cout<<size;
        for(int v=0;v<rSps;v++)
        {
            cout<<" ";
        }
        cout<<endl;
        size--;
        lSps--;
        rSps++;
    }
}