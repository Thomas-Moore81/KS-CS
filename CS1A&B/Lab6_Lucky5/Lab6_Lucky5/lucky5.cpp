// Runs a lotto guessing game
// Lucky5
// Thomas Moore
// 3/1/2021

#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cin; using std::cout; using std::endl;

const int lottoSize = 10;

void assign(int []);
bool check(int [], int);
void draw(int array[]);
int entry();
void printOut(int winningNumbers[]);

int main() {

	int winningNumbers[lottoSize];
		
	assign(winningNumbers);

	draw(winningNumbers);

	// Gives the user 5 guesses
	for (int itterate = 0; itterate < 5; ++itterate) {
		int userGuess = entry();
		if (check(winningNumbers, userGuess) == true) {
			cout << "You win!" << endl;
			break;
		}
	}

	printOut(winningNumbers);

}

// assigns 0 to every element of the array
void assign(int array[]) {
	
	for (int i = 0; i < lottoSize; ++i) 
		array[i] = 0;
}

// checks to see if any numbers repeat
bool check(int array[], int numToCheck) {

	for (int i = 0; i < lottoSize; ++i) {
		if (array[i] == numToCheck)
			return true;
		}
	return false;

}

// creates 10 random numbers and inputs them into the array
void draw(int array[]) {

	srand(time(nullptr));

	int currentElement = 0;
	while (currentElement < lottoSize) {
		
		int randNum = rand() % 100 + 1;
		if (check(array, randNum) == true)
			continue;
	
		array[currentElement] = randNum;

		++currentElement;

	}
}

// stores the users guesses so they can be compared with the check function
int entry() {

	cout << "Enter a number between 1 and 100: ";
	int userGuess;
	cin >> userGuess;
	
	return userGuess;
}

// prints out all 10 winning lotto numbers
void printOut(int winningNumbers[]) {

	for (int i = 0; i < lottoSize; ++i)
		cout << winningNumbers[i] << " ";

}