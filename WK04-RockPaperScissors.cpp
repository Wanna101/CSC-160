//============================================================================
// Name        : RockPaperScissors.cpp
// Author      : David Young
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
#include <time.h>
#include <cstdlib>
using namespace std;

int main() {
    // using char for the y/n question (it also covers caps)
    char ch;
    // set up variables for scoring
    int win = 0;
    int tie = 0;
    int lose = 0;

    do {
    	// this will be used later to ask what the user is goint to choose
    	int selection;
    	// Cute printed title ^^
    	cout << "-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-." << endl;
    	cout << "-- Lets play Rock, Paper, Scissors! --" << endl;
    	cout << "-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-." << endl;
    	// Ask player to choose Rock, Paper, Scissors
    	cout << "Select your choice: Rock(1), Paper(2), or Scissors(3)..." << endl;
    	// get user input
    	cin >> selection;
    	// gets a random number between 1 and 3 and tells the player what was chosen
    	// basically, this randomizes the computers choice
		int computer = rand() % 3 + 1;
		cout <<  "The computer chose: " << computer << endl;
		// starts possible outcome sequence in rock, paper, scissors
		// there are 9 possible outcomes: 3 wins, 3 ties, and 3 losses
		if (selection == 1 && computer == 1) {
			 cout << "Rock vs. Rock: Tie!" << endl;
			 // this increases the  tie count
			 tie++;
			 }
		else if (selection == 1 && computer == 2) {
			 cout << "Rock vs. Paper: the computer wins!" << endl;
			 // this increases loss count
			 lose++;
			 }
		else if (selection == 1 && computer == 3) {
			 cout << "Rock vs. Scissors: you win!" << endl;
			 // this increases win count
			 win++;
			 }
		else if (selection == 2 && computer == 1) {
			 cout << "Paper vs. Rock: you win!" << endl;
			 win++;
			 }
		else if (selection == 2 && computer == 2) {
			 cout << "Paper vs. Paper: Tie!" << endl;
			 tie++;
			 }
		else if (selection == 2 && computer == 3) {
			 cout << "Paper vs. Scissors: the computer wins!" << endl;
			 lose++;
			 }
		else if (selection == 3 && computer == 1) {
			 cout << "Scissors vs. Rock: computer wins!" << endl;
			 lose++;
			 }
		else if (selection == 3 && computer == 2) {
			 cout << "Scissors vs. Paper: you win!" << endl;
			 win++;
			 }
		else if (selection == 3 && computer == 3) {
			 cout << "Scissors vs. Scissors: Tie!" << endl;
			 tie++;
			 }
			 // if the player doesn't hit 1, 2, or 3:
			 // defaulted to a statement and ask if they would like to play again statement
		else{
			 cout << "Please select either 1, 2, or 3." << endl;
			 }
			 // displays score so far and asks if you want to play again
			 cout << "Wins: " << win << endl;
			 cout << "Ties:" << tie << endl;
			 cout << "Losses:" << lose << endl;
			 cout << "Would you like to play again? Y/N" << endl;
			 cin >> ch;
			 // i looked this up because my screen started to get super messy
			 // this clears the screen basically without reseting data
			 //system("cls");
			 // either lowercase of uppercase
         } while(ch == 'Y' || ch == 'y');
    //system("pause"); took this out so that the loop ends it with out you needing to hit another button
    return 0;

}
