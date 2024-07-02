#include<iostream>
using namespace std;

void power(){
	int power,base,result=1;
	cout<<"Enter a number:";
	cin>>base;
	cout<<"Enter power:";
	cin>>power;
	for(int i=1;i<=power;i++){
	result=result*base;
	}
	cout<<result;
}
int main(){
	power();
}
