/* 
 * File:   main.cpp
 * Author: Roberto Ventura
 * Created: February 1, 2019 1:27 PM
 * Purpose: Product Table
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int COLS=6;

//Function Prototypes
void fillTbl(int [][COLS],int);
void prntTbl(const int [][COLS],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int ROWS=6;
    int tblProd[ROWS][COLS];
    
    //Initialize or input i.e. set variable values
    fillTbl(tblProd,ROWS);
    
    //Display the outputs
    prntTbl(tblProd,ROWS);

    //Exit stage right or left!
    return 0;
}

void fillTbl(int a[][COLS], int r)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<COLS;j++){
            a[i][j]=(i+1)*(j+1);
        }
    }
}

void prntTbl(const int a[][COLS],int r)
{
    cout<<"Think of this as a Product/Muliplication Table\n";
    cout<<"           C o l u m n s\n";
    cout<<"     |   1   2   3   4   5   6\n";
    cout<<"----------------------------------\n";
    for(int i=0;i<r;i++)
    {
        if(i==1){
            cout<<"R";
        }
        else if(i==2)
        {
            cout<<"O";
        }
        else if(i==3)
        {
            cout<<"W";
        }
        else if(i==4)
        {
            cout<<"S";
        }
        else{
            cout<<" ";
        }
        
        cout<<"  "<<i+1<<" |";
        for(int j=0;j<COLS;j++){
            if(a[i][j]>9){
                cout<<"  ";
            }
            else{
                cout<<"   ";
            }
            cout<<a[i][j];
        }
        cout<<endl;
    }
}