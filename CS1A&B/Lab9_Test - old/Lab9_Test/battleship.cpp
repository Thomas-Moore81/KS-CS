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
	cout << x_ << y_;
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
	sunk_ = false;
}