//============================================================================
// Name        : 2.cpp
// Author      : David Young
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

   int currentPrice = 0; // initializing variables with "int" and "float"
   int lastMonthsPrice = 0;
   int change;
   float estMonthlyMortgage;

   cin >> currentPrice; // receiving stream of characters with "cin"
   cin >> lastMonthsPrice; // prompting input for currentPrice and lastMonths Price
   estMonthlyMortgage = (currentPrice * 0.051) / 12; // math calculations
   change = currentPrice - lastMonthsPrice;

   cout << "This house is $"; // printing the sentences
   cout << currentPrice;
   cout << ". The change is $";
   cout << change;
   cout << " since last month.";
   cout << endl;
   cout << "The estimated monthly mortgage is $";
   cout << estMonthlyMortgage;
   cout << ".";
   cout << endl;

   return 0;
}
