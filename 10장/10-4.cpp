#include <iostream>
using namespace std;

template <class T>
bool search(int find, T a[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == find) count++;
	}
	if (count == 1)return true;
	else return false;
}

int main() {
	int x[] = { 1,10,100,5,4 };
	if (search(100, x, 5))cout << "100�� �迭 x�� ���ԵǾ� �ִ�";
	else cout<< "100�� �迭 x�� ���ԵǾ� ���� �ʴ�";
}