// contains the main function for a battleship style game made with multiarrays
// MultiArrays
// Thomas Moore
// 4/29/2021

#include <iostream>

using std::cin; using std::cout; using std::endl;

const int oceanLength = 6;
const int oceanWidth = 6;

int main() {
	
	bool shot[oceanLength][oceanWidth];
	char operational;

	// sets ocean/field
	for (int i = 0; i < oceanLength; ++i)
		for (int j = 0; j < oceanWidth; ++j)
			shot[i][j] = false;

	do {
		cout << "Another shot? [y/n] ";
		cin >> operational;
		
		int xCord;
		char yCord;

		if (operational == 'y') {
			cout << "Location? (number, letter) ";
			cin >> xCord >> yCord;
			if (shot[xCord - 1][yCord - 'a'] == true) {
				cout << "duplicate!" << endl;
			}
			else 
				shot[xCord - 1][yCord - 'a'] = true;
			
		}
			cout << "  " << "a " << "b " << "c " << "d " << "e " << "f " << endl;
			
			for (int c = 0; c < oceanLength; ++c) {
				cout << c + 1 << " ";

				for (int r = 0; r < oceanWidth; ++r) {
					if (shot[c][r] == true) {
						cout << "* ";
						
					}

					else {
						cout << "  ";
					}

				}
				cout << endl;
			}
		
	} while (operational != 'n');
	
}

