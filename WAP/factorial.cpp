#include<iostream>
using namespace std;

int main(){
	double num,product=1;
	cout<<"Enter number you want factorial of:";
	cin>>num;
	for(int i=num;i>=1;i--){
		product=product*i;
	}
	cout<<"Factorial of "<<num<<" is ="<<product;
	
}
