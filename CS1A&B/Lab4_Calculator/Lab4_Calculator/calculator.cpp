// Calculates absolute value, square root, floor, and power 
// Calculator
// Thomas Moore
// 2/15/2021

#include <iostream>
#include <cstdlib>
#include <cmath>

using std::cout; using std::cin; using std::endl;

int main() {

	int operation;

	cout << "1. absolute value" << endl;
	cout << "2. square root" << endl;
	cout << "3. floor" << endl;
	cout << "4. power" << endl;

	do {
		
		cout << " Select an operation " << endl;
		cin >> operation;

		switch (operation) {
			// outputs an absolute value of a number
		case 1: {
			double userInput;
			cout << "Enter any interger " << endl;
			cin >> userInput;

			double absResult = abs(userInput);

			cout << "The result is " << absResult << endl;
			
			break;
		}
			  // outputs a square root of a number
		case 2: {
			double userInput;
			cout << "Enter any interger " << endl;
			cin >> userInput;

			double sqrtResult = sqrt(userInput);

			cout << "The result is " << sqrtResult << endl;
			
			break;
		}
			  // outputs a number with a whole number rounded down
		case 3: {
			double userInput;
			cout << "Enter an interger " << endl;
			cin >> userInput;

			double floorResult = floor(userInput);

			cout << "The result is " << floorResult << endl;
			
			break;
		}
			  // outputs a number that is 
		case 4: { 

			cout << "Enter an interger " << endl;
			double base, exponent;
			cin >> base;
			cout << "Enter the exponent value " << endl;
			cin >> exponent;

			double powerResult = pow(base, exponent);

			cout << "The result is " << powerResult << endl;

			break;
		}
			  
		
		}
	} while (operation > 0 && operation < 5);
}