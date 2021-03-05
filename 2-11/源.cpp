#include<iostream>
using namespace std;
int main()
{
	int n = 100;
	for (; n <= 200; n = n + 2) {
	}
	cout << n << endl;
	n = 100;
	while (n <= 200)
		n = n + 2;
	cout << n << endl;
	n = 100;
	do {
		n = n + 2;
	} while (n <= 200);
	cout << n << endl;
	return 0;
}