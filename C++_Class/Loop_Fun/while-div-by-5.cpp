#include <iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
// This program takes intergers checks to see if they are divisable by 5 and 
// increments a counter if so, and calls a "hit", or a "miss" if not 
// evenly divisible by 5. A negative # will stop the program.  It kinda
// like battleship.
// 
/////////////////////////////////////////////////////////////////////

int main() {
   int in;
   int finalNum;
   
   finalNum = 0;
   cout << "Enter numbers, I'll check to see if they are divisaible by 5, give me a negative # to stop:)" << endl;
   cin >> in;
   
   while (in >= 0){
      if(in % 5 == 0){
         cout << "miss" << endl;
         cin >> in;
      }
      else if (in % 5 != 0){
         cout << "hit" << endl;
         finalNum += 1;
         cin >> in;
      }
   }

   cout << "Final number is " << finalNum << endl;
   
   return 0;
}
