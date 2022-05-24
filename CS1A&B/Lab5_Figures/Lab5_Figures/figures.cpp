// Stores figure functions
// Figures
// Thomas Moore
// 2/24/2021

#include <iostream>
#include "figures.hpp"

using std::cout; using std::cin; using std::endl;

// draws a square
void square(int size) {

	for (int h = 0; h < size; h++) {
		for (int w = 0; w < size; w++) {
			cout << "*";
		}
		cout << endl;

	}
}
// draws a hollow square
void hollowSquare(int size) {

	for (int h = 0; h < size; h++) {
		for (int w = 0; w < size; w++) {

			if (h == 0 || w == 0 || h == size - 1 || w == size - 1)
				cout << "*";
			else
				cout << " ";

		}
		cout << endl;
	}

}
// draws a diagonal line
void slash(int size) {

	for (int h = 0; h < size; h++) {
		for (int w = 0; w < size; w++) {
			if (h == w)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}	
}

void reverseSlash(int size) {

	for (int h = 0; h < size; h++) {
		for (int w = 0; w < size; w++) {
			if (h + w == size - 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}

void diamond(int size) {

	for (int h = 0; h < size; h++) {
		for (int w = 0; w < size - h; w++)

			cout << " ";

		if (h == 0)
			cout << "*";

		for (int w = 0; w < 2 * h; w++) {
			if (w == 0)
				cout << "*";
			else
				cout << " ";
		}
		if (h != 0)
			cout << "*";

		cout << endl;

	}
	for (int h = size; h >= 0; h--) {
		for (int w = size; w > 0 + h; w--)

			cout << " ";

		for (int w = 0; w < 2 * h; w++) {
			if (w == 0)
				cout << "*";
			else
				cout << " ";
		}
		cout << "*";

		cout << endl;

	}

}
