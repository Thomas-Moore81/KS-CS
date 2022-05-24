// Contains the main function of the battleship game
// Battleships
// Thomas Moore
// 3/29/2021

#include <iostream>
#include "battleship.hpp"

using std::cin; using std::cout; using std::endl;

int main() {

	Ship fleet[fleetSize];
	initialize(fleet);

	deploy(fleet);

	cout << "Would you like to see the ships location and status?: [y/n]" << endl;
	char debugAnswer;
	cin >> debugAnswer;
	if (debugAnswer == 'y') {
		printFleet(fleet);
	}

	Location fireLocation;
	int index;

	do{

		fireLocation = fire();
		index = check(fleet, fireLocation); // allows the ability to check individual ships in 

		if (index != -1) {
			sink(fleet[index]);
			cout << "Hit!" << endl;
		}
		else
			cout << "Miss!" << endl;

	} while (operational(fleet) == true);
	cout << "All ships have been sunk! ";
}