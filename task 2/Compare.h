#include<iostream>
using namespace std;
class Compare {
private:
	//member variable to store the data
	int Value;
public:
	Compare();
	Compare(int Value);

	bool operator ==(Compare c);
	bool operator <(Compare c);
	bool operator >(Compare c);

	void setValue(int Value);

	int getvalue();

	void display(Compare c);
};