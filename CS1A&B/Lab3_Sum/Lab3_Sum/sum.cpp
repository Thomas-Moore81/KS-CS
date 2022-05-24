// Sum
// Thomas Moore
// 2/8/2021

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {
	
	int number, max;
		max = 0;
	// accepts intergers until a 0 is entered
		do {
			cout << "Input a sequence of intergers, the program ends with 0 " << endl;
			cin >> number;

			cout << "The number entered was " << number << endl;
			
			if (number > 0) max += number; // Adds all positive intergers together
		cout << "The sum of all positive intergers is " << max << endl;

		}  while (number != 0);
		
		
	
}