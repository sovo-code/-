#include<iostream>
using namespace std;
int main()
{
	char command;
	cout<<"Menu: A(dd) D(elete) S(ort) Q(uit), Select one:"<<endl;
	cin>>command;
	for(;;){
		if(command=='A')
		{
			cout<<"�����Ѿ�����"<<endl;
			cin>>command;
			continue;
		}
		else if(command=='D'){
			cout<<"�����Ѿ�ɾ��"<<endl;
			cin>>command;
			continue;
		}
		else if(command=='S'){
			cout<<"�����Ѿ�����"<<endl;
			cin>>command;
			continue;
		}
		else if(command=='Q'){
			break; 
		}
	}
	return 0;
}
