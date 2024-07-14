#include<iostream>
using namespace std;

//function
/*
int sub(int a, int b) {
	return a - b;
}*/

// Define the Rectangle class
class Rectangle {
private:
	float length;
	float width;

public:
	// Constructor
	Rectangle(float l, float w) {
		length = l;
		width = w;
	}

	// Method to calculate area
	float calculateArea() {
		return length * width;
	}

	// Method to calculate perimeter
	float calculatePerimeter() {
		return 2 * (length + width);
	}
};

int main() {
	//hello world
	/*
	std::cout << "Hello World";*/

	/*
	cin - Standard Input stream
	cout - Standard Output stream*/

	//variable
	/*
	int age = 20;
	cout << "My age is " << score;*/

	//datatype - It's so much but It's same as C, we only note the new ones
	//string
	/*
	string name = "Kelvin";
	cout << "My name is " << name;*/

	//class
	// Create a Rectangle object
	Rectangle rect(5.0, 3.0);

	// Calculate the area and perimeter of the rectangle
	float area = rect.calculateArea();
	float perimeter = rect.calculatePerimeter();

	// Print the results
	std::cout << "Area: " << area << std::endl;
	std::cout << "Perimeter: " << perimeter << std::endl;


	//Conditional Statements
	//if-else
	/*
	int num = 10;
	if (num > 0) {
		cout << "Number is positive" << endl;
	}
	else {
		cout << "Number is non-positive" << endl;
	}*/

	//switch-case
	/*
	char grade = 'A';
	switch (grade) {
	case 'A':
		cout << "Excellent!" << endl;
		break;
	case 'B':
		cout << "Good job!" << endl;
		break;
	case 'C':
		cout << "Passing grade" << endl;
		break;
	default:
		cout << "Fail" << endl;
	}*/

	//loopings
	//for
	/*
	for (int i = 1; i <= 5; i++) {
		cout << "Count: " << i << endl;
	}*/
	//endl = end line

	//while
	/*
	int count = 1;
	while (count <= 5) {
		cout << "Count: " << count << endl;
		++count;
	}*/

	//function
	/*cout << sub(5.25, 3.66);*/

	return 0;
}