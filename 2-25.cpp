#include<iostream>
using namespace std;
int main()
{
	char a;
	cout<<"�������������𣿣�Y//N��"<<endl;
	cin>>a;
	for(;;){
	if(a=='Y'){
	
		cout<<"�����������ꡣ"<<endl;
		break;
	}
	else if(a=='N')
	{
		cout<<"����û�����ꡣ"<<endl;
		break;
	}
	else{
		cout<<"��������������"<<endl; 
		cin>>a;
	}
	} 
}
