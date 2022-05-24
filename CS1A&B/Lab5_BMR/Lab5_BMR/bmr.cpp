// Takes input from a user to calculate the users basal metabolic rate and tells them how many doughtnuts they can eat
// Basal Metabolic Rate
// Thomas Moore
// 2/22/2021

#include <iostream>

using std::cin; using std::cout; using std::endl;

double bmrWomen(int weight, int height, int age);

double bmrMen(int weight, int height, int age);

int main() {
	
	const int doughnuts = 195;
	char gender;
	cout << "What is your gender: [m/f]" << endl;
	cin >> gender;
	
	double weight;
	cout << "What is your weight in pounds? " << endl;
	cin >> weight;
	
	int heightInFeet, heightInInches;
	cout << "What is your height in feet and inches? " << endl;
	cin >> heightInFeet >> heightInInches;
	
	int height;
	height = heightInFeet * 12 + heightInInches;

	int age;
	cout << "How old are you in years? " << endl;
	cin >> age;

	double bmr;

	if (gender == 'f') {
		bmr = bmrWomen(weight, height, age);
		cout << "You can eat " << bmr << " calores " << endl;
		int numberOfDoughnuts = bmr / doughnuts;
			cout << "You could eat " << numberOfDoughnuts << " doughnuts";

	}
	else {
		bmr = bmrMen(weight, height, age);
		cout << "You can eat " << bmr << " calores " << endl;
		int numberOfDoughnuts = bmr / doughnuts;
			cout << "You could eat " << numberOfDoughnuts << " doughnuts";

	}

}
// Calculates BMR for Women
double bmrWomen (int weight, int height, int age) {
	
	double bmr = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);

	return bmr;
}
// Calculates BMR for Men
double bmrMen(int weight, int height, int age) {

	double bmr = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);

	return bmr;
}