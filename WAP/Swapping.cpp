//WAP to swap the value of two variable with each other
//1)with using 3rd variable
//2) Without using 3rd variable

#include<iostream>
using namespace std;

int main(){
	int a=100,b=001,temp;
	cout<<"before swapping :"<<endl;
	cout<<"a="<<a<<endl<<"b="<<b;
	temp=a;
	a=b;
	b=temp;
	
	cout<<"After swapping";
	cout<<"a="<<a<<endl<<"b="<<b;
	
}
