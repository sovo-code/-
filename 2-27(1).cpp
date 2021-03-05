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
			cout<<"数据已经增加"<<endl;
			cin>>command;
			continue;
		}
		else if(command=='D'){
			cout<<"数据已经删除"<<endl;
			cin>>command;
			continue;
		}
		else if(command=='S'){
			cout<<"数据已经排序"<<endl;
			cin>>command;
			continue;
		}
		else if(command=='Q'){
			break; 
		}
	}
	return 0;
}
