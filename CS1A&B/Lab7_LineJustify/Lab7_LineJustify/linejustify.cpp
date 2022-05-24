// Justifies a line of text expanding it to 75 characters
// Line Justify
// Thomas Moore
// 3/15/2021

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using std::cin; using std::cout; using std::endl; using std::string;

int main() {

	cout << "Input a line of line of text. ";
	string line; 
	getline(cin, line);
	const int LINEMAX = 75;
	
	int puncPos = line.find_first_of(".,!?;");
	// adds whitespace after punction marks
	while (puncPos != string::npos && line.size() < LINEMAX) {
		if (puncPos != line.size() - 1)
			line.insert(puncPos + 1, 1, ' ');
		puncPos = line.find_first_of(".,!?;", puncPos + 1);
	}

	srand(time(nullptr));
	int spacePos = 0; 
	// randomly adds whitespace between words
	while ( spacePos != string::npos && line.size() < LINEMAX) {
		int randomPos = rand() % LINEMAX;
		int spacePos = line.find_first_of(' ', randomPos);
		if (spacePos == -1)
			continue;
		if (spacePos != line.size() - 1)
			line.insert(spacePos + 1, 1, ' ');
	}
	cout << line;
}