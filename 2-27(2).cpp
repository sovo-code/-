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
			cout<<"�����Ѿ����ӡ�"<<endl;
			continue;
		case 'D':
			cout<<"�����Ѿ�ɾ����"<<endl;
			continue;
		case 'S':
			cout<<"�����Ѿ�����"<<endl;
			continue;
		case 'Q':
			break; 
	}
	break;
	}
	return 0;
}
