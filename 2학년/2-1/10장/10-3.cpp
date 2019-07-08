#include <iostream>
using namespace std;

template <class T>
void reverseArray(T a[], int n) {
	T tmp;
	for (int i = 0; i < n/2; i++) {
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}

int main() {
	int x[] = { 1,10,100,5,4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++)cout << x[i] << ' ';
}