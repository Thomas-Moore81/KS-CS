// Draws Figures
// Figures
// Thomas Moore
// 2/10/2021

#include <iostream>

using std::cout; using std::cin; using std::endl;
int main() {
	// h = height and w = width
	
	int number;
	cout << "Input a number ";
	cin >> number;
	// Draws a square
	
	for (int h = 0; h < number; h++) {
		for (int w = 0; w < number; w++) {
			cout << "*";
		}
		cout << endl;
	}
	// Draws a diagonal line
	for (int h = 0; h < number; h++) {
		for (int w = 0; w < number; w++) {
			if (h == w)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
	// Reverses the diagonal line
	for (int h = 0; h < number; h++) {
		for (int w = 0; w < number; w++) {
			if (h + w == number - 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
	// Draws a hollow square 
	for (int h = 0; h < number; h++) {
		for (int w = 0; w < number; w++) {
			
			if (h == 0 || w == 0 || h == number - 1|| w == number - 1)
				cout << "*";
			else
				cout << " ";
	
		}
		cout << endl;
	}
	
	// Draws a diamond
	for (int h = 0; h < number; h++) {
		for (int w = 0; w < number - h; w++)
		
			cout << " ";
		
		if (h == 0)
			cout << "*";
		
		for (int w = 0; w < 2 * h; w++) {
			if (w == 0)
				cout << "*";
			else
				cout << " ";
		}
		if (h != 0 )
			cout << "*";
		
		cout << endl;
	
	}
	for (int h = number; h >= 0; h--) {
		for (int w = number; w > 0 + h; w--)

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