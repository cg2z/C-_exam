#include <iostream>
using namespace std;

class Matrix {
	int a, b, c, d;
public:
	Matrix(int a=0, int b=0, int c=0, int d=0) { this->a = a; this->b = b; this->c = c; this->d = d; }
	Matrix operator +(Matrix op1) {
		Matrix tmp;
		tmp.a = a + op1.a;
		tmp.b = b + op1.b;
		tmp.c = c + op1.c;
		tmp.d = d + op1.d;
		return tmp;
	}
	Matrix& operator +=(Matrix& op2) {
		this->a += op2.a;
		this->b += op2.b;
		this->c += op2.c;
		this->d += op2.d;
		return *this;
	}
	void show() {
		cout << "Matrix = { " << a << " " << b << " " << c << " " << d << " }" << endl;
	}
	bool operator ==(Matrix op3) {
		if (this->a == op3.a&&this->b == op3.b&&this->c == op3.c&&this->d == op3.d)
			return true;
		else return false;
	}
};

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(); c.show();
	if (a == c)
		cout << "a and the c are the same" << endl;
}