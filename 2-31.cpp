#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main()
{
	srand(time(0));
	int a=rand()%100+1;
	int number;
	cout<<"������²����:";
	cin>>number;
	while(number!=a){
		if(number>a){
			cout<<"����"<<endl; 
		}
		else{
			cout<<"��С"<<endl; 
		}
		cout<<"������²����:";
		cin>>number;
	} 
	cout<<"��¶��ˣ�����\n"<<endl;
	return 0; 
 } 
