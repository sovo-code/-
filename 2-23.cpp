#include<iostream>
using namespace std;
int main()
{
	int a=1, b=2, c=3;
	cout<<(a|b-c)<<endl;
	cout<<(a^b&-c)<<endl;
	cout<<(a&b|c)<<endl;
	cout<<(a|b&c)<<endl;
	cout<<(!a|a)<<endl;
	cout<<(~a|a)<<endl;
	cout<<(a^a)<<endl;
	cout<<(a>>2)<<endl;
}
