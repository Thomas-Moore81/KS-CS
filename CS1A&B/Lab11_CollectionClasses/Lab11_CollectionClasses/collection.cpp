// contains definitions for functions of class Collection
// Collection of doubles class
// Thomas Moore
// 4/22/2021

#include <iostream>
#include "collection.hpp"

using std::cout; using std::cin; using std::endl;

Collection::Collection() {
	size_ = 0;
	col_ = new double[1];
}

int Collection::check(double number) {
	for (int i = 0; i < size_; ++i) {
		if (number == col_[i])
			return i;
	}
	return -1;
}

void Collection::addNumber(double number) {
	if (check(number) == -1) {
		double* tmp = new double[size_ + 1];
		for (int i = 0; i < size_; ++i) {
			tmp[i] = col_[i];
		}
		tmp[size_] = number;
		delete[] col_;
		col_ = tmp;
		++size_;
	}
	
	else {
		cout << "duplicate!" << endl;
	}
}

void Collection::removeNumber(double number) {
	if (check(number) != -1) {
		double* tmp = new double[size_ - 1];
		bool found = false;
		for (int i = 0; i < size_; ++i) {
			if (col_[i] == number)
				found = true;

			else {
				if (found != true) {
					tmp[i] = col_[i];
				}

				else {
					tmp[i - 1] = col_[i];
				}
			}
		}
		delete[] col_;
		col_ = tmp;
		--size_;
	}
}

void Collection::output() {
	cout << "your numbers: ";
	for (int i = 0; i < size_; ++i) {
		cout << col_[i] << " ";
	}
	cout << endl;
}

Collection::Collection(const Collection& source) {
	size_ = source.size_;
	col_ = new double[size_];
	for (int i = 0; i < size_; ++i) {
		col_[i] = source.col_[i];
	}
}

Collection& Collection::operator=(const Collection& rhs) {
	if (this != &rhs) {
		size_ = rhs.size_;
		delete[] col_;
		col_ = new double[size_];
		for (int i = 0; i < size_; ++i)
			col_[i] = rhs.col_[i];
	}
	return *this;
}

Collection::~Collection() {
	delete[] col_;
}