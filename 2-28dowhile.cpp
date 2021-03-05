#include<iostream>
using namespace std;
int main()
{
	int number=2;
	int signal=0;
	int a;
	cout<<2<<endl;
	do{
		a=number-1;
		do{
			if(number%a==0){
				signal=1;
				break;
			}
			a--;
		}while(a>1);
		if(!signal){
			cout<<number<<endl;
		}
		signal=0;
		number++;
	}while(number<=100);
	return 0;
}
