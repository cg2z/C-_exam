#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << " �� ��" << endl; }
	friend Circle operator ++(Circle& op1, int num) {
		Circle tmp = op1;
		op1.radius++;
		return tmp;
	}
	friend Circle& operator ++(Circle& op1) {
		op1.radius++;
		return op1;
	}
};

int main() {
	Circle a(5), b(4);
	++a;
	b = a++;
	a.show();
	b.show();
}