#include<iostream>
using namespace std;

double add(double a,double b,double c){
	double result;
	result=a+b+c;
	return result;
}

int main(){
	double num1=9.6,num2=4.2,num3=8.9;
	double sum=add(num1,num2,num3);
	cout<<sum<<endl;
	sum=add(2.6,5,5);
	cout<<sum;
}
