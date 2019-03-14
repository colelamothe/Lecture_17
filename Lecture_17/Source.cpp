// Lecture 17 modular programming with functions

#include<iostream>
#include<cmath>
#include<string>

using namespace std;

// You can either write your functions in their entirety before the main loop or 
// include a callout at the start to let the compiler know that this is code written below main.
// This is called a prototype and needs the return type, name, and input type required.
// The general recommendation is to place user defined functions after the main function.

double getArea(double); // Function prototype
double cubeVolume(double);
void display(string);


int main() {
	/* functions can be either pre-definined, such as those found in libraries, or user defined for a specific task. */

	cout << "2 raised to the power 5: " << pow(2, 5) << endl; // The pow function is an example of a simple pre-defined function

	/* syntax of a function:
		return_type function_name([parameter list]){
			statements
		}
	*/

	double radius;
	cout << "Enter the radius of a circle: " << endl;
	cin >> radius;

	cout << "The area of your circle is: " << getArea(radius) << endl; // calling the getArea function by passing the user supplied radius as the argument
	// Every time a function is called it is basically injecting that code into that place of your program. This means that the rest of the loop will wait until 
	// it receives a return from the function that has been called.

	double sideLength;
	cout << "Enter the side length of a cube: " << endl;
	cin >> sideLength;

	cout << "The volume of your cube is: " << cubeVolume(sideLength) << endl; // calls the cube volume function which returns the volume as a double

	display("Cole"); // calls the void function 'display' nothing will be returned to this line

	system("pause");
	return 0;
}



// Declaring a function to find the area of a circle
// input: circle radius
// output: circle surface area
double getArea(double r) { // defines a function that will return a double, it requires a double data type for input to be used as the radius and it is declared in the parameters.
	double area = 3.14*r*r; // uses the input 'r' to calculate the area of a circle

	// cout << cubeVolume(r) << endl; // Functions can be nested as needed but good practise is to make functions that have their own functionality as it is easier to debug

	return area; // outputs the value of 'area' to the original place that called the function.
}

// Declaring a function to find the volume of a cube
// input: side length
// output: volume
double cubeVolume(double side) { // defines a function that returns a double and needs a double to run.
	double volume = side*side*side;
	return volume; // returns the calculated volume as a double.
}

// Declaring a function that does not have any output
// Input:
// Output: direct command line output of a name surrounded by * no return to main function.
void display(string name) {
	// A void datatype function does not return anything to the line that it was called, it is used specifically for output and other such non-return functions.

	int length = name.length(); // checks the length of the input string

	for (int i = 0; i < length+2; i++) { // outputs the first line of stars == to the number of characters
		cout << '*';
	}
	cout << endl;
	cout << '*' << name << '*' << endl; // outputs the name with a star on either side.

	for (int i = 0; i < length+2; i++) { // outputs the last line of stars == to the number of characters
		cout << '*';
	}
	cout << endl;

}