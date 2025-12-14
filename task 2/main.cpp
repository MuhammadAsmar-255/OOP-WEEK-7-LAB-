#include"Compare.h"
int main() {
	Compare c1(4);
	Compare c2(6);
	cout << "Comparing object2 to object 1" << endl;
	c2.display(c1);
	cout << "comparing object1 to object 2" << endl;
	c1.display(c2);
	return 0;
}