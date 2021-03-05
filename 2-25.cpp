#include<iostream>
using namespace std;
int main()
{
	char a;
	cout<<"现在正在下雨吗？（Y//N）"<<endl;
	cin>>a;
	for(;;){
	if(a=='Y'){
	
		cout<<"现在正在下雨。"<<endl;
		break;
	}
	else if(a=='N')
	{
		cout<<"现在没有下雨。"<<endl;
		break;
	}
	else{
		cout<<"现在正在下雨吗？"<<endl; 
		cin>>a;
	}
	} 
}
