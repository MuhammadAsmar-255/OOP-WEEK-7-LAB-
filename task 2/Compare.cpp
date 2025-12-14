#include "Compare.h"

Compare::Compare() {
	Value = 0;
}

Compare::Compare(int Value) {
	this->Value = Value;
}

bool Compare::operator==(Compare c) {
	return Value == c.Value;
}

bool Compare::operator<(Compare c) {
	return Value < c.Value;
}

bool Compare::operator>(Compare c) {
	return Value > c.Value;
}

void Compare::setValue(int Value) {
	this->Value = Value;
}

int Compare::getvalue() {
	return Value;
}

void Compare::display(Compare c) {
	if (*this == c) {
		cout << "Both values are equal." << endl;
	}
	else if (*this < c) {
		cout << Value << " is smaller than " << c.Value << endl;
	}
	else if(*this>c){
		cout << Value << " is greater then " << c.Value << endl;
	}
	cout << endl;
}