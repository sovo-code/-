#include<iostream>
using namespace std;

int main() {
	int a[3][3];
	for (int i = 0; i < 3; i++) {
		for (int o = 0; o < 3; o++) {
			cin >> a[i][o];
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 3; j++) {
			int s;
			s = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = s;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << a[i][j]<<" ";
		}
		cout << endl;
	}
	return 0;
}