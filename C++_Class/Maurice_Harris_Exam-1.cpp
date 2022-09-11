#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
    //  by doing "using namespace std" I dont have to do this "std::cout" to print 
    //  to the terminal

int main()
{
    // declaring Contsants
    const float quarter = .2556464654;
    const float dime = .10;
    const float nickel = .05;
    const float pennie = .01;


    // declaring vars for counting coins
    float numQuarters;
    float numDimes;
    float numNickles;
    float numPennies;

    string userName;

    // vars for totals from each type of coin
    float cashFromQuarters;
    float cashFromDimes;
    float cashFromNickles;
    float cashFromPennies;
    float totCash;
    // Front Panel display
    cout << "###############################################" << endl;
    cout << "#" << endl;
    cout << "#" << endl;
    cout << "#      Thanks For using Reece's Coin Counter Ver 1.0.1" << endl;
    cout << "#      Written By Robot Reece1101 9/10/2022" << endl;
    cout << "#" << endl;
    cout << "#" << endl;
    cout << "###############################################" << endl << endl << endl;

    
    // Greet the user
    cout << "Good afternoon, Whats your name?" << endl;
    cin >> userName; 

    // Get inputs from user 
    cout << endl << endl;
    cout << userName << " how Many Quarters Do you have?" << endl; 
    cin >> numQuarters;
    cout << endl << userName << " How Many Dimes Do you have?" << endl;
    cin >> numDimes;
    cout << endl << userName << " How Many Nickels Do you have?" << endl;
    cin >> numNickles;
    cout << endl << userName << " How Many Pennies Do you have?" << endl;
    cin >> numPennies;
    cout << endl << endl;
    cout << "Thanks for your input " << userName << " I'm going to go crunch some numbers" << endl << endl;
    
    
    // running numbers
    cashFromQuarters = numQuarters * quarter;
    cashFromDimes = numDimes * dime; 
    cashFromNickles = numNickles * nickel;
    cashFromPennies = numPennies * pennie;
    totCash = cashFromQuarters + cashFromDimes + cashFromNickles +  cashFromPennies;
    
    // Display output
    std::cout << fixed << setprecision(2);
    cout <<  "$$$$$$$$$$$$$$$$$$$$$$$$$" << endl << endl;
    cout << userName << " you gave me... " << endl;
    cout << "$"<< totCash << endl;
    cout << endl << endl  << "$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
    cout << endl << endl<< userName << " We thank you for your busniess." << endl;
    cout << "Come back soon!!!" << endl;


}