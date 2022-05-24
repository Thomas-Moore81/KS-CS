// Contains the main program of the collection program using classes
// Double Collection
// Thomas Moore
// 4/22/2021

#include <iostream>
#include "collection.hpp"

using std::cin; using std::cout; using std::endl;

int main() {
	Collection userCollection;
	char operation;
	double userInput;

	do {
		cout << "enter operation [a/r/q] and number: ";
		cin >> operation;

		if (operation == 'a' || operation == 'r')
			cin >> userInput;
		
		if (operation == 'a') {
			userCollection.addNumber(userInput);
			userCollection.output();
		}

		if (operation == 'r') {
			userCollection.removeNumber(userInput);
			userCollection.output();
		}

		if (operation == 'q') {
			break;
		}

	} while (operation);
}