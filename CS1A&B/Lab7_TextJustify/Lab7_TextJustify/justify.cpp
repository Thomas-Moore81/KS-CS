// Adds spaces after punctuation and random words to justify text to 75 characters.
// Text Justification
// Thomas Moore
// 3/19/2021

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

using std::cin; using std::cout; using std::endl; using std::string; using std::ifstream; using std::ofstream;

void justify(string& line);

const int LINEMAX = 75;

int main() {
	
	ifstream fin("unjustified.txt");
	ofstream fout("justified.txt"); // if file was "unjustified.txt" it would nuke it

	string line;
	while (getline(fin, line)) {
		justify(line);
		fout << line << endl;
	}

	fin.close();
	fout.close();
}

void justify(string& line) {

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
	while (spacePos != string::npos && line.size() < LINEMAX) {
		int randomPos = rand() % LINEMAX;
		int spacePos = line.find_first_of(' ', randomPos);
		if (spacePos == -1)
			continue;
		if (spacePos != line.size() - 1)
			line.insert(spacePos + 1, 1, ' ');
	}
	cout << line;
}
