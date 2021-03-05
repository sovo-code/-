#include<iostream>
using namespace std;
int main()
{
	char command;
	cout<<"Menu: A(dd) D(elete) S(ort) Q(uit),Select one."<<endl;
	for(;;){
	cin>>command;
	switch(command){
		case 'A':
			cout<<"数据已经增加。"<<endl;
			continue;
		case 'D':
			cout<<"数据已经删除。"<<endl;
			continue;
		case 'S':
			cout<<"数据已经排序。"<<endl;
			continue;
		case 'Q':
			break; 
	}
	break;
	}
	return 0;
}
