/* 
 * File: main.cpp
 * Author: Roberto Ventura
 * Created on January 24, 2019
 * Purpose: Convert 24 hour notation to 12 hour notation
 */
 
#include <iostream>
#include <string>

using namespace std;

//Function Prototypes
void input(string&);
void conversion(string,int &,int &,char &,bool &);
void output(string,int,int,char);


int main(int argc, char** argv)
{
    //Declare Variables
    string milTime;
    char half;
    char repeat;
    int hours,mints;
    bool ntRnge;
    
    cout<<"Military Time Converter to Standard Time\n";
    cout<<"Input Military Time hh:mm\n";
    
    do
    {
        input(milTime);
        conversion(milTime,hours,mints,half,ntRnge);
        if(ntRnge==true)
        {
            cout<<milTime<<" is not a valid time\n";
        }
        else{
            output(milTime,hours,mints,half);
        }
        
        cout<<"Would you like to convert another time (y/n)\n";
        cin>>repeat;
        
    }while(repeat=='Y' || repeat=='y');
    
    return 0;
}

void input(string& a)
{
    cin>>a;
}

void conversion(string a,int &x,int &y,char &b, bool &l)
{
    string hr=a.substr(0,2);
    int h=stoi(hr);
    
    string min=a.substr(3,5);
    int m=stoi(min);
    
    if(h>24 || h<0)
    {
        l=true;
    }
    else
    {
        if(h>=12)
        {
            b='P';
            
            if(h==12){
                x=12;
            }
            else{
                x=h-12;
            }
            
        }
        else
        {
            b='A';
            if(h==0){
                x=12;
            }
            else{
                x=h;
            }
        }
    }
    
    if(m>60 || m<0)
    {
        l=true;
    }
    else
    {
        y=m;
    }
    
}

void output(string a,int x, int y,char b)
{
    string p;
    if(b=='A')
    {
        p=" AM";
    }
    else{
        p=" PM";
    }
    
    cout<<a<<" = "<<x<<":"<<y<<p<<endl;   
}
