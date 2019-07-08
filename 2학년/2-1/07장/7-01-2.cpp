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
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}
	friend Book& operator +=(Book& op1, int money);
	friend Book& operator -=(Book& op2, int money);
};

Book& operator +=(Book& op1, int money) { op1.price += money; return op1; }
Book& operator -=(Book& op2, int money) { op2.price -= money; return op2; }

void main() {
	Book a("û��", 20000, 300), b("�̷�", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}