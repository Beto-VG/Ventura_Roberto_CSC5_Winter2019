/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 10, 2019, 12:46 PM
 * Purpose:  Menu example
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables
    char wchProb; //Choose which problem

    //Loop Menu until exit
    do {

        //Initialize or input i.e. set variable values
        cout << endl;
        cout << "Menu Program" << endl;
        cout << "Type 1 for problem 1 Sort Names" << endl;
        cout << "Type 2 for problem 2 Book Worm Points" << endl;
        cout << "Type 3 for problem 3 Bank Charges" << endl;
        cout << "Type 4 for problem 4 Race Winners" << endl;
        cout << "Type 5 for problem 5 ISP Bill" << endl;
        cout << "Type 6 for problem 6 Rock Paper Scissors" << endl;
        cout << "Type 7 for problem 7 Roman Conversion" << endl;
        cout << "Type 8 for problem 8 Compatible Zodiac Signs" << endl;
        cout << "Type anything else to exit" << endl;
        cin>>wchProb;

        //Solve Problems
        switch (wchProb) {
            case '1':
            {
                //Declare Variables
                string a, b, c;
                string first, middle, last;
                //Initialize or input i.e. set variable values
                cout << "Sorting Names\n";
                cout << "Input 3 names\n";
                cin >> a >> b>>c;

                //Map inputs -> outputs
                if (a > b && a > c) {
                    last = a;
                    if (b > c) {
                        middle = b;
                        first = c;
                    } else {
                        middle = c;
                        first = b;
                    }
                } else if (b > a && b > c) {
                    last = b;
                    if (a > c) {
                        middle = a;
                        first = c;
                    } else {
                        middle = c;
                        first = a;
                    }
                } else if (c > a && c > b) {
                    last = c;
                    if (a > b) {
                        middle = a;
                        first = b;
                    } else {
                        middle = b;
                        first = a;
                    }
                } else {
                    cout << "Error Happened" << endl;
                }

                
                //Display the outputs
                cout<<endl;
                cout << first << endl;
                cout << middle << endl;
                cout << last<<endl;
                break;
            }
            case '2':
            {
                //Declare Variables
                int books;
                //Initialize or input i.e. set variable values
                cout << "Book Worm Points\n";
                cout << "Input the number of books purchased this month.\n";
                cin>>books;

                //Map inputs -> outputs
                if (books == 0) {
                    cout << "Books purchased =  " << books << "\nPoints earned   = 0\n";
                } else if (books == 1) {
                    cout << "Books purchased =  " << books << "\nPoints earned   = 5\n";
                } else if (books == 2) {
                    cout << "Books purchased =  " << books << "\nPoints earned   = 15\n";
                } else if (books == 3) {
                    cout << "Books purchased =  " << books << "\nPoints earned   = 30\n";
                } else if (books >= 4) {
                    cout << "Books purchased =  " << books << "\nPoints earned   = 60\n";
                } else {
                    cout << "Error!" << endl;
                }
                break;
            }
            case '3':
            {
                //Declare Variables
                float balance, totalBal, checkfee, fees, monthlyfee = 10.0f;
                int checks;

                //Initialize or input i.e. set variable values
                cout << "Monthly Bank Fees\n";
                cout << "Input Current Bank Balance and Number of Checks\n";
                cin >> balance>>checks;

                //Map inputs -> outputs
                if (checks > 0 && balance > 0) {
                    if (balance < 400.00) {
                        fees = 15.0f;
                    } else {
                        fees = 0.0f;
                    }

                    if (checks < 20) {
                        checkfee = (.10f * checks);
                        totalBal = balance - (fees + monthlyfee + checkfee);
                    } else if (checks >= 20 && checks < 39) {
                        checkfee = (.08 * checks);
                        totalBal = balance - (fees + monthlyfee + checkfee);
                    } else if (checks >= 40 && checks < 59) {
                        checkfee = (.06 * checks);
                        totalBal = balance - (fees + monthlyfee + checkfee);
                    } else if (checks >= 60) {
                        checkfee = (.04 * checks);
                        totalBal = balance - (fees + monthlyfee + checkfee);
                    }
                } else if (balance < 0) {
                    cout << "The account is overdrawn";
                }

                //Display the outputs
                cout<<endl;
                cout << fixed << setprecision(2) << showpoint;
                cout << "Balance     $" << "   " << balance << endl;
                cout << "Check Fee   $" << "     " << checkfee << endl;
                cout << "Monthly Fee $" << "    " << monthlyfee << endl;
                if (fees < 10.00) {
                    cout << "Low Balance $" << "     " << fees << endl;
                } else {
                    cout << "Low Balance $" << "    " << fees << endl;
                }

                if (totalBal < 100.00) {
                    cout << "New Balance $" << "    " << totalBal;
                } else {
                    cout << "New Balance $" << "   " << totalBal;
                }
                cout<<endl;
                break;
            }
            case '4':
            {
                //Declare Variables
                string runA, runB, runC, first, second, third;
                float timA, timB, timC, f, s, t;

                //Initialize or input i.e. set variable values
                cout << "Race Ranking Program\n";
                cout << "Input 3 Runners\n";
                cout << "Their names, then their times\n";
                cin >> runA >> timA >> runB >> timB >> runC>>timC;

                //Map inputs -> outputs
                if (timA < timB && timA < timC) {
                    f = timA;
                    first = runA;

                    if (timB < timC) {
                        s = timB;
                        second = runB;
                        t = timC;
                        third = runC;
                    } else {
                        s = timC;
                        second = runC;
                        t = timB;
                        third = runB;
                    }
                } else if (timB < timA && timB < timC) {
                    f = timB;
                    first = runB;

                    if (timA < timC) {
                        s = timA;
                        second = runA;
                        t = timC;
                        third = runC;
                    } else if (timC < timA) {
                        s = timC;
                        second = runC;
                        t = timA;
                        third = runA;
                    }
                } else if (timC < timA && timC < timB) {
                    f = timC;
                    first = runC;

                    if (timA < timB) {
                        s = timA;
                        second = runA;
                        t = timB;
                        third = runB;
                    } else if (timB < timA) {
                        s = timB;
                        second = runB;
                        t = timA;
                        third = runA;
                    }

                }

                //Display the outputs
                cout<<endl;
                cout << first << "\t " << f << endl;
                if (s < 100.00) {
                    cout << second << "\t " << s << endl;
                } else {
                    cout << second << "\t" << s << endl;
                }
                cout << third << "\t" << t<< endl;
                
                break;
            }
            case '5':
            {
                //Declare Variables
                char x;
                float hours, total;

                //Initialize or input i.e. set variable values
                cout << "ISP Bill\n";
                cout << "Input Package and Hours\n";
                cin >> x>>hours;

                //Map inputs -> outputs
                if (hours > 0 && hours <= 744) {
                    if (x == 'A' && hours > 10.0) {
                        total = 9.95f + ((hours - 10.0f) * 2.00f);
                    } else if (x == 'A' && hours < 10.0) {
                        total = 9.95f;
                    } else if (x == 'B' && hours > 20.0) {
                        total = 14.95f + ((hours - 20.0f) * 1.00);
                    } else if (x == 'B' && hours < 20.0) {
                        total = 14.95f;
                    } else if (x == 'C') {
                        total = 19.95f;
                    } else {
                        cout << "Error no such package" << endl;
                        break;
                    }
                } else {
                    cout << "Not valid amount of hours" << endl;
                    break;
                }

                //Display the output
                cout<<endl;
                cout << "Bill = $ " << total<<endl;
                break;
            }
            case '6':
            {
                //Declare Variables
                char pOne, pTwo;

                //Initialize or input i.e. set variable values
                cout << "Rock Paper Scissors Game\n";
                cout << "Input Player 1 and Player 2 Choices\n";
                cin >> pOne>>pTwo;

                
                //Map inputs -> outputs
                cout<<endl;
                if (pOne == 'R' || pOne == 'r') {
                    if (pTwo == 'R' || pTwo == 'r') {
                        // TIE
                        cout << "Nobody Wins.";
                    } else if (pTwo == 'P' || pTwo == 'p') {
                        // Player Two Wins
                        cout << "Paper covers rock.";
                    } else if (pTwo == 'S' || pTwo == 's') {
                        // Player One Wins
                        cout << "Rock breaks scissors.";
                    } else {
                        cout << "Error! Not a valid option\n";
                        break;
                    }
                } else if (pOne == 'P' || pOne == 'p') {
                    if (pTwo == 'R' || pTwo == 'r') {
                        // Player One Wins
                        cout << "Paper covers rock.";
                    } else if (pTwo == 'P' || pTwo == 'p') {
                        // TIE
                        cout << "Nobody Wins.";
                    } else if (pTwo == 'S' || pTwo == 's') {
                        // Player Two Wins
                        cout << "Scissors cuts paper.";
                    } else {
                        cout << "Error! Not a valid option\n";
                        break;
                    }
                } else if (pOne == 'S' || pOne == 's') {
                    if (pTwo == 'R' || pTwo == 'r') {
                        // Player Two Wins
                        cout << "Rock breaks scissors.";
                    } else if (pTwo == 'P' || pTwo == 'p') {
                        // Player One Wins
                        cout << "Scissors cuts paper.";
                    } else if (pTwo == 'S' || pTwo == 's') {
                        // TIE
                        cout << "Nobody Wins.";
                    } else {
                        cout << "Error! Not a valid option\n";
                        break;
                    }
                } else {
                    cout << "Error! Not a valid option\n";
                    break;
                }
                
                cout<<endl;
                
                break;
            }
            case '7':
            {
                //Declare Variables
                int year;
                int n1, n10, n100, n1000;
                int temp;
                string roman;

                //Initialize or input i.e. set variable values
                cout << "Arabic to Roman numeral conversion.\n";
                cout << "Input the integer to convert.\n";
                cin>>year;

                //Map inputs -> outputs
                n1 = (year) % 10;
                n10 = (year / 10) % 10;
                n100 = (year / 100) % 10;
                n1000 = (year / 1000) % 10;

                if (year >= 1000 && year <= 3000) {
                    //Thousands
                    if (n1000 == 3) //3000
                    {
                        roman = "MMM";
                    } else if (n1000 == 2) //2000
                    {
                        roman = "MM";
                    } else if (n1000 == 1) //1000
                    {
                        roman = "M";
                    }

                    //Hundreds
                    if (n100 == 5) {
                        roman = roman + "D";
                    } else if (n100 > 5) {
                        if (n100 == 9) {
                            roman = roman + "CM";
                        } else {
                            temp = n100 - 5;

                            roman = roman + "D";
                            for (int i = 0; i < temp; i++) {
                                roman = roman + "C";
                            }
                        }

                    } else if (n100 < 5) {
                        if (n100 == 4) {
                            roman = roman + "CD";
                        } else {
                            for (int i = 0; i < n100; i++) {
                                roman = roman + "C";
                            }
                        }

                    }

                    //Tens
                    if (n10 == 5) {
                        roman = roman + "L";
                    } else if (n10 > 5) {
                        temp = n10 - 5;

                        roman = roman + "L";
                        for (int i = 0; i < temp; i++) {
                            roman = roman + "X";
                        }

                    } else if (n10 < 5) {
                        if (n10 == 4) {
                            roman = roman + "XL";
                        } else {
                            for (int i = 0; i < n10; i++) {
                                roman = roman + "X";
                            }
                        }
                    }

                    //Ones
                    if (n1 == 1 || n1 == 2 || n1 == 3) {
                        for (int i = 0; i < n1; i++) {
                            roman = roman + "I";
                        }
                    } else if (n1 == 4) {
                        roman = roman + "IV";
                    } else if (n1 == 5) {
                        roman = roman + "V";
                    } else if (n1 > 5) {
                        temp = n1 - 5;
                        roman = roman + "V";
                        for (int i = 0; i < temp; i++) {
                            roman = roman + "I";
                        }
                    }
                } else {
                    cout<<endl;
                    cout << year << " is Out of Range!\n";
                    break;
                }


                //Display Output
                cout<<endl;
                cout << year << " is equal to " << roman<<endl;
                break;
            }
            case '8':
            {
                //Declare Variables
                string sign1, sign2;
                //Initialize or input i.e. set variable values
                cout << "Horoscope Program which examines compatible signs.\n";
                cout << "Input 2 signs.\n";
                cin >> sign1>>sign2;

                //Map inputs -> outputs
                cout<<endl;
                if (sign1 == "Aries" || sign1 == "Leo" || sign1 == "Sagittarius") {
                    if (sign2 == "Aries" || sign2 == "Leo" || sign2 == "Sagittarius") {
                        //Compatible
                        cout << sign1 << " and " << sign2 << " are compatible Fire signs.";
                    } else {
                        // Not compatible
                        cout << sign1 << " and " << sign2 << " are not compatible signs.";
                    }
                } else if (sign1 == "Taurus" || sign1 == "Virgo" || sign1 == "Capricorn") {
                    if (sign2 == "Taurus" || sign2 == "Virgo" || sign2 == "Capricorn") {
                        //Compatible
                        cout << sign1 << " and " << sign2 << " are compatible Earth signs.";
                    } else {
                        //Not compatible
                        cout << sign1 << " and " << sign2 << " are not compatible signs.";
                    }
                } else if (sign1 == "Gemini" || sign1 == "Libra" || sign1 == "Aquarius") {
                    if (sign2 == "Gemini" || sign2 == "Libra" || sign2 == "Aquarius") {
                        //Compatible 
                        cout << sign1 << " and " << sign2 << " are compatible Air signs.";
                    } else {
                        //Not Compatible
                        cout << sign1 << " and " << sign2 << " are not compatible signs.";
                    }
                } else if (sign1 == "Cancer" || sign1 == "Scorpio" || sign1 == "Pisces") {
                    if (sign2 == "Cancer" || sign2 == "Scorpio" || sign2 == "Pisces") {
                        //Compatible
                        cout << sign1 << " and " << sign2 << " are compatible Water signs.";
                    } else {
                        //Not compatible
                        cout << sign1 << " and " << sign2 << " are not compatible signs.";
                    }
                }
                cout<<endl;
                break;
            }
            default:
            {
                cout << "Exiting Menu, no problem selected" << endl;
            }
        }

        //End of Menu/problems
    } while (wchProb >= '1' && wchProb <= '8');

    //Exit stage right or left!
    return 0;
}