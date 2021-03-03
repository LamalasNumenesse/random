#include <iostream>

using std::cout;
using std::endl;

int F(int n) {
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 2;
	}
	if (n == 2) {
		return 2;
	}
	return F(n - 1) + F(n - 2) + F(n - 3);
}

int main(){
	int array[2][3];
	for (int i = 0; i < 2; i++) {
		for (int ii = 0; ii < 3; ii++) {
			array[i][ii] = i + ii;
			cout << array[i][ii] << " ";
		}
		cout << endl;
	}
	cout << "\n" << F(5) << endl;
}