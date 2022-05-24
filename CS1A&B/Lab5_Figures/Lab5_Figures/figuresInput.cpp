// Using seperate files to print different figures
// Figures
// Thomas Moore
// 2/24/2021

#include <iostream>
#include "figures.hpp"

using std::cin; using std::cout; using std::endl;

int main() {

	cout << "1. square " << endl;
	cout << "2. slash " << endl;
	cout << "3. backslash " << endl;
	cout << "4. diamond " << endl;

	int selection;


	while (true) {


		cout << "Select a figure: ";
		cin >> selection;

		// If statement to end progam if out of range
		if (selection > 4 || selection < 1)
			break;

		
		int size;
		cout << "Input the size of the figure: ";
		cin >> size;


		switch (selection) {
		// Function chooses between sqaure varients
		case 1:
			char squareChoice;
			cout << "Hollow or Filled? [h/f]: ";
			cin >> squareChoice;

			if (squareChoice == 'f')
				square(size);

			else if (squareChoice == 'h')
				hollowSquare(size);
			break;
		// Function for diagonal line
		case 2:
			slash(size);
			break;
		// Function for reverse diagonal line
		case 3:
			reverseSlash(size);
			break;
		// Function for diamond
		case 4:
			diamond(size);
			break;

		default: 
			break;
		}

	} 
	
}