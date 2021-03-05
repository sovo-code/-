#include<iostream>
using namespace std;
int main()
{
	char a;
	int n = 32;
	while (n <= 127) {
		a = n;
		cout << a << endl;
		n++;
	}
	return 0;
}