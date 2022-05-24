// Contains function definitions for the battleships game
// Battleships
// Thomas Moore
// 3/22/2021

#include "battleship.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cin; using std::cout; using std::endl;


Location pick() {
	Location randLoc;
	randLoc.x = rand() % fieldSize;
	
	switch (rand() % fieldSize) {
		case 0:
			randLoc.y = 'a';
			break;
		case 1:
			randLoc.y = 'b';
			break;
		case 2:
			randLoc.y = 'c';
			break;
		case 3:
			randLoc.y = 'd';
			break;
		case 4:
			randLoc.y = 'e';
			break;
		case 5:
			randLoc.y = 'f';
			break;
		default:
			break;
	}
	return randLoc;
}

Location fire() {
	Location shotLoc;
	cout << "Input X coordinate: ";
	cin >> shotLoc.x; 
	cout << "Input Y coordinate: ";
	cin >> shotLoc.y;
	return shotLoc;
}

void printShip(const Ship& ship) {
	cout << "The ship is located at " << ship.loc.x << " " << ship.loc.y << endl;
	cout << "Is the ship sunk? "; 
	if (ship.sunk == true)
		cout << "Ship is sunk. \n";
	else
		cout << "Ship is not sunk. \n";
}

bool match(const Ship& ship, const Location& coordinates) {
	if (ship.loc.x == coordinates.x && ship.loc.y == coordinates.y)
		return true;
	else
		return false;
}

void sink(Ship& ship) {
	ship.sunk = true;
}

void initialize(Ship ships[]) {
	for (int i = 0; i < fleetSize; ++i) {
		ships[i].loc.x = -1;
		ships[i].loc.y = '*';
	}
}

void printFleet(const Ship ships[]) {
	for (int i = 0; i < fleetSize; ++i) {
		printShip(ships[i]);
	}	
}

int check(const Ship shipLoc[], const Location& coordinates) {
	for (int i = 0; i < fleetSize; ++i)
		if (coordinates.y == shipLoc[i].loc.y && coordinates.x == shipLoc[i].loc.x) {
			return i;
		}

	return -1;
}

void deploy(Ship ships[]) {
	
	int currentShip = 0;
	Location currentLoc;
		while (currentShip < fleetSize) {
			currentLoc = pick();
			if (check(ships, currentLoc) == -1) {
				ships[currentShip].loc = currentLoc;
				ships[currentShip].sunk = false;
				++currentShip;
			}
		}
}

bool operational(const Ship ships[]) {

	for (int i = 0; i < fleetSize; ++i) {
		if (ships[i].sunk == false)
			return true;
	}
	return false;
}