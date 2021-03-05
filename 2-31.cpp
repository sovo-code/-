#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main()
{
	srand(time(0));
	int a=rand()%100+1;
	int number;
	cout<<"输入你猜测的数:";
	cin>>number;
	while(number!=a){
		if(number>a){
			cout<<"过大"<<endl; 
		}
		else{
			cout<<"过小"<<endl; 
		}
		cout<<"输入你猜测的数:";
		cin>>number;
	} 
	cout<<"你猜对了！！！\n"<<endl;
	return 0; 
 } 
