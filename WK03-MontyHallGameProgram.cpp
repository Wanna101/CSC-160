#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <string>
#include <random>
using namespace std;

int main() {

    // declaring all needed variables    
    int prizeDoor, guessDoor, revealedDoor, newGuessDoor, i = 0;
    string yesNo;

    // generates numbers from 1 to 3 (the amount of doors)
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 3);
    
    do {
        i++;

        // generate random number and set it to prizeDoor
        prizeDoor = dis(gen);
        
        // cout << "The random prizeDoor is: " << prizeDoor << endl << endl;

        // give user prompt for guessDoor
        cout << "Choose a door (1, 2, or 3):" << endl;
        cin >> guessDoor;

        // reveal a consolation prize door
        revealedDoor = dis(gen);
        while (revealedDoor == prizeDoor || revealedDoor == guessDoor) {
            revealedDoor = dis(gen);
        } 
        cout << "The revealed door is " << revealedDoor << "." << endl;
        cout << "The consolation prize is Dishwasher Soap!" << endl;
        
        // asking user whether to guess again
        do {
            cout << "Would you like to guess again (Y/N)?" << endl;
            cin >> yesNo;
            // if they say yes
            if (yesNo == "Y") {
                cout << "Make your final guess:" << endl;
                cin >> newGuessDoor;
                if (newGuessDoor == prizeDoor) {
                    cout << "Congrats! You have won 1,000,000 dollars!";
                    return 0;
                }
                else if (newGuessDoor != prizeDoor) {
                    cout << "Congrats! You have won dishwasher soap!";
                    return 0;    
                }
            }
            // if they say no
            else if (yesNo == "N") {
                if (guessDoor == prizeDoor) {
                    cout << "Congrats! You have won 1,000,000 dollars!";
                    return 0;
                }
                else if (guessDoor != prizeDoor) {
                    cout << "Congrats! You have won dishwasher soap!";
                    return 0;
                }
            }
        } while (newGuessDoor != revealedDoor && newGuessDoor != guessDoor);
    } while (i != 0);

	return 0;

}
