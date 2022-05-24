// contains main function for CollectionVectors
// Collection Vectors
// Thomas Moore
// 4/26/2021

#include <iostream>
#include <vector>
#include <algorithm>

using std::cout; using std::cin; using std::endl; using std::vector;

int main() {
	vector<double> collection;
	char operation;
	double userInput;


	do {
		cout << "enter operation [a/r/q] and number: ";
		cin >> operation;

		if (operation == 'a' || operation == 'r')
			cin >> userInput;

		vector<double>::iterator addIt = collection.end();
		vector<double>::iterator findIt = find(collection.begin(), collection.end(), userInput);

		if (operation == 'a') {

			if (findIt != collection.end()) {
				cout << "duplicate!" << endl;
				
			}

			else 
				collection.insert(addIt, userInput);

		}

		if (operation == 'r') {

			if (findIt != collection.end()) {
				collection.erase(findIt);
			}

		}

		if (operation == 'q') {
				break;
		}

		cout << "your numbers: ";
		for (auto i = 0; i < collection.size(); ++i) {
			cout << collection[i] << " ";
		}
		cout << endl;

	} while (operation);
}