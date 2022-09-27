#include <iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
// This program takes intergers until it recieves one over 10 
// 
/////////////////////////////////////////////////////////////////////

int main() {
   int userIn;
   
   cout << "Enter a number less than 10, or over 10 to stop :)" << endl;
   cin >> userIn;
   
   while (userIn < 10) {
      cout << "Input is " << userIn << endl;
      cin >> userIn;
   }
   
   cout << "Done" << endl;
   
   return 0;
}