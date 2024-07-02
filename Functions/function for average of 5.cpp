#include<iostream>
using namespace std;

string average(int a,int b,int c,int d,int e){
	return "Successful";
}

int main(){
	int num1,num2,num3,num4,num5;
	cout<<"Enter 5 numbers:";
	cin>>num1>>num2>>num3>>num4>>num5;
	cout<<(num1+num2+num3+num4+num5)/5;
	cout<<average(num1,num2,num3,num4,num5);
	
}
