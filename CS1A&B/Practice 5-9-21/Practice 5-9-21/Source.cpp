// contains main func
// Big Three Practice
// Thomas Moore
// 5/9/2021

#include <iostream>
#include "bigthree.hpp"
#include <vector>

using std::cin; using std::cout; using std::endl; using std::vector;

int main() {

	int* intPtr; // declaring a pointer
	int pointee = 365; // automatic memory allocation

	intPtr = &pointee; // assigning the value of pointee to the pointer

	cout << *intPtr << endl; // printing the value being pointed at

	BigThree bagels;
	
	bagels.addNumber(54);
	bagels.addNumber(32);

	bagels.print();


	BigThree drinks;

	drinks = bagels;

	drinks.print();


	vector <int> donuts(0);
	donuts.push_back(17);
	donuts.push_back(58);
	donuts.push_back(345);

	for (size_t i = 0; i < donuts.size(); ++i) {
		cout << donuts[i] << " ";

	}
	cout << endl;

	vector<int>::iterator it; // declaring iterator
	it = donuts.begin() + 1; // assigns iterator to the [1] element
	donuts.insert(it, 25);

	for (size_t i = 0; i < donuts.size(); ++i) { // print using for loop
		cout << donuts[i] << " ";

	}
	cout << endl;

	it = donuts.begin(); 
	
	while (it != donuts.end()) { // print using and iterator
		cout << *it << " ";
		++it;
	}
	cout << endl;

	printFactorial(3); // recursion example

	cout << endl; 

	vector<vector<int>> column;
	vector<int> row;




}