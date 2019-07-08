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
	friend bool operator ==(Book op1, int num);
	friend bool operator ==(Book op2, string str);
	friend bool operator == (Book op3, Book op4);
};
bool operator ==(Book op1, int num) {
	if (op1.price == num) return true;
	else return false;
}
bool operator ==(Book op2, string str) {
	if (op2.title == str)return true;
	else return false;
}
bool operator == (Book op3, Book op4) {
	if (op3.pages == op4.pages&&op3.price == op4.price&&op3.title == op4.title) return true;
	else return false;
}

void main() {
	Book a("명품 C++", 30000, 300), b("고품 C++", 30000, 500);
	if (a == 30000) cout << "정가 30000원" << endl;
	if (a == "명품 C++") cout << "명품 C++ 입니다." << endl;
	if (a == b) cout << "두 책이 같은 책입니다." << endl;
}