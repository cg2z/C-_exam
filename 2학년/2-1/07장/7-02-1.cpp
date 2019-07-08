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
	Book a("��ǰ C++", 30000, 300), b("��ǰ C++", 30000, 500);
	if (a == 30000) cout << "���� 30000��" << endl;
	if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl;
	if (a == b) cout << "�� å�� ���� å�Դϴ�." << endl;
}