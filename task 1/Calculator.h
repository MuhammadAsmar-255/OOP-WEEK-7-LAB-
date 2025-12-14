#include<iostream>
using namespace std;
class Calculator {
private:
	//decleraing the variables in the orivate section
	int numOne;
	int numTwo;
public:
	//default constructor
	Calculator();
	//parametrized constructor
	Calculator(int numOne, int numTwo);
	//operator overlooding
	Calculator operator +(Calculator c);
	Calculator operator -(Calculator c);
	//setters
	void setnumOne(int numOne);
	void setnumTwo(int numTwo);
	//getters
	int getnumOne();
	int getnumTwo();
	//display function
	void display();
};