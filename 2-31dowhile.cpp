#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main()
{
	srand(time(0));
	int a=rand()%100+1;
	int number;
	do{
		cout<<"������²����:";
	    cin>>number;
		if(number>a){
			cout<<"����"<<endl; 
		}
		else if(number<a){
			cout<<"��С"<<endl; 
		}
	}while(number!=a);
	cout<<"��¶��ˣ�����\n"<<endl;
	return 0; 
 } 
