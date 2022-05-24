// Main function for battleship game
// Battleship
// Thomas Moore
// 4/5/2021

#include <iostream>
#include "battleship.hpp"

using std::cin; using std::cout; using std::endl;

int main() {

	srand(time(nullptr));
	Fleet myFleet;
	myFleet.deployFleet();
	char debugAnswer;
	cout << "Would you like to see ship positions?: [y/n] ";
	cin >> debugAnswer;
	if (debugAnswer == 'y') {
		myFleet.printFleet();
	}

	while (myFleet.operational() == true) {
		Location userShot;
		userShot.fire();
		myFleet.isHitNSink(userShot);
	}
	cout << "All ships have been sunk!";
}