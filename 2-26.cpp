#include<iostream>
using namespace std;
int main()
{
	int scores;
	cout<<"你考了多少分？（0~100）"<<endl;
	cin>>scores;
	if(scores>=90&&scores<=100){
		cout<<"优"<<endl; 
	}
	else if(scores>=80&&scores<=90){
		cout<<"良"<<endl;
	}
	else if(scores>=60&&scores<=80){
		cout<<"中"<<endl;
	}
	else if(scores>=0&&scores<60){
		cout<<"差"<<endl;
	}
	else{
		cout<<"你输入错误。"<<endl;
	}
}
/*我这里发现可以字母进行比较，但我需要的是一个数字，如何才能区别数字与字母
这是因为字母的ascm值代表的是一个数字，遇到这种情况怎么解决？？？*/
