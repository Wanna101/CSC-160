//============================================================================
// Name        : Testing.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <string>
#include <iostream>
using namespace std;

int main() {

	string noun1, noun2, noun3, noun4, noun5, noun6, adjective1, adjective2, verb, adverb, pluralNoun1, pluralNoun2, pluralNoun3, bodyPart1, bodyPart2;

	cout << "Enter 6 nouns, 2 adjectives, 1 verb, 1 adverb, 3 plural nouns, and 2 body parts (in this order).";
	cin >> noun1 >> noun2 >> noun3 >> noun4 >> noun5 >> noun6 >> adjective1 >> adjective2 >> verb >> adverb >> pluralNoun1 >> pluralNoun2 >> pluralNoun3 >> bodyPart1 >> bodyPart2;

	cout << "Ye can always pretend to be a bloodthirsty " << noun1 << ", threatening everyone by waving yer " << adjective1 << " sword in the air, but until ye learn to " << verb << " like a pirate ye'll never be " << adverb << " accepted as an authentic " << noun2 << ". So here's what ye do: Cleverly work into yer daily conversations " << adjective2 << " pirate phrases such as \"Ahoythere, " << pluralNoun1 << ",\" \"Avast, ye " << pluralNoun2 << ",\" and \"Shiver me " << pluralNoun3 << ",\" Remember to drop all yer gs when ye say such words as sailin', spitten', and fightin'. THis will give ye a/an " << bodyPart1 << " start to being recognized as a swashbucklin' " << noun3 << ". Once ye have the lingo down pat, it helps to wear a three-cornered " << noun4 << " on yer head, stash a/an " << noun5 << " in yer pants, and keep a/an " << noun6 << " perched atop yer " << bodyPart2 << ". Aye, now ye be a real pirate!";

	return 0;
}
