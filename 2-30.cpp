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
	cout<<"��"<<endl;
	cin>>a.year;
	cout<<"��"<<endl;
	cin>>a.month;
	cout<<"��"<<endl;
	cin>>a.day; 
	cout<<"ʱ"<<endl;
	cin>>a.hour;
	cout<<"��"<<endl;
	cin>>a.minute;
	cout<<"��"<<endl;
	cin>>a.second;
	cout<<a.year<<"��"<<a.month<<"��"<<a.day<<"��"<<a.hour<<"ʱ"<<a.minute<<"��"<<a.second<<"��"<<endl;
	return 0; 
}
