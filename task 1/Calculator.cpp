#include "Calculator.h"

//DEFAULT CONSTRUCTOR
Calculator::Calculator() {
	numOne = 0;
	numTwo = 0;
}

//PARAMETRIZE CONSTRUCTOR
Calculator::Calculator(int numOne, int numTwo) {
	this->numOne = numOne;
	this->numTwo = numTwo;
}

//OPERATORS
Calculator Calculator::operator+(Calculator c) {
	Calculator temp;
	temp.numOne = numOne + c.numOne;
	temp.numTwo = numTwo + c.numTwo;
	return temp;
}

Calculator Calculator::operator-(Calculator c) {
	Calculator temp;
	temp.numOne = numOne - c.numOne;
	temp.numTwo = numOne - c.numTwo;
	return temp;
}

//SETTERS
void Calculator::setnumOne(int numOne) {
	this->numOne = numOne;
}

void Calculator::setnumTwo(int numTwo) {
	this->numTwo = numTwo;
}

//GETTERS
int Calculator::getnumOne() {
	return numOne;
}

int Calculator::getnumTwo() {
	return numTwo;
}

//DISPLAY FUNCTION
void Calculator::display() {
	cout << "number one is " << numOne << endl;
	cout << "number two is " << numTwo << endl;
	cout << endl;
}