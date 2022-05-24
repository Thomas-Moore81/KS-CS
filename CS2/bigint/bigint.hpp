#ifndef BIGINT_HPP_
#define BIGINT_HPP_

#include <iostream>

const int capacity = 200;

class bigint {

public:

	bigint(); // default constructor
	bigint(int numInput); // constructor to set an int inside of bigint
	bigint(const char[]); // constructor to turn characters into integars 


	void debugPrint(std::ostream&) const;

	bool operator==(const bigint&) const;
	bigint operator+(const bigint& rhs) const;
	int operator[](const int& index) const;
	bigint operator*(bigint&) const;

	bigint timesDigit (int) const;
	bigint times10(int) const;

	friend std::ostream& operator<<(std::ostream& output, const bigint& rhs);
	friend std::istream& operator>>(std::istream& input, bigint& rhs);


private:

	int bigint_Array[capacity];

};



#endif
