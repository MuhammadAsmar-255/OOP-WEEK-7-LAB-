#include"Calculator.h"
int main() {
	Calculator c1(10,10);
	Calculator c2(20, 10);
	Calculator c3 = c1 + c2;
	c1.display();
	c2.display();
	c3.display();
	return 0;
}