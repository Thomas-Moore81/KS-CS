// Random Number generation guessing game
// Guess Troll's Age
// Thomas Moore
// 2/17/2021

#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cout; using std::cin; using std::endl;

int main() {
	
	cout << "A fair young maiden is locked up in an enchanted castle guarded by an ugly old troll. Once a year, a handsome prince is allowed to come to the castle to try to free the maiden. To free her, the prince has to guess the troll's age. If the prince guesses correctly, the maiden is freed, they get married and live happily ever after. If the prince guesses incorrectly, the troll says if he is younger or older and the prince has to come next year." << endl;

	// Skips a line in the prompt for style
	cout << " " << endl;
	
	// Used to generate random number for troll age
	srand(time(nullptr)); 
	
	int answer = rand() % 100 + 101;
	int guess;
	
	do {
		
		cout << "Hello, handsome prince. I am an ugly old troll. How old am I? ";
		cin >> guess;
		
		if (answer > guess) { 
			cout << "Wrong, I am older. No fair maiden for you. Better luck next year. " << endl;

			++answer;

			continue;
		 }
		
		else if (answer < guess) {

			cout << "Wrong, I am younger. No fair maiden for you. Better luck next year. " << endl;
			
			++answer; 
			
			continue;
		}

		

	} while (guess != answer);

	if (answer == guess)
		cout << "You got it! Here is the fair maiden. Live happily ever after! ";
	




}