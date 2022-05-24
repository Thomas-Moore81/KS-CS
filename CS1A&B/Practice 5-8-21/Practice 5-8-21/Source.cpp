// Code related to CS1-B Final
// Practice Code
// Thomas Moore
// 5/8/2021

#include <iostream>
#include <vector>
#include "Classes.hpp"

using std::cin; using std::cout; using std::endl;
using std::vector;
using namespace MyCode; // Importing entire namespace 
using MyCode::TestClass; // Imports only the class from the namespace


int main() {
	MyCode::TestClass MyClass; // Explicitly using namespace
	
	cout << MyClass.getVar();
	cout << endl;

	int input;
	cout << "Enter a number: ";
	cin >> input;
	cout << endl;

	MyClass.setVar(input);

	cout << MyClass.getVar();
	cout << endl;

	

}

struct StructDate {
	int structMonth;
	int structDay;
	int structYear;

};
