#include <iostream>
using namespace std;

class Matrix {
	int arr[4];
public:
	Matrix(int a=0, int b=0, int c=0, int d=0) { 
		arr[0] = a; arr[1] = b; arr[2] = c; arr[3] = d;
	}
	friend Matrix operator +(Matrix op1, Matrix op2) {
		Matrix tmp;
		for (int i = 0; i < 4; i++) 
			tmp.arr[i] = op1.arr[i] + op2.arr[i];
		return tmp;
	}
	friend Matrix& operator +=(Matrix& op1, Matrix op2) {
		for (int i = 0; i < 4; i++)
			op1.arr[i] += op2.arr[i];
		return op1;
	}
	friend bool operator ==(Matrix op1, Matrix op2) {
		for (int i = 0; i < 4; i++) {
			if (op1.arr[i] != op2.arr[i])
				return false;
		}
		return true;

	}
	void show() {
		cout << "Matrix = { " << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " }" << endl;
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