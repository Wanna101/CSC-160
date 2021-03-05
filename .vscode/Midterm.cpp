#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// initializing a function with the parameters 
double inflationRate (double origPrice, double currentPrice);

// initializing main function
int main() {
   
   // creating new file called "inflation_rate.txt"
   ofstream file ("inflation_rate.txt");
   // opening file
   if (file.is_open()) {
   
       // initializing variable to be inputed by user
       string item;    
       double origPrice, currentPrice;
       // use char for Y/N question
       char loop;
       
       // loop must execute at LEAST once
       do {
           // ask for Item name
           cout << "Item name: ";
           // write to file the Item name
           file << "Item name: ";
           cin >> item;
           file << item;
           file << endl;
           
           // ask for Cost a year ago
           cout << "Cost a year ago: $";
           // write to file the cost a year ago
           file << "Cost a year ago: $";
           cin >> origPrice;
           file << origPrice;
           file << endl;
           
           // ask for cost today
           cout << "Cost Today: $";
           // write to file the cost today
           file << "Cost Today: $";
           cin >> currentPrice;
           file << currentPrice;
           file << endl;
           
           // print the inflation rate
           cout << "Inflation rate: " << inflationRate(origPrice, currentPrice) << "%";
           // write to file the inflation rate
           file << "Inflation rate: " << inflationRate(origPrice, currentPrice) << "%";
           cout << endl;
           file << endl;
           file << endl;
           
           // ask user how many times they would like to input items
           cout << "Would you like to add more items (y/n)?";
           cin >> loop;
           
        } while ((loop == 'Y') || (loop == 'y')); // condition of do while loop 
        // close file
        file.close();
    }
    // part of the if else statement if the file is unable to open
    else cout << "Unable to open file";
    return 0;
}

// I went ahead and created a function which calculates
// the inflation rate... I didn't really want to to keep calculating it
// in the loop, so I wrote a small function (I know we haven't gone
// over functions that much yet except for the void function).
// I used my knowledge from Python and just went ahead and looked
// up how to write functions in C++
double inflationRate(double origPrice, double currentPrice) {
    // returns the calculate inflation rate value
    return (((currentPrice - origPrice) / origPrice)) * 100;
}