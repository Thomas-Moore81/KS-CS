// battleship functions
// contains the function definitions for the battleship game
// Thomas Moore
// 3/29/2021

#include <iostream>
#include "battleship.hpp"

using std::cin; using std::cout; using std::endl;

Location::Location() {
	x_ = -1;
	y_ = '*';
}

void Location::pick() {
	x_ = rand() % fieldSize_;

	switch (rand() % fieldSize_) {
	case 0:
		y_ = 'a';
		break;
	case 1:
		y_ = 'b';
		break;
	case 2:
		y_ = 'c';
		break;
	case 3:
		y_ = 'd';
		break;
	case 4:
		y_ = 'e';
		break;
	case 5:
		y_ = 'f';
		break;
	default:
		break;
	}
}

void Location::fire() {
	cout << "Input target x and y coordinate: ";
	cin >> x_ >> y_;
}

void Location::print() const {
	cout << x_ << y_ << " ";
}

bool compare(const Location& loc1, const Location& loc2) {
	if (loc1.x_ == loc2.x_ && loc1.y_ == loc2.y_)
		return true;
	else
		return false;
	
}

Ship::Ship() {
	sunk_ = false;
}

void Ship::setLocation(const Location& loc) {
	loc_ = loc;
}

bool Ship::match(const Location& loc) const {
	if (compare(loc_, loc) == true)
		return true;
	else
		return false;

}

void Ship::printShip() const {
	loc_.print();
	if (isSunk() == true)
		cout << "Ship is sunk. ";
	else
		cout << "Ship is not sunk. ";
}

void Ship::sink() {
	sunk_ = true;
}

int Fleet::check(const Location& loc1) const {
	for (int i = 0; i < fleetSize_; ++i) {
		if (Fleet::ships_[i].match(loc1) == true) 
			return i;
	}
	return -1;
}

void Fleet::deployFleet() {
	int currentShip = 0;
	Location currentLoc = Location();
	while (currentShip < fleetSize_) {
		currentLoc.pick();
		if (check(currentLoc) == -1) {
			ships_[currentShip].setLocation(currentLoc);
			++currentShip;
		}
	}
}

bool Fleet::operational() const {
	for (int i = 0; i < fleetSize_; ++i) {
		if (ships_[i].isSunk() == false)
			return true;
	}
	return false;
}

bool Fleet::isHitNSink(const Location& loc1) {
	for (int i = 0; i < fleetSize_; ++i) {
		if (ships_[i].match(loc1) == true) {
			ships_[i].sink();
			return true;
		}
	}
	return false;
}

void Fleet::printFleet() const {
	for (int i = 0; i < fleetSize_; ++i) {
		ships_[i].printShip();
	}
}