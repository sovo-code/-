#include<iostream>
using namespace std;
int main(){
	unsigned n;
	cin>>n;
	int judge=1;
	for(int i=n-1;i>1;i--){
		if(n%i==0) judge=0;
	} 
	if(judge) cout<<n<<"质数"<<endl;
	else cout<<n<<"非质数"<<endl;
	return 0;
} 
