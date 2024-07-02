//Swapping without 3rd variable

#include<iostream>
using namespace std;

int main(){
	int a=90,b=3;
	cout<<"Before Swapping ";
	cout<<"a="<<a<<"b="<<b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"after swapping";
	cout<<"a="<<a<<"b="<<b;
}
