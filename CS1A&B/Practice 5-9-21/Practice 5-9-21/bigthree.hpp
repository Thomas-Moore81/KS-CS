// Contains protypes and headers for big three
// Prototypes and Headers
// Thomas Moore
// 5/9/2021

#ifndef BIGTHREE_HPP
#define BIGTHREE_HPP

class BigThree {

public:
	BigThree(); // void constructor

	BigThree(const BigThree&); // copy constructor 

	BigThree& operator=(const BigThree&); // assignment overloading

	~BigThree(); // Destructor

	void addNumber(int);

	void print();

private:
	int* dynArray_; // pointer to a dynamic array
	int size_; // size variable for dynamic array

};

void printFactorial(int);

#endif // !
