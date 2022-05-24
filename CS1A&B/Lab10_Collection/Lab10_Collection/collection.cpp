// contains function definitions
// Definitions
// Thomas Moore
// 4/16/2021

#include <iostream>
#include "collection.hpp"

using std::cout; using std::cin; using std::endl;

void output(double* colPtr, int size) {
	cout << "your numbers: ";
	for (int i = 0; i < size; ++i) {
		cout << colPtr[i] << " ";
	}
	cout << " " << endl;
}

int check(double* colPtr, double number, int size) {
	for (int i = 0; i < size; ++i) {
		if (number == colPtr[i])
			return i;
	}
	return -1;
}

void addNumber(double*& colPtr, double number, int& size) {
	if (check(colPtr, number, size) == -1) {
		double* tmp = new double[size + 1];
		for (int i = 0; i < size; ++i) {
			tmp[i] = colPtr[i];
		}
		tmp[size] = number;
		delete[] colPtr;
		colPtr = tmp;
		++size;
		
	}
	else {
		cout << "duplicate!" << endl;
	}
}

void removeNumber(double*& colPtr, double number, int& size) {
	if (check(colPtr, number, size) != -1) {
		double* tmp = new double[size - 1];
		bool found = false;
		for (int i = 0; i < size; ++i) {
			if (colPtr[i] == number)
				found = true;

			else {
				if (found != true) {
					tmp[i] = colPtr[i];
				}
				else {
					tmp[i - 1] = colPtr[i];
				}
			}
		}
		delete[] colPtr;
		colPtr = tmp;
		--size;
	}
}