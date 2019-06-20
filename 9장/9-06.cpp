#include <iostream>
using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0;
	virtual bool pop(int& n) = 0;
	virtual int size() = 0;
};

class Integer : public AbstractStack {
	int totalSize;
	int nowSize;
	int *p;
public:
	Integer(int size){
		p = new int[size];
		totalSize = size;
		nowSize = 0;
	}
	~Integer() {
		delete[] p;
	}
	virtual bool push(int n) {
		if (nowSize >= totalSize)
			return false;
		p[nowSize] = n;
		nowSize++;
		return true;
	}
	virtual bool pop(int& n) {
		if (nowSize == 0)
			return false;
		nowSize--;
		n = p[nowSize];
		return true;
	}
	virtual int size() { return nowSize; }
};

int main() {
	Integer a(5);
	for (int i = 0; i < 10; i++) { 
		if (a.push(i)) cout << "push 성공" << endl;
		else cout << "스택 full" << endl;
	}
	int n;
	for (int i = 0; i < 10; i++) { 
		if (a.pop(n)) cout << "pop 성공 " << n << endl;
		else cout << "스택 empty" << endl;
	}
}