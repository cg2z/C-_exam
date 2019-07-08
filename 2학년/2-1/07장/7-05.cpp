#include <iostream>
using namespace std;

class Color {
	int red, green, blue;
public:
	Color(int red = 0, int green = 0, int blue = 0) {
		this->red = red; this->green = green; this->blue = blue;
	}
	void show() {
		cout << red << " " << green << " " << blue << endl;
	}
	friend Color& operator + (Color op1,Color op2) {
		Color tmp;
		tmp.blue = op1.blue + op2.blue;
		tmp.green = op1.green + op2.green;
		tmp.red = op1.red + op2.red;
		return tmp;
	}
	bool operator ==(Color op3) {
		if (op3.red == 255 && op3.green == 0 && op3.blue == 255) return true;
		else return false;
	}
};

int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";
}