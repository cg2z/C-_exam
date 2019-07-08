#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << " ÀÎ ¿ø" << endl; }
	Circle operator ++(int num) {
		Circle tmp = *this;
		radius++;
		return tmp;
	}
	Circle operator ++() {
		radius++;
		return *this;
	}
};

int main() {
	Circle a(5), b(4);
	++a;
	b = a++;
	a.show();
	b.show();
}