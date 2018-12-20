/**
* @file main.cpp
*
* @brief This code compares two methods of passing data to function arguments.
* First method: Pass-by-value
* Second method: Pass-by-Reference
*
* @author Saif Ullah Ijaz
*
*/
#include <iostream> 

using std::cout;
using std::endl;

// FUNCTION PROTOTYPE (DECLERATION)

/** function that squares the input by value.
*
* @param number The number value to be squared.
*
* @return Square of input.
*/
int squareByValue(int);

/** function that squares the input by reference.
*
* @param numberRef Reference of the number to be squared.
*
* @return void.
*/
void squareByReference(int &);

// function main begins program execution
int main() {
	int x = 2;
	int z = 4;

	// demonstrate squareByValue 
	cout << "x = " << x << " before squareByValue\n";
	cout << "Value returned by squareByValue: " << squareByValue(x) << endl;
	cout << "x = " << x << " after squareByValue\n" << endl;

	// demonstrate squareByReference 
	cout << "z = " << z << " before squareByReference" << endl;
	squareByReference(z);
	cout << "z = " << z << " after squareByReference" << endl;

	system("pause");
	return 0; // indicates successful termination 
}
// end main 

// FUNCTION DEFINITION

/* squareByValue multiplies number by itself, stores the
* result in number and returns the new value of number
*/
int squareByValue(int number) {

	return number *= number; // caller's argument not modified 

}
// end function squareByValue 

/* squareByReference multiplies numberRef by itself and
* stores the result in the variable to which numberRef
* refers in function main
*/
void squareByReference(int &numberRef) {

	numberRef *= numberRef; // caller's argument modified 

}
// end function squareByReference
