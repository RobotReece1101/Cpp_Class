#include <iostream>
using namespace std;
/////////////////////////////////////////////////////////////////////
//
// This program takes an interger and converts it in reverse binary
// 
////////////////////////////////////////////////////////////////////
int main() {

//int i;
int numInput;
//int x;

cin >> numInput;

while (numInput > 0)
{
   cout << numInput % 2;
   numInput = numInput / 2;
   
 } 


cout << endl;
   return 0;
}
