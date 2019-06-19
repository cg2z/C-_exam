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
	Book a("��ǰ C++", 30000, 300), b("��ǰ C++", 30000, 500);
	if (a == 30000) cout << "���� 30000��" << endl;
	if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl;
	if (a == b) cout << "�� å�� ���� å�Դϴ�." << endl;
}