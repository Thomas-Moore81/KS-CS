// Contains the main program of collection program
// Number Collection
// Thomas Moore
// 4/16/2021

#include <iostream>
#include "collection.hpp"

using std::cin; using std::cout; using std::endl;

int main() {
	int size = 0;
	double* colPtr = new double[size];

	char operation;
	double inputNum;

	do {
		cout << "enter operation [a/r/q] and number: ";
		cin >> operation;
		
		if (operation == 'a' || operation == 'r')
			cin >> inputNum;

		if (operation == 'a') {
			addNumber(colPtr, inputNum, size);
			output(colPtr, size);
		}

		if (operation == 'r') {
			removeNumber(colPtr, inputNum, size);
			output(colPtr, size);
			
		}

		if (operation == 'q') {

			delete[] colPtr;
			break;
		}

	} while (operation);
	

	
}