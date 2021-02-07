//============================================================================
// Name        : MadLibs_DavidYoung.cpp
// Author      : update from aspire
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <string> // get "string" database for input
#include <iostream>
using namespace std;

int main() { // initialize program

	// define what "noun1, etc." is by a string
	string noun1, noun2, noun3, noun4, noun5, noun6, adjective1, adjective2, verb, adverb, pluralNoun1, pluralNoun2, pluralNoun3, bodyPart1, bodyPart2;

	// printing prompt for user
	cout << "Enter 6 nouns, 2 adjectives, 1 verb, 1 adverb, 3 plural nouns, and 2 body parts (in this order)." << endl;

	// getting user input
	cin >> noun1 >> noun2 >> noun3 >> noun4 >> noun5 >> noun6 >> adjective1 >> adjective2 >> verb >> adverb >> pluralNoun1 >> pluralNoun2 >> pluralNoun3 >> bodyPart1 >> bodyPart2;

	// print the madlibs text along with the strings inputed by the user
	cout << "Text:" << endl; // I used the "endl" function to cut the lines shorter so the text wouldn't be so long
	cout << "Ye can always pretend to be a bloodthirsty " << endl;
	cout << noun1 << ", threatening everyone by waving yer " << endl;
	cout << adjective1 << " sword in the air, but until ye learn to " << endl;
	cout << verb << " like a pirate ye'll never be " << adverb << endl;
	cout << "accepted as an authentic " << noun2 << "." << endl;
	cout << "So here's what ye do: Cleverly work into yer daily conversations " << endl;
	cout << adjective2 << " pirate phrases such as \"Ahoythere, " << pluralNoun1 << ",\"" << endl;
	cout << "\"Avast, ye " << pluralNoun2 << ",\"" << endl;
	cout << "and \"Shiver me " << pluralNoun3 << ".\"" << endl;
	cout << "Remember to drop all yer gs when ye say such words as" << endl;
	cout << "sailin', spitten', and fightin'. This will give ye a/an " << endl;
	cout << bodyPart1 << " start to being recognized as a swashbucklin' " << endl;
	cout << noun3 << ". Once ye have the lingo down pat, it helps to wear a three-cornered " << endl;
	cout << noun4 << " on yer head, stash a/an " << endl;
	cout << noun5 << " in yer pants, and keep a/an " << noun6 << endl;
	cout << "perched atop yer " << bodyPart2 << "." << endl;
	cout << "Aye, now ye be a real pirate!" << endl;

	return 0; // end of program
}
