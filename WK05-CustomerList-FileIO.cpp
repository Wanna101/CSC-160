/* Program info... */

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

void printName(string currentLine) // function called printName which formats the name printed after
                                   // locating the id
{ 
    string word = ""; 
    for (auto x : currentLine)  
    { 
        if (x == ' ' || x == '0' || x == '1' || x == '2' || x == '3' || x == '4' || x == '5' || x == '6' || x == '7' || x == '8' || x == '9') 
        {
        // editing what to exempt in the print function 
        // if program reads blank space or 0-9, skip over it
            cout << word; 
            word = ""; 
        } 
        // else put a space and add words together
        else { 
            word = word + x; 
        } 
    } 
    cout << " " << word << endl; 
} 

int main() 
{
   std::string currentLine; // current line of the .txt file
   std::string idToFind; // Using string for id in case has both numbers and letters, like M47
   std::ifstream customerDb;
   bool not_found = true; // boolean to exit loop when found the id

   cout << "Enter ID:" << endl; // prompt
   cin >> idToFind;
   

   customerDb.open("CustomerDb.txt"); // open .txt file
   if (customerDb.is_open()) {
      while (!customerDb.eof() && not_found) { // reads entire .txt file
         
         getline(customerDb,currentLine); // going through each individual line
         
         if (currentLine.find(idToFind) != std::string::npos) { // compares line to user input
            std::cout << "found!" << '\n'; // prints found if found
            printName(currentLine);
            not_found = false; // once the input is found, breaks out of loop
         }
        
      }
   }
   if (not_found) { // if not found is true prints not found
      cout << "not found!" << '\n';
      //return 0;
   }
   customerDb.close(); // close .txt file
   
   return 0; 
}