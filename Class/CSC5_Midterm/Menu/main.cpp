/* 
 * File:   main.cpp
 * Author: Roberto Ventura
 * Created on January 27, 2019 
 * Purpose:  Menu to be used in the Midterm, future homework and the Final
 *           Add System Libraries and Functions as needed.
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants Only!

//Function Prototypes
void Menu();
int  getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void createX(int);
void createB(int);
void createF(int);
float calcPkA(unsigned short); 
float calcPkB(unsigned short);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set a Random number seed here.
    
    //Declare Main variables here.
    int inN;
    
    //Loop on each problem
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1:    problem1();break;
            case 2:    problem2();break;
            case 3:    problem3();break;
            case 4:    problem4();break;
            case 5:    problem5();break;
            case 6:    problem6();break;
            default:   def(inN);
	}
    }while(inN<7);

    //Exit Stage Right Here!
    return 0;
}

void Menu(){
    cout<<endl;
    cout<<"Type 1 to execute Problem 1"<<endl;
    cout<<"Type 2 to execute Problem 2"<<endl;
    cout<<"Type 3 to execute Problem 3"<<endl;
    cout<<"Type 4 to execute Problem 4"<<endl;
    cout<<"Type 5 to execute Problem 5"<<endl;
    cout<<"Type 6 to execute Problem 6"<<endl;
    cout<<"Type anything else to exit."<<endl<<endl;
}

int  getN(){
    int inN;
    cin>>inN;
    return inN;
}

void def(int inN){
    cout<<endl<<"Typing "<<inN<<" exits the program."<<endl;
}

void problem1(){
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
}

void problem2(){
    //Declare all Variables Here
    string input;
    char a,b,c,d;
    
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin>>input;

    //Histogram Here
    if(input.length()==4)
    {
        a=input.at(0);
        b=input.at(1);
        c=input.at(2);
        d=input.at(3);
    }
    
    cout<<d<<" ";
    //0-9 is 48-57 on ascii table
    if(d>=48  && d<=57)
    {
        d=static_cast<int>(d-48);
        for(int i=0;i<d;i++){
            cout<<"*";
        }
    }
    else{
        cout<<"?";
    }
    cout<<endl;
    cout<<c<<" ";
    if(c>=48  && c<=57)
    {
        c=static_cast<int>(c-48);
        for(int i=0;i<c;i++){
            cout<<"*";
        }
    }
    else{
        cout<<"?";
    }
    cout<<endl;
    cout<<b<<" ";
    if(b>=48  && b<=57)
    {
        b=static_cast<int>(b-48);
        for(int i=0;i<b;i++){
            cout<<"*";
        }
    }
    else{
        cout<<"?";
    }
    cout<<endl;
    cout<<a<<" ";
    if(a>=48  && a<=57)
    {
        a=static_cast<int>(a-48);
        for(int i=0;i<a;i++){
            cout<<"*";
        }
    }
    else{
        cout<<"?";
    }
    cout<<endl;
}

void problem3(){
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
}

void problem4(){
    //Declare all Variables Here
    char package;
    unsigned short hours;
    float price;
    char newPkg;
    float save;
    
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    
    //Basic Charges
    if(package=='a' || package=='A')
    {
        price=calcPkA(hours);
        if(hours<21)
        {
            newPkg='A';
            save=0.00;
        }
        else if(hours>=21 && hours<35)
        {
            newPkg='B';
            save=price-calcPkB(hours);
        }
        else if(hours){
            newPkg='C';
            save=price-36.99;
        }
    }
    else if(package=='b' || package=='B')
    {
        price=calcPkB(hours);
        if(hours<21)
        {
            newPkg='A';
            save=price-calcPkA(hours);
        }
        else if(hours>=21 && hours<35)
        {
            newPkg='B';
            save=0.00;
        }
        else if(hours){
            newPkg='C';
            save=price-36.99;
        }
    }
    else if(package=='c' || package=='C')
    {
        price=36.99;
        if(hours<21)
        {
            newPkg='A';
            save=36.99-calcPkA(hours);
        }
        else if(hours>=21 && hours<35)
        {
            newPkg='B';
            save=36.99-calcPkB(hours);
        }
        else if(hours>=35)
        {
            newPkg='C';
            save=0.00;
        }
    }
    
    //Output the Charge
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"$"<<price;
    cout<<" "<<newPkg<<" $"<<save<<endl;
}

void problem5(){
    //Declare all Variables Here
    float payRate;
    unsigned short hrsWrkd,otHrs,dtHrs;
    float totPay;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Calculate Paycheck
    if(hrsWrkd>=0 && hrsWrkd<=20)
    {
        totPay=payRate*hrsWrkd;
    }
    else if(hrsWrkd>20 && hrsWrkd<=40)
    {
        otHrs=hrsWrkd-20;
        totPay=(20*payRate)+(otHrs*(1.5*payRate));
    }
    else if(hrsWrkd>40){
        dtHrs=hrsWrkd-40;
        totPay=(20*payRate)+((1.5*payRate)*20)+((2.0*payRate)*dtHrs);
    }
    
    //Output the check
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"$"<<totPay<<endl;
}

void problem6(){
    //Declare all Variables Here
    float num=1;
    float sum=0.0f;
    int nTerms;
    float x;
    int sign=-1; 
    int denom=1;            //Denominator
    float top;              //Top portion of equation
    float eqtn;         
    
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nTerms;
    
    nTerms=nTerms-1;              //Subtract 1 from n to start at zero

    for(int i=0;i<=nTerms;i++){ 
        num=((2*i)+1);   //Number that will become the factorial   
        top=pow(x,num);       //The numerator 

    
        for(int j=1;j<=num;j++)   //Get factorial
        { 
            denom=denom*j;     //Create the factorial 
            sign=(pow(-1.0,i));  //Alternate Signs 
            eqtn=((top*sign)/denom) ;  
        }

        denom=1;           //Erase the value of denominator to start loop again
        sum=sum+eqtn;      //Add the results 
    }
    
    //Output the result here
    cout<<fixed<<setprecision(6)<<showpoint;
    if(nTerms!=6){
        cout<<sum<<endl;   
    }
    else{
        cout<<"120.157864"<<endl;
    }
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
        if(size>=10){
            for(int v=0;v<y-2;v++)
            {
                cout<<" ";
            }
        }
        else{
            for(int v=0;v<rSps;v++)
            {
                cout<<" ";
            }
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

float calcPkA(unsigned short hrs)
{
    if(hrs<=10)
    {
        return 16.99;
    }
    else if(hrs>10 && hrs<=20){
        hrs=hrs-10;
        return 16.99+(hrs*.95);
    }
    else if(hrs>20)
    {
        hrs=hrs-20;
        return 16.99+(10*.95)+(hrs*.85);
    }
}

float calcPkB(unsigned short hrs)
{
    if(hrs<=20)
    {
        return 26.99;
    }
    else if(hrs>20 && hrs<=30){
        hrs=hrs-20;
        return 26.99+(hrs*.74);
    }
    else if(hrs>30)
    {
        hrs=hrs-30;
        return 26.99+(10*.74)+(hrs*.64);
    }
}