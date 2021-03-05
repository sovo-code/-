#include<iostream>
using namespace std;
int main()
{
	int number=2;
	int signal=0;
	int a;
	while(number<=100){
		a=number-1;
		while(a>1){
			if(number%a==0){
				signal=1;
				break;
			}
			a--;
		}
		if(!signal){
			cout<<number<<endl;
		}
		signal=0;
		number++;
	}
	return 0;
}
