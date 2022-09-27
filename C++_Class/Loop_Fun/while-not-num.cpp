
#include <iostream>
#include <iomanip>
using namespace std;

/////////////////////////////////////////////////////////////////////
//
// This program takes intergers until a certian num is hit, it then adds all  
// the preceding numbers
//
////////////////////////////////////////////////////////////////////

int main() {
   double numInput;
	double numDoubles;

	numDoubles = 0.0;
    cout << "Enter a few doubles number when I see 10.0 I'll stop andadd them up  :)" << endl;
	cin >> numInput;

   while(numInput != 10.0){
      numDoubles = numDoubles + numInput;
      cin >> numInput;
      
   }
   cout << "Alright I've found my 10.0 I'll start adding :)" << endl;
   cout << fixed << setprecision(1) << numDoubles << endl;

	return 0;
}