#include<iostream>
using namespace std;
int main()
{
	int signal=0;
	int a;
	for(int number=2;number<=100;number++){
		a=number-1;
		for(;a>1;a--){
			if(number%a==0){
				signal=1;
				break;
			}
		}
		if(!signal){
			cout<<number<<endl;
		}
		signal=0;
	}
	return 0;
}
