#include<iostream>
using namespace std;
int main()
{
	char a;
	cout << "char" << sizeof(a) << endl;
	cout << "int" << sizeof(int) << endl;
	cout << "unsigned" << sizeof(unsigned) << endl;
	cout << "unsigned char" << sizeof(unsigned char) << endl;
	cout << "long" << sizeof(long) << endl;
	cout << "long long" << sizeof(long long) << endl;
	cout << "bool" << sizeof(bool) << endl;
	return 0;
}