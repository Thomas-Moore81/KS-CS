// A function that swaps variables
// Swap
// Thomas Moore
// 3/1/2021

#include <iostream>

using std::cin; using std::cout; using std::endl;

void swap(int&, int&);

int main() {

	int num1;
	int num2;
	int num3;

	cout << "Enter three numbers: " << endl;
	cin >> num1 >> num2 >> num3;

	if (num1 > num2)
		swap(num1, num2);

	if (num1 > num3)
		swap(num1, num3);

	if (num2 > num3)
		swap(num2, num3);

	cout << "The sorted numbers are: " << num1 << " " << num2 << " " << num3;
}

void swap(int& left, int& right) {

	const int temp = left;
	left = right;
	right = temp;

}