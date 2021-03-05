#include<iostream>
using namespace std;
struct datetime{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
};
int main()
{
	struct datetime a;
	cout<<"年"<<endl;
	cin>>a.year;
	cout<<"月"<<endl;
	cin>>a.month;
	cout<<"日"<<endl;
	cin>>a.day; 
	cout<<"时"<<endl;
	cin>>a.hour;
	cout<<"分"<<endl;
	cin>>a.minute;
	cout<<"秒"<<endl;
	cin>>a.second;
	cout<<a.year<<"年"<<a.month<<"月"<<a.day<<"日"<<a.hour<<"时"<<a.minute<<"分"<<a.second<<"秒"<<endl;
	return 0; 
}
