#include<iostream>
using namespace std;
int main()
{
	int scores;
	cout<<"�㿼�˶��ٷ֣���0~100��"<<endl;
	cin>>scores;
	if(scores>=90&&scores<=100){
		cout<<"��"<<endl; 
	}
	else if(scores>=80&&scores<=90){
		cout<<"��"<<endl;
	}
	else if(scores>=60&&scores<=80){
		cout<<"��"<<endl;
	}
	else if(scores>=0&&scores<60){
		cout<<"��"<<endl;
	}
	else{
		cout<<"���������"<<endl;
	}
}
/*�����﷢�ֿ�����ĸ���бȽϣ�������Ҫ����һ�����֣���β���������������ĸ
������Ϊ��ĸ��ascmֵ�������һ�����֣��������������ô���������*/
