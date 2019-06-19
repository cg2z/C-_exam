#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}
	bool operator ==(int num) {
		if (price == num) return true;
		else return false;
	}
	bool operator ==(string str) {
		if (title == str) return true;
		else return false;
	}
	bool operator == (Book op1) {
		if (op1.title == title && op1.pages == pages && op1.price == price) return true;
		else return false;
	}
};

void main() {
	Book a("명품 C++", 30000, 300), b("고품 C++", 30000, 500);
	if (a == 30000) cout << "정가 30000원" << endl;
	if (a == "명품 C++") cout << "명품 C++ 입니다." << endl;
	if (a == b) cout << "두 책이 같은 책입니다." << endl;
}