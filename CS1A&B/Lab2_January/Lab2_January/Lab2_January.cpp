// Spell Days
// Thomas Moore
// 2/1/2021

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {
	int number, singles, tens;
	cout << "Enter the interger of the date ";
	cin >> number;
		 singles = number % 10;
		 tens = number / 10;

	// These seperate and show variable into tens and single decimal places
	// cout << "Tens: " << tens << endl;
	// cout << "Singles: " << singles << endl;

	// differentiates from 10~19
	if (tens == 1) {
		switch (singles) {
		case 1: cout << "eleven";
			break;

		case 2: cout << "twelve";
			break;

		case 3: cout << "thirteen";
			break;

		case 4: cout << "fourteen";
			break;

		case 5: cout << "fifteen";
			break;

		case 6: cout << "sixteen";
			break;

		case 7: cout << "seventeen";
			break;

		case 8: cout << "eighteen";
			break;

		case 9: cout << "nineteen";
			break;

		default: cout << "ten";
			break;
		}
	}
		// differentiates 20 and 30
	else if (tens > 1) {
		switch (tens) {
		case 2: cout << "twenty ";
			break;
		case 3: cout << "thirty ";
			break;
		default: cout << "";
		}
	}
		// turns single digits into words
	if (tens == 0 || tens > 1) {
		switch (singles) {
		case 1: cout << "one";
			break;
		case 2: cout << "two";
			break;
		case 3: cout << "three";
			break;
		case 4: cout << "four";
			break;
		case 5: cout << "five";
			break;
		case 6: cout << "six";
			break;
		case 7: cout << "seven";
			break;
		case 8: cout << "eight";
			break;
		case 9: cout << "nine";
			break;
		}

	}

	
}